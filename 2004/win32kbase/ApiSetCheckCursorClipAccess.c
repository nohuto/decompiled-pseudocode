/*
 * XREFs of ApiSetCheckCursorClipAccess @ 0x1C0046188
 * Callers:
 *     NtUserLockCursor @ 0x1C0046100 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00C63A0 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C01334B0 (NtUserGetClipCursor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetCheckCursorClipAccess(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  int v5; // eax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      334,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v4 = 0;
  if ( qword_1C02539F0 )
    v5 = qword_1C02539F0();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C02539F8 )
    v4 = qword_1C02539F8(a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      335,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v4;
}
