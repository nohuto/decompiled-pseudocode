/*
 * XREFs of PopDeferDoze @ 0x1408F2C48
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopPrintEx @ 0x140364760 (PopPrintEx.c)
 *     PopIsDozeSupported @ 0x14071EDF8 (PopIsDozeSupported.c)
 *     PopQueryPowerSettingUlong @ 0x140775BB4 (PopQueryPowerSettingUlong.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408EC700 (PopDiagTraceDozeDeferralDecision.c)
 *     PopIsWakeTimerImmanent @ 0x1408F2DD4 (PopIsWakeTimerImmanent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

unsigned __int8 __fastcall PopDeferDoze(int a1, int a2, _BYTE *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // si
  char IsDozeSupported; // al
  int v9; // r9d
  int v10; // edx
  int v11; // r12d
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // r9
  PVOID v17; // rdi
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  P[0] = 0LL;
  v3 = 0;
  v20 = 0;
  v21 = 0;
  v4 = 0;
  v22 = 0LL;
  IsDozeSupported = PopIsDozeSupported((__int64)&PopCapabilities);
  v10 = v9 | 0x10;
  if ( IsDozeSupported )
    v10 = v9;
  v11 = v10 | 0x20;
  if ( *((_DWORD *)PopPolicy + 22) )
    v11 = v10;
  if ( PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, &v20, &v21) )
  {
    v3 = v20;
    if ( !*a3 )
      v3 = v21;
  }
  v12 = v11 | 0x40;
  if ( v3 )
    v12 = v11;
  v13 = v12;
  if ( a3[3] && *a3 && v20 == 1 && !v21 )
    v13 = v12 | 0x100;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( !(unsigned __int8)PopIsWakeTimerImmanent(MEMORY[0xFFFFF78000000008], a1, a2, (unsigned int)&v22, (__int64)P) )
    v13 |= 0x80u;
  v15 = ~PopDozeDeferralChecksToIgnore & v13;
  if ( !v15 )
  {
    v4 = 1;
    PopPrintEx(3u, (__int64)"Deferring doze to S4\n");
  }
  v16 = v14;
  v17 = P[0];
  PopDiagTraceDozeDeferralDecision(v4, v15, (__int64)P[0], v16, v22, a1, a2);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x53577254u);
  return v4;
}
