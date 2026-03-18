/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x140612560
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PspSendJobNotification @ 0x1403144BC (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406129B4 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x1406129DC (PspLockJobShared.c)
 *     PspGetEffectiveNoWakeCharge @ 0x140612A04 (PspGetEffectiveNoWakeCharge.c)
 *     PspAddAccountingValues @ 0x140615D7C (PspAddAccountingValues.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140615F90 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140615FEC (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x140616040 (PspLockJobMemoryLimitsShared.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     PspRateControlLimitFlag @ 0x14066211C (PspRateControlLimitFlag.c)
 *     PspSendReliableJobNotification @ 0x1406DB80C (PspSendReliableJobNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406E1138 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140904C64 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // r13d
  __int64 v6; // rax
  struct _LIST_ENTRY *Blink; // rax
  LIST_ENTRY WaitListHead; // xmm1
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v10; // r14
  struct _LIST_ENTRY *v11; // r12
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // edi
  int v20; // r13d
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // esi
  int v24; // r12d
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  bool v27; // zf
  struct _LIST_ENTRY *v28; // rcx
  struct _KTHREAD *v29; // rdx
  struct _LIST_ENTRY *v30; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // rdx
  int v48; // r8d
  int v49; // eax
  int v50; // eax
  unsigned int v51; // edx
  int v52; // eax
  int v53; // eax
  struct _KPROCESS *v54; // rcx
  struct _KTHREAD *v55; // rdi
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  struct _KTHREAD *v57; // [rsp+28h] [rbp-D8h]
  int v58; // [rsp+30h] [rbp-D0h]
  struct _LIST_ENTRY *v59; // [rsp+38h] [rbp-C8h]
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  struct _LIST_ENTRY *v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *v65; // [rsp+68h] [rbp-98h]
  __int128 v66; // [rsp+70h] [rbp-90h]
  LIST_ENTRY v67; // [rsp+80h] [rbp-80h]
  __int128 v68; // [rsp+90h] [rbp-70h]
  __int128 v69; // [rsp+A0h] [rbp-60h]
  LIST_ENTRY v70; // [rsp+B0h] [rbp-50h]
  __int128 v71; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY *v72; // [rsp+D0h] [rbp-30h]
  _OWORD v73[4]; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v57 = CurrentThread;
  v61 = 0LL;
  v60 = 0LL;
  PspLockJobShared(Event, CurrentThread);
  v6 = *(_QWORD *)&Event[41].Header.Lock;
  if ( v6 )
  {
    v32 = *(_OWORD *)(v6 + 24);
    v73[0] = *(_OWORD *)(v6 + 8);
    v33 = *(_OWORD *)(v6 + 40);
    v73[1] = v32;
    v34 = *(_OWORD *)(v6 + 56);
    v73[2] = v33;
    v73[3] = v34;
  }
  else
  {
    memset(v73, 0, sizeof(v73));
  }
  Blink = Event[7].Header.WaitListHead.Blink;
  WaitListHead = Event[47].Header.WaitListHead;
  Flink = Event[21].Header.WaitListHead.Flink;
  v10 = Event[21].Header.WaitListHead.Blink;
  v11 = Event[6].Header.WaitListHead.Blink;
  v66 = *(_OWORD *)&Event[46].Header.WaitListHead.Blink;
  v12 = *(_OWORD *)&Event[48].Header.Lock;
  v62 = Blink;
  LODWORD(Blink) = HIDWORD(Event[18].Header.WaitListHead.Blink);
  v67 = WaitListHead;
  v13 = *(_OWORD *)&Event[48].Header.WaitListHead.Blink;
  v58 = (int)Blink;
  LODWORD(Blink) = Event[10].Header.WaitListHead.Blink;
  v68 = v12;
  v69 = v13;
  v14 = *(_OWORD *)&Event[50].Header.Lock;
  v70 = Event[49].Header.WaitListHead;
  v72 = Event[50].Header.WaitListHead.Blink;
  v71 = v14;
  if ( ((unsigned __int8)Blink & 4) != 0 )
    v59 = Event[9].Header.WaitListHead.Blink;
  else
    v59 = 0LL;
  PspGetEffectiveNoWakeCharge(Event, &v61, &v60);
  PspUnlockJob(v15, CurrentThread);
  v17 = 0x10000LL;
  v56 = 0;
  if ( *(_QWORD *)&v73[0] )
  {
    if ( (unsigned __int64)Flink + (unsigned __int64)v70.Flink > *(_QWORD *)&v73[0] )
      v4 = 0x10000;
    v56 = v4;
  }
  if ( *((_QWORD *)&v73[0] + 1) && (unsigned __int64)v10 + (unsigned __int64)v70.Blink > *((_QWORD *)&v73[0] + 1) )
  {
    v4 |= 0x20000u;
    v56 = v4;
  }
  v18 = *(_QWORD *)&v73[1];
  if ( *(_QWORD *)&v73[1] && (unsigned __int64)v11 + *((_QWORD *)&v66 + 1) > *(_QWORD *)&v73[1] )
  {
    v4 |= 4u;
    v56 = v4;
  }
  if ( *(_OWORD *)((char *)&v73[1] + 8) != 0LL )
  {
    PspLockJobMemoryLimitsShared(Event, CurrentThread);
    v56 = PspGetJobMemoryUsageNotificationViolations(
            Event,
            Event[40].Header.WaitListHead.Blink,
            (char *)Event[40].Header.WaitListHead.Blink + (unsigned __int64)Event[55].Header.WaitListHead.Blink,
            33280LL) | v4;
    PspUnlockJobMemoryLimitsShared(Event, CurrentThread);
  }
  v19 = DWORD2(v73[2]);
  v20 = DWORD1(v73[3]);
  if ( DWORD2(v73[2]) && *(_DWORD *)(a2 + 32) == DWORD1(v73[3]) && *(_DWORD *)(a2 + 44) >= DWORD2(v73[2]) )
  {
    v49 = PspRateControlLimitFlag(0LL, v18, v17, v16);
    v21 = v49 | v56;
    v56 |= v49;
  }
  else
  {
    v21 = v56;
  }
  v22 = HIDWORD(v73[2]);
  if ( HIDWORD(v73[2]) && *(_DWORD *)(a2 + 36) == DWORD2(v73[3]) && *(_DWORD *)(a2 + 48) >= HIDWORD(v73[2]) )
  {
    v50 = PspRateControlLimitFlag(1LL, v21, v17, v16);
    v21 = v50 | v51;
    v56 = v21;
  }
  v23 = v73[3];
  v24 = HIDWORD(v73[3]);
  if ( LODWORD(v73[3]) && *(_DWORD *)(a2 + 40) == HIDWORD(v73[3]) && *(_DWORD *)(a2 + 52) >= LODWORD(v73[3]) )
  {
    v52 = PspRateControlLimitFlag(2LL, v21, v17, v16);
    LODWORD(v21) = v52 | v21;
    v56 = v21;
  }
  if ( (_DWORD)v21 )
  {
    PspLockJobExclusive(Event, v57);
    v36 = *(_QWORD *)&Event[41].Header.Lock;
    if ( v36 )
    {
      *(_DWORD *)(v36 + 4) |= v56;
      v37 = *(_QWORD **)&Event[41].Header.Lock;
      if ( (v56 & 0x10000) != 0 )
        v37[9] = *(_QWORD *)&v73[0];
      if ( (v56 & 0x20000) != 0 )
        v37[10] = *((_QWORD *)&v73[0] + 1);
      if ( (v56 & 4) != 0 )
        v37[11] = *(_QWORD *)&v73[1];
      if ( (v56 & 0x200) != 0 )
        v37[13] = *(_QWORD *)&v73[2];
      if ( (v56 & 0x8000) != 0 )
        v37[12] = *((_QWORD *)&v73[1] + 1);
      v38 = PspRateControlLimitFlag(0LL, v37, v56, v35);
      if ( (v38 & (unsigned int)v40) != 0 )
      {
        *(_DWORD *)(v39 + 112) = v19;
        *(_DWORD *)(v39 + 124) = v20;
      }
      v42 = PspRateControlLimitFlag(1LL, v39, v40, v41);
      if ( (v42 & (unsigned int)v44) != 0 )
      {
        v53 = DWORD2(v73[3]);
        *(_DWORD *)(v43 + 116) = v22;
        *(_DWORD *)(v43 + 128) = v53;
      }
      v46 = PspRateControlLimitFlag(2LL, v43, v44, v45);
      if ( (v46 & v48) != 0 )
      {
        *(_DWORD *)(v47 + 120) = v23;
        *(_DWORD *)(v47 + 132) = v24;
      }
    }
    if ( *(_QWORD *)&Event[19].Header.Lock
      && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x800) != 0
      && (Event[55].Header.LockNV & 4) == 0 )
    {
      PspSendReliableJobNotification(Event);
    }
    PspUnlockJob(Event, v57);
  }
  v25 = *(_QWORD *)(a2 + 16);
  if ( v25 )
  {
    if ( (*(_DWORD *)(v25 + 1120) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v25 + 1120), 0xFFFFFFDF);
      v54 = *(struct _KPROCESS **)(a2 + 16);
      v63 = *(_QWORD *)(a2 + 8);
      v64 = 2LL;
      v65 = v54[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v54);
      v25 = *(_QWORD *)(a2 + 16);
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v25);
  }
  if ( v59 && (struct _LIST_ENTRY *)((char *)v62 + *((_QWORD *)&v66 + 1)) > v59 )
  {
    if ( v58 )
    {
      if ( v58 != 1 )
        goto LABEL_17;
      v55 = v57;
      PspLockJobShared(Event, v57);
      if ( !*(_QWORD *)&Event[19].Header.Lock || (HIDWORD(Event[36].Header.WaitListHead.Flink) & 2) == 0 )
      {
        PspUnlockJob(Event, v57);
        PspTerminateAllProcessesInJobHierarchy(Event);
        goto LABEL_17;
      }
      if ( (int)PspSendJobNotification((__int64)Event, 1LL, 0, 0) >= 0 )
      {
        LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
        Event[9].Header.WaitListHead.Blink = 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Event) )
        goto LABEL_17;
      v55 = v57;
      PspLockJobExclusive(Event, v57);
      if ( !Event[9].Header.LockNV
        && *(_QWORD *)&Event[19].Header.Lock
        && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 2) != 0 )
      {
        PspSendJobNotification((__int64)Event, 1LL, 0, 0);
      }
    }
    PspUnlockJob(Event, v55);
  }
LABEL_17:
  v26 = *(_QWORD *)(a2 + 24) + v60;
  v27 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v26;
  if ( v27 )
  {
    if ( v26 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL, v26, v17);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v61 >= (unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Event, v26, v17);
    }
  }
  v28 = Event[44].Header.WaitListHead.Blink;
  if ( v28 )
  {
    PspLockJobExclusive(v28, v57);
    PspLockJobExclusive(Event, v57);
    PspAddAccountingValues(&Event[44].Header.WaitListHead.Blink[70], &Event[46].Header.WaitListHead.Blink);
    memset(&Event[46].Header.WaitListHead.Blink, 0, 0x68uLL);
    PspUnlockJob(Event, v57);
    v30 = Event[44].Header.WaitListHead.Blink;
    v29 = v57;
  }
  else
  {
    PspLockJobExclusive(Event, v57);
    memset(&Event[46].Header.WaitListHead.Blink, 0, 0x68uLL);
    v29 = v57;
    v30 = (struct _LIST_ENTRY *)Event;
  }
  PspUnlockJob(v30, v29);
  return 0LL;
}
