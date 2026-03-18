/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0050B60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIResumeInterpreter @ 0x1C0064914 (AMLIResumeInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase2(__int64 a1)
{
  _QWORD *v1; // rax
  const char *v2; // rdx
  const char *v4; // r10
  _QWORD *v5; // rcx
  __int64 v6; // r8
  bool v7; // zf

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C006FB8B;
  v4 = (const char *)&unk_1C006FB8B;
  v5 = 0LL;
  if ( v1 )
  {
    v6 = v1[1];
    v5 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v4 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x54u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      (char)v5,
      v2,
      v4);
  v7 = *(_DWORD *)(a1 + 104) == 1;
  *(_DWORD *)(a1 + 212) = 5;
  if ( !v7 )
    AMLIResumeInterpreter(v5);
  ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  return 0LL;
}
