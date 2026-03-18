/*
 * XREFs of HUBFDO_RegisterSleepstudyBlockerReason @ 0x1C0077A5C
 * Callers:
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1C00777CC (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000BBF4 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_RegisterSleepstudyBlockerReason(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // r13
  NTSTATUS v11; // ebx
  unsigned __int16 v12; // r9
  __int128 v13; // xmm1
  __int64 v14; // rcx
  NTSTATUS v16; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+60h] [rbp-A0h] BYREF

  DestinationString.Buffer = (wchar_t *)&v20;
  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C00661C0);
  v11 = RtlUnicodeStringPrintf(&DestinationString, L"%wZ (%s)", a3, a5);
  if ( v11 >= 0 )
  {
    v13 = *a2;
    v14 = *(_QWORD *)(v10 + 96);
    v18 = *a4;
    v19 = v13;
    v11 = SleepstudyHelper_RegisterComponentEx(v14, &v19, &v18, &DestinationString, a6);
    if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 78;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 77;
LABEL_7:
    v16 = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      2u,
      v12,
      (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
      v16);
  }
  return (unsigned int)v11;
}
