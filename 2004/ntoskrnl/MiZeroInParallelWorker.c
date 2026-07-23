/*
 * XREFs of MiZeroInParallelWorker @ 0x1402DF7C0
 * Callers:
 *     MiZeroInParallel @ 0x14030B714 (MiZeroInParallel.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiSetIdealProcessorThread @ 0x1402DF534 (MiSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402DF608 (KeSetIdealProcessorThreadEx.c)
 *     MiDeleteUltraThreadContext @ 0x1402E14F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1402E1D50 (MiCreateUltraThreadContext.c)
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 *     MiZeroAndConvertPage @ 0x14031A554 (MiZeroAndConvertPage.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiZeroWithSystemPtes @ 0x1403EF588 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EF868 (MiZeroWithUltraSpace.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F0E28 (MiGetPfnPageSizeIndex.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall MiZeroInParallelWorker(char *StartContext)
{
  char *v1; // r12
  struct _KTHREAD *CurrentThread; // r14
  KPRIORITY v3; // r13d
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r15
  int v8; // esi
  _DWORD *v9; // r9
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  unsigned int PfnPageSizeIndex; // eax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-118h]
  unsigned int v22; // [rsp+24h] [rbp-114h]
  int v23; // [rsp+28h] [rbp-110h]
  _QWORD *v24; // [rsp+30h] [rbp-108h]
  unsigned int v25; // [rsp+38h] [rbp-100h]
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
  v8 = (unsigned int)MiCreateUltraThreadContext(v31, 0LL, 15LL) != 0 ? 0xF : 0;
  v21 = v8;
  if ( (_DWORD)v5 )
  {
    v10 = 0LL;
    v11 = 3LL;
    v12 = (_QWORD *)(v4 + 32);
    v13 = v5;
    v27 = v5;
    do
    {
      if ( !*((_DWORD *)v12 - 8) && _InterlockedIncrement((volatile signed __int32 *)v12 - 8) == 1 )
      {
        if ( CurrentThread )
        {
          Affinity = *(_GROUP_AFFINITY *)(v12 - 3);
          v22 = MiSetIdealProcessorThread(&Affinity);
          v11 = 3LL;
        }
        v14 = (_QWORD *)*v12;
        if ( (_QWORD *)*v12 != v12 )
        {
          do
          {
            v15 = 3LL;
            if ( (v14[5] & 0x1000000000LL) == 0 )
              goto LABEL_18;
            PfnPageSizeIndex = MiGetPfnPageSizeIndex(v14, 3LL, 3LL, v9);
            v15 = PfnPageSizeIndex;
            if ( PfnPageSizeIndex == -1 )
              v15 = (unsigned int)v11;
            if ( (unsigned int)v15 < (unsigned int)v11 )
              v17 = MiLargePageSizes[v15];
            else
LABEL_18:
              v17 = 1LL;
            if ( (unsigned int)v15 > 2 || *((unsigned __int8 *)v14 + 34) >> 6 == v25 )
            {
              if ( v21 )
              {
                MiZeroWithUltraSpace(v31, v14);
              }
              else
              {
                if ( !v6 )
                  goto LABEL_28;
                if ( v10 < v17 )
                {
                  MiReleasePtes((__int64)&qword_140C4ED40, v6, v7);
                  v6 = 0LL;
                }
                if ( v6 )
                {
                  v19 = v24;
                }
                else
                {
LABEL_28:
                  v18 = *(v12 - 1);
                  v7 = v17;
                  if ( v18 > 0x4000 )
                    v18 = 0x4000LL;
                  if ( v18 >= v17 )
                    v7 = v18;
                  do
                  {
                    v6 = (_QWORD *)MiReservePtes((__int64)&qword_140C4ED40, v7, v11, (unsigned __int64)v9);
                    if ( v6 )
                      break;
                    v7 = (v7 >> 1) & ~(v17 - 1);
                  }
                  while ( v7 >= v17 );
                  v19 = v6;
                  v10 = v7;
                  v24 = v6;
                }
                v20 = MiZeroWithSystemPtes(v19, v10, v14);
                v10 -= v20;
                v24 += v20;
              }
            }
            else
            {
              MiZeroAndConvertPage(v14, v15, v25, *((unsigned int *)v28 + 2));
            }
            v14 = (_QWORD *)*v14;
            v11 = 3LL;
            *(v12 - 1) -= v17;
          }
          while ( v14 != v12 );
          CurrentThread = v26;
          v13 = v27;
        }
        if ( CurrentThread && v22 != -1 )
          KeSetIdealProcessorThreadEx((__int64)KeGetCurrentThread(), v22, 0LL, v9);
        v11 = 3LL;
      }
      v12 += 6;
      v27 = --v13;
    }
    while ( v13 );
    v1 = StartContext;
    v3 = v23;
    if ( v6 )
      MiReleasePtes((__int64)&qword_140C4ED40, v6, v7);
    v8 = v21;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 1, 0xFFFFFFFF) == 1 )
    KeSignalGate(v1 + 16, 1LL);
  if ( v3 != -1 )
    KeSetPriorityThread(CurrentThread, v3);
  if ( v8 )
    MiDeleteUltraThreadContext(v31);
}
