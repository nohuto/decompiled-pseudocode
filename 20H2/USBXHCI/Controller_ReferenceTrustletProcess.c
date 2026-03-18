/*
 * XREFs of Controller_ReferenceTrustletProcess @ 0x1C0033558
 * Callers:
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_ReferenceTrustletProcess(_QWORD *a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // r9d
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( !a1[72] )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 3584))(
           WdfDriverGlobals,
           *a1,
           &v7);
    if ( (v2 & 0x80000000) == 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3600))(WdfDriverGlobals, v7);
      a1[72] = v5;
      if ( v5 )
        return v2;
      v2 = -1073741436;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v4 = 267;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v4 = 266;
    }
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(a1[9], v3, 4, v4, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v2);
    return v2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1[9], 2, 4, 265, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
  return (unsigned int)-1073741436;
}
