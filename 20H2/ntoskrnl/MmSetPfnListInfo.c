/*
 * XREFs of MmSetPfnListInfo @ 0x140372878
 * Callers:
 *     PfpPfnPrioRequest @ 0x1406138B0 (PfpPfnPrioRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     MiRelinkStandbyPage @ 0x140265740 (MiRelinkStandbyPage.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddPageToHeatList @ 0x1403F64EC (MiAddPageToHeatList.c)
 *     MiColdPageSizeSupported @ 0x1403F65BC (MiColdPageSizeSupported.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiNotifyPageHeat @ 0x14055E2F4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v7; // r13
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *SchedulerAssist; // r9
  int v13; // r12d
  unsigned __int64 v14; // r14
  __m128i *v15; // rbx
  unsigned __int64 v16; // rsi
  int PfnPriority; // eax
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C50CC0, 0LL);
  if ( a2 >= v7 )
    goto LABEL_53;
  v13 = a3;
  do
  {
    v14 = a2[1];
    if ( v14 > 0xFFFFFFFFFLL
      || (v10 = 0x4000000000000LL, (*(_QWORD *)(48 * v14 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0) )
    {
      v9 = -1073741584;
      goto LABEL_51;
    }
    *(_QWORD *)&v34 = 0LL;
    v15 = (__m128i *)(48 * v14 - 0x58000000000LL);
    v35 = 0LL;
    *((_QWORD *)&v34 + 1) = v14;
    v16 = (unsigned __int8)MiLockPageInline((__int64)v15, 0x4000000000000LL, v11, SchedulerAssist);
    MiIdentifyPfn(v15, (unsigned __int64 *)&v34);
    if ( v35 != a2[2] )
      goto LABEL_42;
    v10 = *a2;
    if ( (((unsigned __int64)v34 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0 )
      goto LABEL_42;
    LOBYTE(v11) = v15[2].m128i_i8[2] & 7;
    if ( (_BYTE)v11 != 6 && (unsigned __int8)(v11 - 2) > 2u )
      goto LABEL_42;
    if ( !v13 )
    {
      PfnPriority = MiGetPfnPriority(48 * v14 - 0x58000000000LL);
      if ( (_DWORD)v10 != PfnPriority )
      {
        if ( (_BYTE)v11 == 2 )
          MiRelinkStandbyPage(v18, v10);
        else
          v15[2].m128i_i8[3] = v10 | v15[2].m128i_i8[3] & 0xF8;
      }
      _InterlockedAnd64(&v15[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = -1LL << ((unsigned __int8)v16 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)v10;
            v22 = (v21 & SchedulerAssist[5]) == 0;
            v11 = (unsigned int)v21 & SchedulerAssist[5];
            SchedulerAssist[5] = v11;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v16);
      goto LABEL_51;
    }
    if ( (v10 & 0x80u) != 0LL
      && (_BYTE)v11 == 2
      && !v15[2].m128i_i16[0]
      && ((unsigned int)MiColdPageSizeSupported(3LL) || MiIsPfnFileOnly(48 * v14 - 0x58000000000LL))
      && ((v23 = v15[1].m128i_u64[0], (v23 & 0x400) != 0) ? (v24 = v23 >> 11) : (v24 = v23 >> 3), (v24 & 1) == 0) )
    {
      MiSetNonResidentPteHeat((unsigned __int64 *)&v15[1], 1);
      _InterlockedAnd64(&v15[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & v25) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v22 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
      __writecr8(v16);
      MiAddPageToHeatList(&v37, v14, 3LL);
    }
    else
    {
LABEL_42:
      _InterlockedAnd64(&v15[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            v10 = -1LL << ((unsigned __int8)v16 + 1);
            SchedulerAssist = v31->SchedulerAssist;
            v32 = ~(unsigned __int16)v10;
            v22 = (v32 & SchedulerAssist[5]) == 0;
            v11 = (unsigned int)v32 & SchedulerAssist[5];
            SchedulerAssist[5] = v11;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
      }
      __writecr8(v16);
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
    MiNotifyPageHeat(&v37, v10, v11, SchedulerAssist);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50CC0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C50CC0);
  KeAbPostRelease((ULONG_PTR)&qword_140C50CC0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v9;
}
