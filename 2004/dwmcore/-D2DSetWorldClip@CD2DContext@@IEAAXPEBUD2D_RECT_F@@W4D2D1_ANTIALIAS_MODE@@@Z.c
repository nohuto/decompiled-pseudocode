/*
 * XREFs of ?D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800B1510
 * Callers:
 *     ?SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800B14D4 (-SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::D2DSetWorldClip(CD2DContext *this, const struct D2D_RECT_F *a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+34h] [rbp-24h]

  v4 = *((_QWORD *)this + 30);
  v10 = 0;
  v11 = 0;
  v9 = _xmm;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 240LL))(v4, &v9);
  v7 = *((_QWORD *)this + 31);
  *((_BYTE *)this + 487) = 0;
  v8 = (__int128)*a2;
  *((_DWORD *)this + 116) = a3;
  *((_OWORD *)this + 28) = v8;
  (*(void (__fastcall **)(__int64, const struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v7 + 80LL))(v7, a2, a3);
}
