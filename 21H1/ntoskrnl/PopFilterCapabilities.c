/*
 * XREFs of PopFilterCapabilities @ 0x14070FBC4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056AAC8 (PopCaptureSleepStudyStatistics.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140576788 (PopIdleArmAoAcDozeS4Timer.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPolicySystemIdle @ 0x14070E290 (PopPolicySystemIdle.c)
 *     PopVerifyPowerActionPolicy @ 0x140776FDC (PopVerifyPowerActionPolicy.c)
 *     PopInitSIdle @ 0x1407782B8 (PopInitSIdle.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1408EB4E8 (PoTtmInitiatePowerStateTransition.c)
 *     PopUpdateSystemIdleContext @ 0x1408ECBA0 (PopUpdateSystemIdleContext.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopLogDisabledSleepReason @ 0x14070FACC (PopLogDisabledSleepReason.c)
 *     PopCheckDisabledState @ 0x14070FD38 (PopCheckDisabledState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14070FD6C (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x14070FDF0 (IoGetLegacyVetoList.c)
 *     PopLogSleepDisabled @ 0x140769C88 (PopLogSleepDisabled.c)
 *     EmClientQueryRuleState @ 0x14098C0F0 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFilterCapabilities(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  char v4; // di
  char v5; // r9
  char v6; // r10
  unsigned int v7; // r11d
  char v8; // cl
  __int64 v10; // r9
  char *v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a1;
  v13 = 0;
  v4 = 0;
  *(_OWORD *)a2 = v2;
  P = 0LL;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_QWORD *)(a2 + 64) = *((_QWORD *)a1 + 8);
  *(_DWORD *)(a2 + 72) = *((_DWORD *)a1 + 18);
  if ( (int)IoGetLegacyVetoList(&P, &v13) < 0 )
    goto LABEL_6;
  if ( v13 )
  {
    v4 = 1;
    v10 = 0LL;
    v11 = (char *)P;
    if ( *(_WORD *)P )
    {
      do
      {
        v12 = -1LL;
        do
          ++v12;
        while ( *(_WORD *)&v11[2 * v12] );
        v10 += 2 * v12 + 2;
        v11 = (char *)P + v10;
      }
      while ( *(_WORD *)((char *)P + v10) );
    }
    PopLogSleepDisabled(4LL, 31LL, P, v10 + 2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !v4 )
LABEL_6:
    PopRemoveReasonRecordByReasonCode(4LL);
  v14 = 1;
  EmClientQueryRuleState(EM_RULE_DISABLE_FASTS4_GUID, &v14);
  if ( v14 == 2 )
    PopLogSleepDisabled(7LL, 16LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(7LL);
  if ( byte_140C23EDD )
    PopLogSleepDisabled(14LL, 7LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(14LL);
  PopLogDisabledSleepReason();
  if ( (unsigned __int8)PopCheckDisabledState(0LL) )
    *(_BYTE *)(a2 + 3) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(1LL) )
    *(_BYTE *)(a2 + 4) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(2LL) )
    *(_BYTE *)(a2 + 5) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(3LL) )
    *(_BYTE *)(a2 + 6) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(6LL) )
    *(_BYTE *)(a2 + 17) = 0;
  v8 = *(_BYTE *)(a2 + 5);
  if ( !v8 || !v5 )
  {
    if ( !v8 )
      v5 = v6;
    *(_BYTE *)(a2 + 17) = 0;
    if ( !v5 )
      *(_BYTE *)(a2 + 18) = 0;
  }
  return v7;
}
