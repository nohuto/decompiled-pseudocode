/*
 * XREFs of MiZeroInParallel @ 0x1402940B0
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140295074 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408DA244 (MiFindLargePageMemory.c)
 * Callees:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1406A7420 (PsCreateSystemThread.c)
 */

void __fastcall MiZeroInParallel(__int64 *a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // edi
  __int128 v6; // xmm1
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r8
  unsigned __int8 v10; // r9
  unsigned __int64 v11; // rax
  KPRIORITY v12; // esi
  int v13; // edi
  __int128 v14; // [rsp+40h] [rbp-9h]
  __int64 v15; // [rsp+58h] [rbp+Fh]
  _QWORD StartContext[2]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v17; // [rsp+70h] [rbp+27h] BYREF
  char v18; // [rsp+72h] [rbp+29h]
  char v19; // [rsp+73h] [rbp+2Ah]
  int v20; // [rsp+74h] [rbp+2Bh]
  _QWORD v21[3]; // [rsp+78h] [rbp+2Fh] BYREF
  HANDLE ThreadHandle; // [rsp+B8h] [rbp+6Fh] BYREF

  ThreadHandle = 0LL;
  v1 = 0;
  StartContext[0] = 0LL;
  v2 = *((_DWORD *)a1 + 4);
  v3 = *a1;
  v19 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = dword_140C4DF24;
  v6 = *((_OWORD *)a1 + 2);
  v15 = *((_QWORD *)&v6 + 1);
  if ( v2 )
  {
    v7 = v6;
    v8 = v2;
    do
    {
      if ( *(_QWORD *)(v3 + 32) == v3 + 32 )
      {
        *(_DWORD *)v3 = 1;
      }
      else
      {
        *(_DWORD *)v3 = 0;
        ++v1;
        if ( v7 )
        {
          v9 = 0LL;
          *((_QWORD *)&v14 + 1) = *((_QWORD *)&v6 + 1);
          v10 = 0;
          *(_QWORD *)&v14 = 0LL;
          if ( v5 )
          {
            do
            {
              _BitScanForward64(&v11, v7);
              v9 |= 1LL << v11;
              v7 &= ~v9;
              if ( !v7 )
                break;
              ++v10;
            }
            while ( v10 < v5 );
            *((_QWORD *)&v6 + 1) = v15;
            *(_QWORD *)&v14 = v9;
          }
          *(_OWORD *)(v3 + 8) = v14;
        }
        else
        {
          *(_QWORD *)(v3 + 8) = 0LL;
        }
      }
      v3 += 48LL;
      --v8;
    }
    while ( v8 );
  }
  if ( v1 == 1
    || (a1[1] & 4) != 0
    || (CurrentThread->MiscFlags & 0x400) != 0
    || KeGetCurrentIrql() == 2
    || (MiFlags & 0x30) == 0 )
  {
    v1 = 0;
  }
  v20 = 0;
  v21[1] = v21;
  v21[0] = v21;
  StartContext[1] = a1;
  v17 = 263;
  v18 = 6;
  HIDWORD(StartContext[0]) = v1;
  if ( v1 )
    v12 = KeSetPriorityThread(CurrentThread, 15);
  else
    v12 = -1;
  v13 = 0;
  LODWORD(StartContext[0]) = v12;
  if ( v1 )
  {
    while ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, MiZeroInParallelWorker, StartContext) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      if ( ++v13 >= v1 )
        goto LABEL_28;
    }
    v1 -= v13;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)StartContext + 1, -v1) == v1 )
      KeSignalGate((__int64)&v17, 1);
LABEL_28:
    if ( v1 )
      KeSetPriorityThread(CurrentThread, v12);
  }
  if ( v13 )
    KeWaitForGate((__int64)&v17, 0);
  else
    MiZeroInParallelWorker(StartContext);
}
