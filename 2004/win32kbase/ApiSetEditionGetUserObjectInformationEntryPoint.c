/*
 * XREFs of ApiSetEditionGetUserObjectInformationEntryPoint @ 0x1C00319B4
 * Callers:
 *     NtUserGetObjectInformation @ 0x1C0031990 (NtUserGetObjectInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionGetUserObjectInformationEntryPoint(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v7; // ebp
  unsigned int v9; // ebx
  int v10; // eax

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      486,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v9 = 0;
  if ( qword_1C0251E18 )
    v10 = qword_1C0251E18();
  else
    v10 = -1073741637;
  if ( v10 >= 0 && qword_1C0251E20 )
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64))qword_1C0251E20)(a1, v7, a3, a4, a5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      487,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v9;
}
