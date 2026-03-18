/*
 * XREFs of MiZeroInParallelWorker @ 0x14026C240
 * Callers:
 *     MiZeroInParallel @ 0x14026446C (MiZeroInParallel.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     MiDereferencePageChains @ 0x1402646FC (MiDereferencePageChains.c)
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14026A574 (MiCreateUltraThreadContext.c)
 *     MiZeroWithUltraSpace @ 0x14026C4CC (MiZeroWithUltraSpace.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     MiSetIdealProcessorThread @ 0x14035CA04 (MiSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14035CE74 (KeSetIdealProcessorThreadEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiZeroAndConvertPage @ 0x1405B05D0 (MiZeroAndConvertPage.c)
 *     MiZeroWithSystemPtes @ 0x1405B2A90 (MiZeroWithSystemPtes.c)
 */

void __fastcall MiZeroInParallelWorker(char *StartContext)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // r15d
  KPRIORITY v4; // edx
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  int UltraThreadContext; // eax
  volatile signed __int32 *v9; // rsi
  unsigned int v10; // ecx
  int v11; // r14d
  unsigned int v12; // eax
  __int64 *v13; // r15
  __int64 v14; // r14
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  unsigned int PfnPageSizeIndex; // eax
  __int64 v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-108h]
  int v20; // [rsp+24h] [rbp-104h]
  unsigned int v21; // [rsp+28h] [rbp-100h]
  unsigned int v22; // [rsp+2Ch] [rbp-FCh]
  KPRIORITY Priority; // [rsp+30h] [rbp-F8h]
  __int64 v24; // [rsp+38h] [rbp-F0h]
  unsigned int v25; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v26; // [rsp+48h] [rbp-E0h]
  struct _KTHREAD *v27; // [rsp+50h] [rbp-D8h]
  volatile signed __int32 *v28; // [rsp+58h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v30[128]; // [rsp+70h] [rbp-B8h] BYREF

  memset(v30, 0, sizeof(v30));
  CurrentThread = KeGetCurrentThread();
  v3 = *((_DWORD *)StartContext + 2);
  Priority = -1;
  v21 = 0;
  v25 = *((_DWORD *)StartContext + 1);
  v19 = v3;
  v27 = CurrentThread;
  if ( KeGetCurrentIrql() == 2
    || (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink == KiExecuteDpc )
  {
    CurrentThread = 0LL;
    v27 = 0LL;
  }
  else
  {
    v4 = *((_DWORD *)StartContext + 12);
    if ( v4 != -1 )
      Priority = KeSetPriorityThread(CurrentThread, v4);
  }
  v5 = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  LODWORD(v7) = 0;
  UltraThreadContext = MiCreateUltraThreadContext((__int64)v30, 0, 15);
  v9 = (volatile signed __int32 *)(StartContext + 88);
  v28 = (volatile signed __int32 *)(StartContext + 88);
  v10 = 0;
  v11 = UltraThreadContext != 0 ? 0xF : 0;
  v22 = 0;
  v20 = v11;
  if ( !v3 )
    goto LABEL_32;
  v12 = v3;
  v13 = (__int64 *)(StartContext + 120);
  while ( (__int64 *)*v13 == v13 )
  {
LABEL_26:
    ++v10;
    v9 += 12;
    v13 += 6;
    v22 = v10;
    v28 = v9;
    if ( v10 >= v12 )
      goto LABEL_29;
  }
  if ( *v9 || _InterlockedCompareExchange(v9, 1, 0) )
  {
LABEL_25:
    v12 = v19;
    goto LABEL_26;
  }
  if ( CurrentThread )
  {
    Affinity = *(struct _GROUP_AFFINITY *)(v13 - 3);
    v21 = MiSetIdealProcessorThread(&Affinity);
  }
  v14 = *v13;
  if ( (__int64 *)*v13 != v13 )
  {
    v15 = v26;
    while ( 1 )
    {
      if ( _bittest64((const signed __int64 *)(v14 + 40), 0x28u)
        && (PfnPageSizeIndex = MiGetPfnPageSizeIndex(v14), PfnPageSizeIndex <= 2) )
      {
        v16 = MiLargePageSizes[PfnPageSizeIndex];
        if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v25 )
        {
          MiZeroAndConvertPage(v14, PfnPageSizeIndex, v25);
          goto LABEL_18;
        }
        v5 = v24;
      }
      else
      {
        v16 = 1LL;
      }
      if ( !v20 )
      {
        if ( !v6 )
          goto LABEL_47;
        if ( v15 < v16 )
        {
          MiReleasePtes(&qword_140C534C0, v6, (unsigned int)v7);
LABEL_47:
          v7 = *(v13 - 1);
          if ( v7 > 0x4000 )
            v7 = 0x4000LL;
          if ( v7 < v16 )
            v7 = v16;
          do
          {
            v6 = MiReservePtes(&qword_140C534C0, (unsigned int)v7);
            if ( v6 )
              break;
            v7 = (v7 >> 1) & ~(v16 - 1);
          }
          while ( v7 >= v16 );
          v5 = v6;
          v15 = v7;
        }
        v18 = MiZeroWithSystemPtes(v5, v15, v14);
        v15 -= v18;
        v24 = v5 + 8 * v18;
        goto LABEL_18;
      }
      MiZeroWithUltraSpace(v30, v14);
LABEL_18:
      v14 = *(_QWORD *)v14;
      *(v13 - 1) -= v16;
      v5 = v24;
      if ( (__int64 *)v14 == v13 )
      {
        v9 = v28;
        v26 = v15;
        CurrentThread = v27;
        break;
      }
    }
  }
  if ( CurrentThread && v21 != -1 )
    KeSetIdealProcessorThreadEx(KeGetCurrentThread(), v21, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)StartContext + 13, 0xFFFFFFFF) != 1 )
  {
    v10 = v22;
    goto LABEL_25;
  }
  KeSignalGate((_DWORD *)StartContext + 16, 1);
LABEL_29:
  if ( v6 )
    MiReleasePtes(&qword_140C534C0, v6, (unsigned int)v7);
  v11 = v20;
LABEL_32:
  if ( Priority != -1 )
    KeSetPriorityThread(CurrentThread, Priority);
  if ( v11 )
    MiDeleteUltraThreadContext((__int64)v30);
  MiDereferencePageChains((volatile signed __int32 *)StartContext);
}
