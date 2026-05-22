/*
 * XREFs of ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x1800823E0
 * Callers:
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x180080224 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18008095C (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::SetMode(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v4 = 32776;
      goto LABEL_7;
    }
    if ( a2 != 3 )
    {
      v4 = 0;
      goto LABEL_7;
    }
  }
  v4 = 48;
LABEL_7:
  v5 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 280LL))(v5);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      128LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(a1 + 16) + 288LL))(
             *(_QWORD *)(a1 + 16),
             v4,
             &v9);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      129LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  *(_DWORD *)(a1 + 168) = a2;
  return result;
}
