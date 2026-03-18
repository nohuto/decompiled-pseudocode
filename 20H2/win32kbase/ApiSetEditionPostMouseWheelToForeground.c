/*
 * XREFs of ApiSetEditionPostMouseWheelToForeground @ 0x1C01C75D8
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BBA70 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01F64F8 (EditionPostMouseWheelToForeground.c)
 */

__int64 __fastcall ApiSetEditionPostMouseWheelToForeground(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        __int64 *a9)
{
  int v11; // esi
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h] BYREF

  v11 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      164,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C02510B8 )
    result = qword_1C02510B8();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    if ( a8 )
      v15 = *a8;
    v14 = 0LL;
    if ( a9 )
      v14 = *a9;
    result = EditionPostMouseWheelToForeground(
               a1,
               v11,
               a3,
               a4,
               a5,
               a6,
               a7,
               (unsigned __int64)&v15 & -(__int64)(a8 != 0LL),
               (unsigned __int64)&v14 & -(__int64)(a9 != 0LL));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               a2,
               10,
               165,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}
