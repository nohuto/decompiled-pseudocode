/*
 * XREFs of ?GetVelocities@MPCSpatialGestureRecognizerHandler@@AEAA?AUVector3@Numerics@Foundation@Windows@@PEAUISpatialNavigationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x180080FF0
 * Callers:
 *     ?InjectScrollZoom@MPCSpatialGestureRecognizerHandler@@AEAAXPEAUISpatialNavigationUpdatedEventArgs@Spatial@Input@UI@Windows@@@Z @ 0x180081068 (-InjectScrollZoom@MPCSpatialGestureRecognizerHandler@@AEAAXPEAUISpatialNavigationUpdatedEventArg.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::GetVelocities(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      145LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  result = a2;
  *(float *)a2 = COERCE_FLOAT(*(_DWORD *)a2 & _xmm) * *(float *)a2;
  *(float *)(a2 + 4) = COERCE_FLOAT(*(_DWORD *)(a2 + 4) & _xmm) * *(float *)(a2 + 4);
  return result;
}
