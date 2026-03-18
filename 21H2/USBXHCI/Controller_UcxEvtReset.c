/*
 * XREFs of Controller_UcxEvtReset @ 0x1C0034070
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 */

__int64 __fastcall Controller_UcxEvtReset(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061428);
  if ( Controller_IsControllerAccessible(v2) )
  {
    Controller_InternalReset(v2, v3, v4);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), v3, 4, 185, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
  }
  v7 = 1;
  v6 = 12LL;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64 *))qword_1C00627B8)(UcxDriverGlobals, a1, &v6);
}
