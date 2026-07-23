/*
 * XREFs of MiZeroInParallelWorker @ 0x1403248C0
 * Callers:
 *     MiZeroInParallel @ 0x1402C9D34 (MiZeroInParallel.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     MiDeleteUltraThreadContext @ 0x1403265F0 (MiDeleteUltraThreadContext.c)
 *     MiSetIdealProcessorThread @ 0x1403269D0 (MiSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140326AA4 (KeSetIdealProcessorThreadEx.c)
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     MiZeroAndConvertPage @ 0x140349894 (MiZeroAndConvertPage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiZeroWithSystemPtes @ 0x1403EE228 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EE508 (MiZeroWithUltraSpace.c)
 *     MiGetPfnPageSizeIndex @ 0x1403EFAC8 (MiGetPfnPageSizeIndex.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall MiZeroInParallelWorker(PVOID StartContext)
{
  PVOID v1; // r12
  struct _KTHREAD *CurrentThread; // r14
  KPRIORITY v3; // r13d
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r15
  int v8; // esi
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int64 v11; // r12
  int v12; // r13d
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  unsigned int PfnPageSizeIndex; // eax
  unsigned int v18; // r8d
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-118h]
  unsigned int v24; // [rsp+24h] [rbp-114h]
  int v25; // [rsp+28h] [rbp-110h]
  _QWORD *v26; // [rsp+30h] [rbp-108h]
  unsigned int v27; // [rsp+38h] [rbp-100h]
  struct _KTHREAD *v28; // [rsp+40h] [rbp-F8h]
  __int64 v29; // [rsp+48h] [rbp-F0h]
  __int64 *v30; // [rsp+58h] [rbp-E0h]
  _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v33[128]; // [rsp+80h] [rbp-B8h] BYREF

  v1 = StartContext;
  memset(v33, 0, sizeof(v33));
  CurrentThread = KeGetCurrentThread();
  v3 = -1;
  v30 = (__int64 *)*((_QWORD *)v1 + 1);
  v24 = 0;
  v4 = *v30;
  v5 = *((unsigned int *)v30 + 4);
  v27 = *((_DWORD *)v30 + 3);
  v25 = -1;
  v28 = CurrentThread;
  if ( KeGetCurrentIrql() == 2
    || (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink == KiExecuteDpc )
  {
    CurrentThread = 0LL;
    v28 = 0LL;
  }
  else if ( *(_DWORD *)v1 != -1 )
  {
    v3 = KeSetPriorityThread(CurrentThread, *(_DWORD *)v1);
    v25 = v3;
  }
  v6 = 0LL;
  v26 = 0LL;
  LODWORD(v7) = 0;
  v8 = (unsigned int)MiCreateUltraThreadContext(v33, 0LL, 15LL) != 0 ? 0xF : 0;
  v23 = v8;
  if ( (_DWORD)v5 )
  {
    v11 = 0LL;
    v9 = 3LL;
    v12 = v8;
    v13 = (_QWORD *)(v4 + 32);
    v14 = v5;
    v29 = v5;
    do
    {
      if ( !*((_DWORD *)v13 - 8) && _InterlockedIncrement((volatile signed __int32 *)v13 - 8) == 1 )
      {
        if ( CurrentThread )
        {
          Affinity = *(_GROUP_AFFINITY *)(v13 - 3);
          v24 = MiSetIdealProcessorThread(&Affinity);
          LODWORD(v9) = 3;
        }
        v15 = (_QWORD *)*v13;
        if ( (_QWORD *)*v13 != v13 )
        {
          do
          {
            v16 = 3LL;
            if ( (v15[5] & 0x1000000000LL) == 0 )
              goto LABEL_18;
            PfnPageSizeIndex = MiGetPfnPageSizeIndex(v15, (unsigned int)v9, 3LL, v10);
            v16 = PfnPageSizeIndex;
            if ( PfnPageSizeIndex == -1 )
              v16 = v18;
            if ( (unsigned int)v16 < v18 )
              v19 = MiLargePageSizes[v16];
            else
LABEL_18:
              v19 = 1LL;
            if ( (unsigned int)v16 > 2 || *((unsigned __int8 *)v15 + 34) >> 6 == v27 )
            {
              if ( v12 )
              {
                MiZeroWithUltraSpace(v33, v15);
              }
              else
              {
                if ( !v6 )
                  goto LABEL_28;
                if ( v11 < v19 )
                {
                  MiReleasePtes((__int64)&qword_140C4EE80, v6, v7);
                  v6 = 0LL;
                }
                if ( v6 )
                {
                  v21 = v26;
                }
                else
                {
LABEL_28:
                  v20 = *(v13 - 1);
                  v7 = v19;
                  if ( v20 > 0x4000 )
                    v20 = 0x4000LL;
                  if ( v20 >= v19 )
                    v7 = v20;
                  do
                  {
                    v6 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v7);
                    if ( v6 )
                      break;
                    v7 = (v7 >> 1) & ~(v19 - 1);
                  }
                  while ( v7 >= v19 );
                  v21 = v6;
                  v11 = v7;
                  v26 = v6;
                }
                v22 = MiZeroWithSystemPtes(v21, v11, v15);
                v11 -= v22;
                v26 += v22;
              }
            }
            else
            {
              MiZeroAndConvertPage(v15, v16, v27, *((unsigned int *)v30 + 2));
            }
            v15 = (_QWORD *)*v15;
            LODWORD(v9) = 3;
            *(v13 - 1) -= v19;
          }
          while ( v15 != v13 );
          CurrentThread = v28;
          v14 = v29;
        }
        if ( CurrentThread && v24 != -1 )
          KeSetIdealProcessorThreadEx(KeGetCurrentThread(), v24, 0LL);
        v9 = 3LL;
      }
      v13 += 6;
      v29 = --v14;
    }
    while ( v14 );
    v1 = StartContext;
    v3 = v25;
    if ( v6 )
      MiReleasePtes((__int64)&qword_140C4EE80, v6, v7);
    v8 = v23;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 1, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)v1 + 16, 1LL, v9, v10);
  if ( v3 != -1 )
    KeSetPriorityThread(CurrentThread, v3);
  if ( v8 )
    MiDeleteUltraThreadContext(v33);
}
