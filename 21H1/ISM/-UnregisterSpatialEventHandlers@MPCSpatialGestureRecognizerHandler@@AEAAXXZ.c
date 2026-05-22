/*
 * XREFs of ?UnregisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x1800824A8
 * Callers:
 *     ??1MPCSpatialGestureRecognizerHandler@@UEAA@XZ @ 0x1800804C4 (--1MPCSpatialGestureRecognizerHandler@@UEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::UnregisterSpatialEventHandlers(
        MPCSpatialGestureRecognizerHandler *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 152LL))(v2, *((_QWORD *)this + 5));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        88LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 168LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 6));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        89LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 184LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 7));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        90LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 200LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 8));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        91LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 216LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 9));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        93LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 232LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 10));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        94LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 248LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 11));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        95LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 264LL))(
            *((_QWORD *)this + 2),
            *((_QWORD *)this + 12));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        96LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v10);
  }
}
