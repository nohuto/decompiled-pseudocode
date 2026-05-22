/*
 * XREFs of ?ComputePnpAction@Win32kInterop@@AEBA?AW4PnPHandlingAction@@W4_KnownRIMDeviceKind@@@Z @ 0x180029C54
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180029D00 (std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DE_ea_180029D00.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Win32kInterop::ComputePnpAction(__int64 a1, int a2)
{
  return ((a2 - 1) & 0xFFFFFFFC) == 0 && a2 != 3;
}
