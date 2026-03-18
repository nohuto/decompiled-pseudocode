/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C00614E4
 * Callers:
 *     SetKeyboardInputRoutingPolicy @ 0x1C004FD30 (SetKeyboardInputRoutingPolicy.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C0051B50 (ApplyGatheredKeyboardDeviceCount.c)
 *     GetKeyboardInputRoutingPolicy @ 0x1C0060820 (GetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x1C0060840 (xxxKeyEventEx.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00C1390 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C0136410 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetKeyboardProcessor()
{
  if ( qword_1C0247048 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0247048 + 8LL))(qword_1C0247048);
  else
    return 0LL;
}
