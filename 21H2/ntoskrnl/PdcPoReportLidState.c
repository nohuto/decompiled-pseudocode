/*
 * XREFs of PdcPoReportLidState @ 0x140996C60
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140995B08 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoReportLidState(int a1)
{
  char v1; // di
  int v2; // ebx
  bool v3; // zf
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  PopAcquirePolicyLock(a1);
  v2 = 0;
  if ( PopErrataReportingIncorrectLidState || PopLidOpened == v1 )
  {
LABEL_6:
    v3 = v1 == 0;
    goto LABEL_7;
  }
  PopLidOpened = v1;
  v3 = v1 == 0;
  if ( !v1 )
  {
    if ( PopPlatformAoAc )
      PopPowerAggregatorForceSessionSwitch(4u);
    goto LABEL_6;
  }
LABEL_7:
  LOBYTE(v2) = !v3;
  v7 = v2;
  PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_CHANGE, 4u, &v7);
  return PopReleasePolicyLock(v5, v4);
}
