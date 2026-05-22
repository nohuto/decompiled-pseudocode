/*
 * XREFs of ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x1800C2160
 * Callers:
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800C22F8 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1800C4270 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall ManipulationInjector::CheckOverlap(
        ManipulationInjector *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  int v4; // r8d
  __int64 v6; // rsi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  __int64 v11; // rbp
  char v12; // di
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // eax
  bool v16; // sf
  bool v17; // of
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  bool v22; // zf
  bool v23; // sf
  bool v24; // of
  int v25; // eax
  RECT rc; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *((_DWORD *)this + 5);
  v6 = a2;
  v7 = *((_DWORD *)this + 18) - v4;
  rc.left = v4 + *((_DWORD *)this + 16) + 1;
  v8 = *((_DWORD *)this + 17);
  rc.right = v7 - 1;
  v9 = *((_DWORD *)this + 19) - v4;
  rc.top = v4 + v8 + 1;
  v22 = *((_DWORD *)this + 22) == 1;
  rc.bottom = v9 - 1;
  if ( v22 )
    return !PtInRect(&rc, *(POINT *)((char *)this + 152 * a2 + 144));
  if ( *((_DWORD *)this + 22) == 16 )
  {
    v11 = 152LL * a2;
    v12 = 0;
    if ( !PtInRect(&rc, *(POINT *)((char *)this + v11 + 144)) )
      return 1;
    v13 = 152LL * (unsigned int)(v6 + 1);
    if ( !PtInRect(&rc, *(POINT *)((char *)this + v13 + 144)) )
      return 1;
    v14 = 0;
    if ( *(_DWORD *)this == 2 )
    {
      v15 = *(_DWORD *)((char *)this + v13 + 152) - *(_DWORD *)((char *)this + v11 + 152);
      v17 = __OFSUB__(v15, *((_DWORD *)this + 187));
      v16 = v15 - *((_DWORD *)this + 187) < 0;
    }
    else
    {
      v18 = *(_DWORD *)((char *)this + v13 + 144) - *(_DWORD *)((char *)this + v11 + 144);
      v17 = __OFSUB__(v18, *((_DWORD *)this + 7));
      v16 = v18 - *((_DWORD *)this + 7) < 0;
    }
    LOBYTE(v14) = v16 == v17;
    if ( v14 )
      return 1;
  }
  else
  {
    if ( *((_DWORD *)this + 22) != 32 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        853LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      __debugbreak();
    }
    v19 = 152LL * (a2 + 1);
    v20 = 152 * v6;
    if ( *(_DWORD *)this == 2 )
    {
      v21 = *(_DWORD *)((char *)this + v19 + 152) - *(_DWORD *)((char *)this + v20 + 152);
      v24 = __OFSUB__(v21, *((_DWORD *)this + 188));
      v22 = v21 == *((_DWORD *)this + 188);
      v23 = v21 - *((_DWORD *)this + 188) < 0;
    }
    else
    {
      v25 = *(_DWORD *)((char *)this + v19 + 144) - *(_DWORD *)((char *)this + v20 + 144);
      v24 = __OFSUB__(v25, *((_DWORD *)this + 9));
      v22 = v25 == *((_DWORD *)this + 9);
      v23 = v25 - *((_DWORD *)this + 9) < 0;
    }
    return v23 ^ v24 | v22;
  }
  return v12;
}
