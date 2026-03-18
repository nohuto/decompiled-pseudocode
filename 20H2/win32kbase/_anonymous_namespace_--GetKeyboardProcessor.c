/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C002D784
 * Callers:
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C0022D5C (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     GetKeyboardInputRoutingPolicy @ 0x1C002CAC0 (GetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x1C002CAE0 (xxxKeyEventEx.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00BDDE0 (SetKeyboardInputRoutingPolicy.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C00BF9C0 (ApplyGatheredKeyboardDeviceCount.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C012E0D0 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetKeyboardProcessor()
{
  if ( qword_1C023F048 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C023F048 + 8LL))(qword_1C023F048);
  else
    return 0LL;
}
