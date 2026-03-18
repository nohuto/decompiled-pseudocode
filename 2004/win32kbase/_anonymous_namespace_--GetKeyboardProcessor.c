/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C006A414
 * Callers:
 *     SetKeyboardInputRoutingPolicy @ 0x1C005D840 (SetKeyboardInputRoutingPolicy.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C005F680 (ApplyGatheredKeyboardDeviceCount.c)
 *     GetKeyboardInputRoutingPolicy @ 0x1C0069750 (GetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x1C0069770 (xxxKeyEventEx.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00C20FC (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C0130420 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetKeyboardProcessor()
{
  if ( qword_1C0241048 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0241048 + 8LL))(qword_1C0241048);
  else
    return 0LL;
}
