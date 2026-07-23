/*
 * XREFs of MiZeroInParallelWorker @ 0x140297360
 * Callers:
 *     MiZeroInParallel @ 0x1402940B0 (MiZeroInParallel.c)
 * Callees:
 *     MiZeroAndConvertPage @ 0x1402352B0 (MiZeroAndConvertPage.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     KeSetIdealProcessorThreadEx @ 0x14029C098 (KeSetIdealProcessorThreadEx.c)
 *     MiSetIdealProcessorThread @ 0x14029E170 (MiSetIdealProcessorThread.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14052AB44 (MiReserveLowPrioritySystemPtes.c)
 */

void __fastcall MiZeroInParallelWorker(PVOID StartContext)
{
  PVOID v1; // r12
  struct _KTHREAD *CurrentThread; // r14
  KPRIORITY v3; // r13d
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  int v8; // esi
  unsigned __int64 v9; // r12
  int v10; // r13d
  __int64 *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned int PfnPageSizeIndex; // eax
  unsigned int v16; // r8d
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-118h]
  unsigned int v22; // [rsp+24h] [rbp-114h]
  int v23; // [rsp+28h] [rbp-110h]
  __int64 v24; // [rsp+30h] [rbp-108h]
  int v25; // [rsp+38h] [rbp-100h]
  struct _KTHREAD *v26; // [rsp+40h] [rbp-F8h]
  __int64 v27; // [rsp+48h] [rbp-F0h]
  __int64 *v28; // [rsp+58h] [rbp-E0h]
  _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v31[128]; // [rsp+80h] [rbp-B8h] BYREF

  v1 = StartContext;
  memset(v31, 0, sizeof(v31));
  CurrentThread = KeGetCurrentThread();
  v3 = -1;
  v28 = (__int64 *)*((_QWORD *)v1 + 1);
  v22 = 0;
  v4 = *v28;
  v5 = *((unsigned int *)v28 + 4);
  v25 = *((_DWORD *)v28 + 3);
  v23 = -1;
  v26 = CurrentThread;
  if ( KeGetCurrentIrql() == 2
    || (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink == KiExecuteDpc )
  {
    CurrentThread = 0LL;
    v26 = 0LL;
  }
  else if ( *(_DWORD *)v1 != -1 )
  {
    v3 = KeSetPriorityThread(CurrentThread, *(_DWORD *)v1);
    v23 = v3;
  }
  v6 = 0LL;
  v24 = 0LL;
  LODWORD(v7) = 0;
  v8 = (unsigned int)MiCreateUltraThreadContext((__int64)v31, 0, 15) != 0 ? 0xF : 0;
  v21 = v8;
  if ( (_DWORD)v5 )
  {
    v9 = 0LL;
    v10 = v8;
    v11 = (__int64 *)(v4 + 32);
    v12 = v5;
    v27 = v5;
    do
    {
      if ( !*((_DWORD *)v11 - 8) && _InterlockedIncrement((volatile signed __int32 *)v11 - 8) == 1 )
      {
        if ( CurrentThread )
        {
          Affinity = *(_GROUP_AFFINITY *)(v11 - 3);
          v22 = MiSetIdealProcessorThread(&Affinity);
        }
        v13 = *v11;
        if ( (__int64 *)*v11 != v11 )
        {
          do
          {
            LODWORD(v14) = 3;
            if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) == 0 )
              goto LABEL_18;
            PfnPageSizeIndex = MiGetPfnPageSizeIndex(v13);
            v14 = PfnPageSizeIndex;
            if ( PfnPageSizeIndex == -1 )
              v14 = v16;
            if ( (unsigned int)v14 < v16 )
              v17 = MiLargePageSizes[v14];
            else
LABEL_18:
              v17 = 1LL;
            if ( (unsigned int)v14 > 2 || *(unsigned __int8 *)(v13 + 34) >> 6 == v25 )
            {
              if ( v10 )
              {
                MiZeroWithUltraSpace(v31, v13);
              }
              else
              {
                if ( !v6 )
                  goto LABEL_28;
                if ( v9 < v17 )
                {
                  MiReleasePtes(&qword_140C4EF80, v6, (unsigned int)v7);
                  v6 = 0LL;
                }
                if ( v6 )
                {
                  v19 = v24;
                }
                else
                {
LABEL_28:
                  v18 = *(v11 - 1);
                  v7 = v17;
                  if ( v18 > 0x4000 )
                    v18 = 0x4000LL;
                  if ( v18 >= v17 )
                    v7 = v18;
                  do
                  {
                    v6 = MiReserveLowPrioritySystemPtes((unsigned int)v7);
                    if ( v6 )
                      break;
                    v7 = (v7 >> 1) & ~(v17 - 1);
                  }
                  while ( v7 >= v17 );
                  v19 = v6;
                  v9 = v7;
                  v24 = v6;
                }
                v20 = MiZeroWithSystemPtes(v19, v9, v13);
                v9 -= v20;
                v24 += 8 * v20;
              }
            }
            else
            {
              MiZeroAndConvertPage(v13, v14, v25, *((_DWORD *)v28 + 2));
            }
            v13 = *(_QWORD *)v13;
            *(v11 - 1) -= v17;
          }
          while ( (__int64 *)v13 != v11 );
          CurrentThread = v26;
          v12 = v27;
        }
        if ( CurrentThread && v22 != -1 )
          KeSetIdealProcessorThreadEx(KeGetCurrentThread(), v22, 0LL);
      }
      v11 += 6;
      v27 = --v12;
    }
    while ( v12 );
    v1 = StartContext;
    v3 = v23;
    if ( v6 )
      MiReleasePtes(&qword_140C4EF80, v6, (unsigned int)v7);
    v8 = v21;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 1, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)v1 + 16, 1);
  if ( v3 != -1 )
    KeSetPriorityThread(CurrentThread, v3);
  if ( v8 )
    MiDeleteUltraThreadContext(v31);
}
