/*
 * XREFs of ApiSetEditionLLMouseWheelHook @ 0x1C01CECCC
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionLLMouseWheelHook(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4)
{
  unsigned int v6; // ebp
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // xmm0_8
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      178,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v8 = 0;
  if ( qword_1C0259008 )
    v9 = qword_1C0259008();
  else
    v9 = -1073741637;
  if ( v9 >= 0 )
  {
    v10 = *a3;
    if ( qword_1C0259010 )
    {
      v13 = *((_DWORD *)a3 + 2);
      v12 = v10;
      v8 = qword_1C0259010(a1, v6, &v12, a4);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      179,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v8;
}
