/*
 * XREFs of MiZeroInParallel @ 0x1402E2D60
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402E3D24 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14055DA5C (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408DA0E4 (MiFindLargePageMemory.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     MiZeroInParallelWorker @ 0x1402E6010 (MiZeroInParallelWorker.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1406D0140 (PsCreateSystemThread.c)
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
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int128 v16; // [rsp+40h] [rbp-9h]
  __int64 v17; // [rsp+58h] [rbp+Fh]
  _QWORD StartContext[2]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v19; // [rsp+70h] [rbp+27h] BYREF
  char v20; // [rsp+72h] [rbp+29h]
  char v21; // [rsp+73h] [rbp+2Ah]
  int v22; // [rsp+74h] [rbp+2Bh]
  _QWORD v23[3]; // [rsp+78h] [rbp+2Fh] BYREF
  HANDLE ThreadHandle; // [rsp+B8h] [rbp+6Fh] BYREF

  ThreadHandle = 0LL;
  v1 = 0;
  StartContext[0] = 0LL;
  v2 = *((_DWORD *)a1 + 4);
  v3 = *a1;
  v21 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = dword_140C4DEE4;
  v6 = *((_OWORD *)a1 + 2);
  v17 = *((_QWORD *)&v6 + 1);
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
          *((_QWORD *)&v16 + 1) = *((_QWORD *)&v6 + 1);
          v10 = 0;
          *(_QWORD *)&v16 = 0LL;
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
            *((_QWORD *)&v6 + 1) = v17;
            *(_QWORD *)&v16 = v9;
          }
          *(_OWORD *)(v3 + 8) = v16;
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
  v22 = 0;
  v23[1] = v23;
  v23[0] = v23;
  StartContext[1] = a1;
  v19 = 263;
  v20 = 6;
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
      KeSignalGate((__int64)&v19, 1LL, v14, v15);
LABEL_28:
    if ( v1 )
      KeSetPriorityThread(CurrentThread, v12);
  }
  if ( v13 )
    KeWaitForGate((__int64)&v19, 0);
  else
    MiZeroInParallelWorker(StartContext);
}
