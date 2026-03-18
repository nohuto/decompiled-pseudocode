/*
 * XREFs of MmSetPfnListInfo @ 0x1403C4E98
 * Callers:
 *     PfpPfnPrioRequest @ 0x140739F40 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x14023073C (MiColdPageSizeSupported.c)
 *     MiRelinkStandbyPage @ 0x1402323E8 (MiRelinkStandbyPage.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiAddPageToHeatRanges @ 0x1405B7574 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 *     MiSetActivePfnHeat @ 0x1405B80F8 (MiSetActivePfnHeat.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *SchedulerAssist; // r9
  int v12; // r15d
  unsigned __int64 v13; // r14
  __m128i *v14; // rbx
  unsigned __int64 v15; // rsi
  int PfnPriority; // eax
  ULONG_PTR v17; // rcx
  bool v18; // zf
  __int64 v20; // xmm1_8
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r11
  _DWORD *v29; // r10
  int v30; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v33; // eax
  __int128 v34; // [rsp+30h] [rbp-91h] BYREF
  __int64 v35; // [rsp+40h] [rbp-81h]
  struct _KTHREAD *v36; // [rsp+48h] [rbp-79h]
  __int64 v37; // [rsp+58h] [rbp-69h] BYREF
  int v38; // [rsp+60h] [rbp-61h]
  _DWORD v39[32]; // [rsp+64h] [rbp-5Dh] BYREF

  v35 = 0LL;
  v34 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( a3 && !(unsigned int)MiColdPageSizeSupported(1u) )
    return 3221225659LL;
  v37 = 0LL;
  v38 = 16;
  v6 = a2 + 24 * a1;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v36 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
  if ( a2 >= v6 )
    goto LABEL_17;
  v12 = a3;
  do
  {
    v13 = *(_QWORD *)(a2 + 8);
    if ( v13 > qword_140C50840 || (*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
    {
      v8 = -1073741584;
      goto LABEL_15;
    }
    *(_QWORD *)&v34 = 0LL;
    v14 = (__m128i *)(48 * v13 - 0x220000000000LL);
    v35 = 0LL;
    *((_QWORD *)&v34 + 1) = v13;
    v15 = (unsigned __int8)MiLockPageInline((__int64)v14);
    MiIdentifyPfn(v14, &v34);
    if ( v35 != *(_QWORD *)(a2 + 16)
      || (((unsigned __int64)v34 ^ *(_QWORD *)a2) & 0x1FFFFFFFFFFFE00LL) != 0
      || (LOBYTE(v10) = v14[2].m128i_i8[2] & 7, (_BYTE)v10 != 6) && (unsigned __int8)(v10 - 2) > 2u )
    {
LABEL_27:
      v9 = 1LL;
LABEL_28:
      _InterlockedAnd64(&v14[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = -1LL << ((unsigned __int8)v15 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)v9;
            v18 = (v33 & SchedulerAssist[5]) == 0;
            v10 = (unsigned int)v33 & SchedulerAssist[5];
            SchedulerAssist[5] = v10;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
      v35 |= 2uLL;
      v8 = -1073741788;
      v20 = v35;
      *(_OWORD *)a2 = v34;
      *(_QWORD *)(a2 + 16) = v20;
      goto LABEL_15;
    }
    if ( v12 )
    {
      if ( (*(_QWORD *)a2 & 0x80u) == 0LL
        || (_BYTE)v10 != 2
        || v14[2].m128i_i16[0]
        || !(unsigned int)MiColdPageSizeSupported(3u) && !_bittest64(&v14[2].m128i_i64[1], 0x35u) )
      {
        goto LABEL_27;
      }
      v24 = v14[1].m128i_u64[0];
      if ( (v24 & 0x400) != 0 )
        v25 = v24 >> 11;
      else
        v25 = v24 >> 3;
      v9 = 1LL;
      if ( (v25 & 1) != 0 )
        goto LABEL_28;
      MiSetActivePfnHeat(48 * v13 - 0x220000000000LL);
      _InterlockedAnd64(&v14[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & v26) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v26 + (unsigned __int8)v15));
            v18 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(v15);
      if ( (unsigned int)MiAddPageToHeatRanges(&v37, v13, 3LL) )
        MiNotifyPageHeat(&v37, v9, v10, SchedulerAssist);
    }
    else
    {
      PfnPriority = MiGetPfnPriority(48 * v13 - 0x220000000000LL);
      if ( (_DWORD)v9 != PfnPriority )
      {
        if ( (_BYTE)v10 == 2 )
          MiRelinkStandbyPage(v17, v9);
        else
          v14[2].m128i_i8[3] = v9 | v14[2].m128i_i8[3] & 0xF8;
      }
      _InterlockedAnd64(&v14[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v9 = -1LL << ((unsigned __int8)v15 + 1);
            SchedulerAssist = v22->SchedulerAssist;
            v23 = ~(unsigned __int16)v9;
            v18 = (v23 & SchedulerAssist[5]) == 0;
            v10 = (unsigned int)v23 & SchedulerAssist[5];
            SchedulerAssist[5] = v10;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8(v15);
    }
LABEL_15:
    a2 += 24LL;
  }
  while ( a2 < v6 );
  CurrentThread = v36;
LABEL_17:
  if ( HIDWORD(v37) )
    MiNotifyPageHeat(&v37, v9, v10, SchedulerAssist);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
  KeAbPostRelease((ULONG_PTR)&qword_140C55040);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v8;
}
