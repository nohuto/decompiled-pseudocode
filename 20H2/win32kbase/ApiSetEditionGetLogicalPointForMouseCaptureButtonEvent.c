/*
 * XREFs of ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C00B03A8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v7; // rbp
  _QWORD *v9; // rsi
  int v10; // eax
  _QWORD *v11; // rcx
  char v12; // [rsp+70h] [rbp+18h] BYREF

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      326,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v9 = a5;
  *a5 = a3;
  if ( qword_1C0251878 )
    v10 = qword_1C0251878();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
    v11 = 0LL;
    a5 = 0LL;
    if ( qword_1C0251880 )
    {
      qword_1C0251880(a1, v7, a3, a4, &a5);
      v11 = a5;
    }
    *v9 = v11;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        10,
        327,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
}
