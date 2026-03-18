/*
 * XREFs of PopBatteryApplyCompositeState @ 0x14076AC6C
 * Callers:
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14033DAA4 (_tlgCreate1Sz_char.c)
 *     PopCheckForWork @ 0x14035CBB4 (PopCheckForWork.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopGetPolicyWorker @ 0x14035D440 (PopGetPolicyWorker.c)
 *     PopSetNotificationWork @ 0x14035ED80 (PopSetNotificationWork.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140396448 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopUpdateAcDcState @ 0x1403964CC (PopUpdateAcDcState.c)
 *     PopInitilizeAcDcSettings @ 0x1403A9E74 (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PopBsdHandleRequest @ 0x1403F0DDC (PopBsdHandleRequest.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     PopTracePowerReconfig @ 0x14056DC24 (PopTracePowerReconfig.c)
 *     PopSqmAddToStream @ 0x140579678 (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x140579820 (PopSqmCreateDwordStreamEntry.c)
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14076AF1C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x14076AFDC (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x14076B00C (PopEsQueueStateEvaluation.c)
 *     PopAccountCbEnergyChange @ 0x14076B074 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14076B120 (PopBatteryCheckCompositeCapacity.c)
 *     PopInitSIdle @ 0x1407782B8 (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x14077C810 (PopBatteryUpdateAlarms.c)
 *     PopRecordAcDcState @ 0x1408DCA38 (PopRecordAcDcState.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408E3C14 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x1408E3F60 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x1408E401C (PopDiagTraceBatteryTriggerMet.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x1408E87F4 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x1408E905C (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x1408E9690 (PopRecalculateCBTriggerLevels.c)
 *     PpmProfileAcDcUpdate @ 0x1408F196C (PpmProfileAcDcUpdate.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(_DWORD *a1, int a2)
{
  int v2; // r14d
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i v8; // xmm1
  int v9; // edx
  __int64 v10; // r9
  int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // eax
  int v14; // ebx
  __int64 v15; // r15
  __int64 v16; // r12
  int v17; // esi
  __int64 v18; // r13
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  char *v30; // rdx
  unsigned int v31; // ecx
  const CHAR *v32; // rdx
  int v33; // r8d
  unsigned __int8 v34; // r9
  unsigned __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  char v43; // [rsp+40h] [rbp-C0h]
  unsigned int v44; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v45; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+54h] [rbp-ACh] BYREF
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  int v50; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+60h] [rbp-A0h] BYREF
  int *v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  int *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+A0h] [rbp-60h] BYREF
  char v57[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  _DWORD v60[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v61[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v62[4]; // [rsp+100h] [rbp+0h] BYREF
  int v63[4]; // [rsp+110h] [rbp+10h] BYREF

  v2 = ~*a1;
  v46 = 0;
  v47 = 0;
  v43 = 0;
  v5 = v2 & 1;
  v45 = v5;
  PopAcquirePolicyLock((_DWORD)a1);
  if ( PopUpdateAcDcState(v5) )
  {
    LOBYTE(v7) = 1;
    PopBatteryUpdateAlarms(v7, 0LL);
    PopSetNotificationWork(4u);
    PopRecordAcDcState(v5);
    PopInitSIdle(2LL);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v5 == 1 )
      PopMaxChargeRate = 0LL;
    v43 = 1;
  }
  if ( byte_140C236D8 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4LL, &dword_140C236D4);
    v27 = qword_140C236E0;
    v28 = 0LL;
    v6 = 0LL;
    while ( (__int64 *)v27 != &qword_140C236E0 )
    {
      v29 = *(_DWORD *)(v27 + 104);
      if ( v29 == 2 )
      {
        v6 = (unsigned int)(v6 + 1);
      }
      else if ( v29 == 4 )
      {
        v28 = (unsigned int)(v28 + 1);
      }
      v27 = *(_QWORD *)v27;
    }
    v7 = (unsigned int)dword_140C236D4;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140C236D4 )
    {
      PopCachedValidBatteryCount = dword_140C236D4;
      PopDiagTraceBatteryCountChange((unsigned int)dword_140C236D4, v6, v28, &qword_140C236E0);
    }
    v43 = 1;
  }
  PopReleasePolicyLock(v7, v6);
  PopBatteryCheckCompositeCapacity(a1, v5, &v46);
  if ( ((unk_140C23700 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140C236D8 )
  {
    PopSetNotificationWork(8u);
    byte_140C236D8 = 0;
  }
  v8 = *(__m128i *)a1;
  v9 = 0;
  HIDWORD(qword_140C2370C) = a2;
  v10 = (unsigned int)_mm_cvtsi128_si32(v8);
  if ( a2 != -1 )
    v9 = a2;
  unk_140C23700 = v8;
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    v10,
    v8.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)),
    _mm_srli_si128(v8, 8).m128i_i32[1],
    v9);
  if ( HIDWORD(qword_140C23720) )
    PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_140C23720
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140C237E8, 1LL)
    && (dword_140C237EC[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v11);
  v44 = 0;
  v12 = 0;
  v13 = 0;
  v14 = dword_140C236D4 != 0 ? 3 : 0;
  do
  {
    v15 = v13;
    v16 = 3LL * v13;
    v17 = dword_140C237EC[6 * v13];
    v18 = 0x140000000LL + 24LL * v13 + 12728296;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v18) )
    {
      if ( PopBatteryCachedFlags[v15] != v17 )
      {
        v30 = (char *)PopPolicy + 96;
        PopBatteryCachedFlags[v15] = v17;
        PopDiagTraceBatteryAlarmStatus(v18, &v30[8 * v16], &v44);
        v12 = v44;
        if ( dword_140C237EC[6 * v44] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(0x140000000LL + 24LL * v44 + 12728296, (char *)PopPolicy + 24 * v44 + 96, &v44);
          v12 = v44;
        }
      }
      if ( !byte_140C237E0 )
        PopExecutePowerAction(
          0x140000000LL + 24LL * v12 + 12728296,
          8u,
          (__int64 *)PopPolicy + 3 * v12 + 13,
          *((_DWORD *)PopPolicy + 6 * v12 + 29),
          1u);
      if ( v14 == 3 )
      {
        if ( v12 )
        {
          if ( v12 == 1 )
            v14 = 2;
        }
        else
        {
          v14 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v15] = -1;
      dword_140C237EC[2 * v16] = v17 & 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v44, v18);
      v12 = v44;
    }
    v20 = 0x140000000uLL;
    v44 = ++v12;
    v13 = v12;
  }
  while ( v12 < 4 );
  v21 = v45;
  if ( dword_140C2373C != v14 )
  {
    v47 = v14;
    v42 = 0;
    v41 = 0;
    v40 = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LEVEL, (__int64)&v47);
    v31 = dword_140C021E8;
    if ( (unsigned int)dword_140C021E8 > 5 )
    {
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v32 = "PoBatteryLevelCritical";
        }
        else if ( v14 == 2 )
        {
          v32 = "PoBatteryLevelLow";
        }
        else
        {
          v32 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v32 = "PoBatteryLevelUnknown";
      }
      tlgCreate1Sz_char((__int64)v57, v32);
      v48 = v33;
      v58 = &v48;
      v59 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C021E8,
        (unsigned __int8 *)byte_14002881B,
        0LL,
        0LL,
        4u,
        &v56);
      v31 = dword_140C021E8;
    }
    if ( (unsigned int)(v14 - 1) <= 1 != (unsigned int)(dword_140C2373C - 1) <= 1
      && v31 > 5
      && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
    {
      v49 = v34;
      v53 = 4LL;
      v52 = &v49;
      v50 = v14;
      v54 = &v50;
      v55 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C021E8,
        (unsigned __int8 *)byte_1400287D8,
        0LL,
        0LL,
        4u,
        &v51);
    }
    dword_140C2373C = v14;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v14 << 6);
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( v43 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v20, v19);
  PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C23890);
  LOBYTE(v24) = unk_140C23700;
  xmmword_140C238A0 = 0LL;
  BYTE7(xmmword_140C238A0) = dword_140C23738;
  xmmword_140C238B0 = 0LL;
  LOBYTE(xmmword_140C238A0) = unk_140C23700 & 1;
  if ( dword_140C236D4 )
  {
    BYTE1(xmmword_140C238A0) = 1;
    BYTE2(xmmword_140C238A0) = (unk_140C23700 & 4) != 0;
    LOBYTE(v24) = byte_140C23848 != 0 || (unk_140C23700 & 2) != 0;
    DWORD2(xmmword_140C238A0) = HIDWORD(qword_140C23720);
    HIDWORD(xmmword_140C238A0) = unk_140C23704;
    *(_QWORD *)&xmmword_140C238B0 = qword_140C2370C;
    *((_QWORD *)&xmmword_140C238B0 + 1) = unk_140C23728;
    BYTE3(xmmword_140C238A0) = v24;
  }
  PopAccountCbEnergyChange(v24, v22, v23);
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23890);
  if ( v46 )
  {
    v45 = (dword_140C2384C + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4LL, &v45);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) ^= (HIBYTE(PopBsdPowerTransition) ^ v45) & 0x7F;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v35) = 0;
    v36 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C2384C == -1 )
      v35 = (MEMORY[0xFFFFF78000000008] - qword_140C23850 + 5000) / 0x2710uLL;
    if ( PopPlatformAoAc )
    {
      PopSqmCreateDwordStreamEntry(v60, v45);
      PopSqmCreateDwordStreamEntry(v61, v46);
      PopSqmCreateDwordStreamEntry(v62, v21 ^ 1);
      PopSqmCreateDwordStreamEntry(v63, v35);
      PopSqmAddToStream(v38, v37, v39, (__int64)v60);
    }
    PopBatteryTracePercentageRemaining(v45, v46, v21, (unsigned int)v35, v40, v41, v42);
    qword_140C23850 = v36;
  }
  LOBYTE(v25) = v43;
  return PopEsQueueStateEvaluation(v25);
}
