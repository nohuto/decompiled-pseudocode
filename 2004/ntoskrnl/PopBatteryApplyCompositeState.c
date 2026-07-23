/*
 * XREFs of PopBatteryApplyCompositeState @ 0x14076D40C
 * Callers:
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140276C08 (_tlgCreate1Sz_char.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopCheckForWork @ 0x1402DEAA0 (PopCheckForWork.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopGetPolicyWorker @ 0x1402DF330 (PopGetPolicyWorker.c)
 *     PopSetNotificationWork @ 0x1402DF45C (PopSetNotificationWork.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140397058 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopUpdateAcDcState @ 0x1403970DC (PopUpdateAcDcState.c)
 *     PopInitilizeAcDcSettings @ 0x1403A61A4 (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PopBsdHandleRequest @ 0x1403F21A4 (PopBsdHandleRequest.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     PopTracePowerReconfig @ 0x14056E274 (PopTracePowerReconfig.c)
 *     PopSqmAddToStream @ 0x140579CB8 (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x140579E60 (PopSqmCreateDwordStreamEntry.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A7304 (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14076D6BC (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x14076D77C (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x14076D7AC (PopEsQueueStateEvaluation.c)
 *     PopAccountCbEnergyChange @ 0x14076D814 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14076D8C0 (PopBatteryCheckCompositeCapacity.c)
 *     PopInitSIdle @ 0x14077A6C8 (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x140785210 (PopBatteryUpdateAlarms.c)
 *     PopRecordAcDcState @ 0x1408DDDA8 (PopRecordAcDcState.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408E4E94 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x1408E51E0 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x1408E529C (PopDiagTraceBatteryTriggerMet.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x1408E9A74 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x1408EA2DC (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x1408EA910 (PopRecalculateCBTriggerLevels.c)
 *     PpmProfileAcDcUpdate @ 0x1408F2C5C (PpmProfileAcDcUpdate.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
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
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // ecx
  char *v27; // rdx
  unsigned int v28; // ecx
  const CHAR *v29; // rdx
  int v30; // r8d
  unsigned __int8 v31; // r9
  unsigned __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  char v37; // [rsp+40h] [rbp-C0h]
  unsigned int v38; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v39; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  int Buffer; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+60h] [rbp-A0h] BYREF
  int *v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  int *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+A0h] [rbp-60h] BYREF
  char v51[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  _DWORD v54[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v55[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v56[4]; // [rsp+100h] [rbp+0h] BYREF
  int v57[4]; // [rsp+110h] [rbp+10h] BYREF

  v2 = ~*a1;
  v40 = 0;
  Buffer = 0;
  v37 = 0;
  v5 = v2 & 1;
  v39 = v5;
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
    v37 = 1;
  }
  if ( byte_140C23118 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4LL, &dword_140C23114);
    v24 = qword_140C23120;
    v25 = 0LL;
    v6 = 0LL;
    while ( (__int64 *)v24 != &qword_140C23120 )
    {
      v26 = *(_DWORD *)(v24 + 104);
      if ( v26 == 2 )
      {
        v6 = (unsigned int)(v6 + 1);
      }
      else if ( v26 == 4 )
      {
        v25 = (unsigned int)(v25 + 1);
      }
      v24 = *(_QWORD *)v24;
    }
    v7 = (unsigned int)dword_140C23114;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140C23114 )
    {
      PopCachedValidBatteryCount = dword_140C23114;
      PopDiagTraceBatteryCountChange((unsigned int)dword_140C23114, v6, v25, &qword_140C23120);
    }
    v37 = 1;
  }
  PopReleasePolicyLock(v7, v6);
  PopBatteryCheckCompositeCapacity(a1, v5, &v40);
  if ( ((unk_140C23140 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140C23118 )
  {
    PopSetNotificationWork(8u);
    byte_140C23118 = 0;
  }
  v8 = *(__m128i *)a1;
  v9 = 0;
  HIDWORD(qword_140C2314C) = a2;
  v10 = (unsigned int)_mm_cvtsi128_si32(v8);
  if ( a2 != -1 )
    v9 = a2;
  unk_140C23140 = v8;
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
  if ( HIDWORD(qword_140C23160) )
    PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_140C23160
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140C23228, 1LL)
    && (dword_140C2322C[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v11);
  v38 = 0;
  v12 = 0;
  v13 = 0;
  v14 = dword_140C23114 != 0 ? 3 : 0;
  do
  {
    v15 = v13;
    v16 = 3LL * v13;
    v17 = dword_140C2322C[6 * v13];
    v18 = 0x140000000LL + 24LL * v13 + 12726824;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v18) )
    {
      if ( PopBatteryCachedFlags[v15] != v17 )
      {
        v27 = (char *)PopPolicy + 96;
        PopBatteryCachedFlags[v15] = v17;
        PopDiagTraceBatteryAlarmStatus(v18, &v27[8 * v16], &v38);
        v12 = v38;
        if ( dword_140C2322C[6 * v38] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(0x140000000LL + 24LL * v38 + 12726824, (char *)PopPolicy + 24 * v38 + 96, &v38);
          v12 = v38;
        }
      }
      if ( !byte_140C23220 )
        PopExecutePowerAction(
          0x140000000LL + 24LL * v12 + 12726824,
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
      dword_140C2322C[2 * v16] = v17 & 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v38, v18);
      v12 = v38;
    }
    v20 = 0x140000000uLL;
    v38 = ++v12;
    v13 = v12;
  }
  while ( v12 < 4 );
  v21 = v39;
  if ( dword_140C2317C != v14 )
  {
    Buffer = v14;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, &Buffer, 4u, 0LL, 0LL, 0, 0);
    v28 = dword_140C021E8;
    if ( (unsigned int)dword_140C021E8 > 5 )
    {
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v29 = "PoBatteryLevelCritical";
        }
        else if ( v14 == 2 )
        {
          v29 = "PoBatteryLevelLow";
        }
        else
        {
          v29 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v29 = "PoBatteryLevelUnknown";
      }
      tlgCreate1Sz_char((__int64)v51, v29);
      v42 = v30;
      v52 = &v42;
      v53 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C021E8,
        (unsigned __int8 *)byte_1400288D8,
        0LL,
        0LL,
        4u,
        &v50);
      v28 = dword_140C021E8;
    }
    if ( (unsigned int)(v14 - 1) <= 1 != (unsigned int)(dword_140C2317C - 1) <= 1
      && v28 > 5
      && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
    {
      v43 = v31;
      v47 = 4LL;
      v46 = &v43;
      v44 = v14;
      v48 = &v44;
      v49 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C021E8,
        (unsigned __int8 *)&dword_14002891C,
        0LL,
        0LL,
        4u,
        &v45);
    }
    dword_140C2317C = v14;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v14 << 6);
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( v37 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v20, v19);
  PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C232D0);
  xmmword_140C232E0 = 0LL;
  BYTE7(xmmword_140C232E0) = dword_140C23178;
  xmmword_140C232F0 = 0LL;
  LOBYTE(xmmword_140C232E0) = unk_140C23140 & 1;
  if ( dword_140C23114 )
  {
    BYTE1(xmmword_140C232E0) = 1;
    BYTE2(xmmword_140C232E0) = (unk_140C23140 & 4) != 0;
    DWORD2(xmmword_140C232E0) = HIDWORD(qword_140C23160);
    HIDWORD(xmmword_140C232E0) = unk_140C23144;
    *(_QWORD *)&xmmword_140C232F0 = qword_140C2314C;
    *((_QWORD *)&xmmword_140C232F0 + 1) = unk_140C23168;
    BYTE3(xmmword_140C232E0) = byte_140C23288 != 0 || (unk_140C23140 & 2) != 0;
  }
  PopAccountCbEnergyChange();
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C232D0);
  if ( v40 )
  {
    v39 = (dword_140C2328C + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4LL, &v39);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) ^= (HIBYTE(PopBsdPowerTransition) ^ v39) & 0x7F;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v32) = 0;
    v33 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C2328C == -1 )
      v32 = (MEMORY[0xFFFFF78000000008] - qword_140C23290 + 5000) / 0x2710uLL;
    if ( PopPlatformAoAc )
    {
      PopSqmCreateDwordStreamEntry(v54, v39);
      PopSqmCreateDwordStreamEntry(v55, v40);
      PopSqmCreateDwordStreamEntry(v56, v21 ^ 1);
      PopSqmCreateDwordStreamEntry(v57, v32);
      PopSqmAddToStream(v35, v34, v36, (__int64)v54);
    }
    PopBatteryTracePercentageRemaining(v39, v40, v21, (unsigned int)v32);
    qword_140C23290 = v33;
  }
  LOBYTE(v22) = v37;
  return PopEsQueueStateEvaluation(v22);
}
