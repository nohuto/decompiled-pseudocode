/*
 * XREFs of ?DisplaySettingsChange@KioskPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803DAC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KioskPositioner::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v3 = a1;
    if ( (a3 & 0x38) != 0 )
    {
      v4 = a1 - 120;
      v5 = *(__int64 **)(a1 + 520);
      v6 = *v5;
      v8[7] = v8;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD *, __int64, __int64 (__fastcall **)(), __int64))(v6 + 32))(
        v5,
        *(_QWORD *)(v3 + 88),
        v8,
        v3,
        off_1804C6528,
        v4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x35F,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           (const char *)v3);
  }
  return result;
}
