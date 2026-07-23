/*
 * XREFs of MmSetPfnListInfo @ 0x140372734
 * Callers:
 *     PfpPfnPrioRequest @ 0x140709F90 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x14025FF78 (MiRelinkStandbyPage.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddPageToHeatList @ 0x1403F7C88 (MiAddPageToHeatList.c)
 *     MiColdPageSizeSupported @ 0x1403F7D58 (MiColdPageSizeSupported.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiNotifyPageHeat @ 0x140560004 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v7; // r13
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v9; // r15d
  __int64 v10; // r8
  _DWORD *SchedulerAssist; // r9
  int v12; // r12d
  unsigned __int64 v13; // r14
  __m128i *v14; // rbx
  unsigned __int64 v15; // rsi
  int PfnPriority; // eax
  int v17; // edx
  ULONG_PTR v18; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v21; // eax
  bool v22; // zf
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r11
  _DWORD *v28; // r10
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  int v32; // eax
  __int64 v33; // xmm1_8
  __int128 v34; // [rsp+30h] [rbp-91h] BYREF
  __int64 v35; // [rsp+40h] [rbp-81h]
  struct _KTHREAD *v36; // [rsp+48h] [rbp-79h]
  __int64 v37; // [rsp+58h] [rbp-69h] BYREF
  int v38; // [rsp+60h] [rbp-61h]
  _BYTE v39[132]; // [rsp+64h] [rbp-5Dh] BYREF

  v35 = 0LL;
  v34 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( a3 && !(unsigned int)MiColdPageSizeSupported(1LL) )
    return 3221225659LL;
  v37 = 0LL;
  v38 = 16;
  v7 = &a2[3 * a1];
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v36 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C50E80, 0LL);
  if ( a2 >= v7 )
    goto LABEL_53;
  v12 = a3;
  do
  {
    v13 = a2[1];
    if ( v13 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v13 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
    {
      v9 = -1073741584;
      goto LABEL_51;
    }
    *(_QWORD *)&v34 = 0LL;
    v14 = (__m128i *)(48 * v13 - 0x58000000000LL);
    v35 = 0LL;
    *((_QWORD *)&v34 + 1) = v13;
    v15 = (unsigned __int8)MiLockPageInline((__int64)v14, 0x4000000000000LL, v10, SchedulerAssist);
    MiIdentifyPfn(v14, (unsigned __int64 *)&v34);
    if ( v35 != a2[2] )
      goto LABEL_42;
    if ( (((unsigned __int64)v34 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0 )
      goto LABEL_42;
    LOBYTE(v10) = v14[2].m128i_i8[2] & 7;
    if ( (_BYTE)v10 != 6 && (unsigned __int8)(v10 - 2) > 2u )
      goto LABEL_42;
    if ( !v12 )
    {
      PfnPriority = MiGetPfnPriority(48 * v13 - 0x58000000000LL);
      if ( v17 != PfnPriority )
      {
        if ( (_BYTE)v10 == 2 )
          MiRelinkStandbyPage(v18, v17);
        else
          v14[2].m128i_i8[3] = v17 | v14[2].m128i_i8[3] & 0xF8;
      }
      _InterlockedAnd64(&v14[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v22 = (v21 & SchedulerAssist[5]) == 0;
            v10 = (unsigned int)v21 & SchedulerAssist[5];
            SchedulerAssist[5] = v10;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
      goto LABEL_51;
    }
    if ( (*a2 & 0x80u) != 0LL
      && (_BYTE)v10 == 2
      && !v14[2].m128i_i16[0]
      && ((unsigned int)MiColdPageSizeSupported(3LL) || MiIsPfnFileOnly(48 * v13 - 0x58000000000LL))
      && ((v23 = v14[1].m128i_u64[0], (v23 & 0x400) != 0) ? (v24 = v23 >> 11) : (v24 = v23 >> 3), (v24 & 1) == 0) )
    {
      MiSetNonResidentPteHeat((unsigned __int64 *)&v14[1], 1);
      _InterlockedAnd64(&v14[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & v25) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v22 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
      __writecr8(v15);
      MiAddPageToHeatList(&v37, v13, 3LL);
    }
    else
    {
LABEL_42:
      _InterlockedAnd64(&v14[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            SchedulerAssist = v31->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v22 = (v32 & SchedulerAssist[5]) == 0;
            v10 = (unsigned int)v32 & SchedulerAssist[5];
            SchedulerAssist[5] = v10;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
      }
      __writecr8(v15);
      v35 |= 2uLL;
      v9 = -1073741788;
      v33 = v35;
      *(_OWORD *)a2 = v34;
      a2[2] = v33;
    }
LABEL_51:
    a2 += 3;
  }
  while ( a2 < v7 );
  CurrentThread = v36;
LABEL_53:
  if ( HIDWORD(v37) )
    MiNotifyPageHeat(&v37);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50E80, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C50E80);
  KeAbPostRelease((ULONG_PTR)&qword_140C50E80);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v9;
}
