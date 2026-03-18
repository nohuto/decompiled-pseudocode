/*
 * XREFs of ApiSetEditionLLMouseButtonHook @ 0x1C005F67C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 v7; // rbp
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // xmm0_8
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      176,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v9 = 0;
  if ( qword_1C0259018 )
    v10 = qword_1C0259018();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    v11 = *a4;
    if ( qword_1C0259020 )
    {
      v14 = *((_DWORD *)a4 + 2);
      v13 = v11;
      v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64 *, int))qword_1C0259020)(a1, v7, a3, &v13, a5);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      177,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v9;
}
