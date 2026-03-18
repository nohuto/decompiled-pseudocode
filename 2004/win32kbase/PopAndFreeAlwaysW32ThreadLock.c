/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C0030EBC
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C00B4150 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserSystemParametersInfo @ 0x1C0139B30 (NtUserSystemParametersInfo.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019A590 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0251FE8;
  if ( qword_1C0251FE8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0251FE8(a1);
  return result;
}
