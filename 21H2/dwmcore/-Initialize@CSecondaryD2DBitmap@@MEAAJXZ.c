/*
 * XREFs of ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x18006C790
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x18006C6B4 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180277788 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Initialize(CSecondaryD2DBitmap *this)
{
  int v1; // r10d
  int v3; // r9d
  int v4; // eax
  int v5; // r11d
  __int64 *v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rcx
  _DWORD *v12; // rdx

  v1 = *((_DWORD *)this + 62);
  v3 = *((_DWORD *)this + 64);
  v4 = *((_DWORD *)this + 63);
  v5 = *((_DWORD *)this + 65);
  if ( v1 >= v3 || v4 >= v5 )
  {
    **((_DWORD **)this + 33) = 0;
  }
  else
  {
    v12 = (_DWORD *)*((_QWORD *)this + 33);
    *v12 = 2;
    v12[7] = v1;
    v12[3] = v4;
    v12[8] = v3;
    v12[4] = 16;
    v12[1] = v1;
    v12[2] = v3;
    v12[6] = 16;
    v12[5] = v5;
  }
  v6 = (__int64 *)*((_QWORD *)this + 3);
  v7 = (_QWORD *)((char *)this + 40);
  v8 = *v6;
  if ( *(__int64 **)(*v6 + 8) != v6 )
    __fastfail(3u);
  *v7 = v8;
  *((_QWORD *)this + 6) = v6;
  *(_QWORD *)(v8 + 8) = v7;
  *v6 = (__int64)v7;
  v9 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 32) = 1;
  v10 = (char *)this + *(int *)(v9 + 8) + 16;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v10 + 24LL))(v10) )
    *((_BYTE *)this + 34) = 1;
  if ( *((_BYTE *)this + 33) )
  {
    ++*((_DWORD *)v6 + 4);
    if ( *((_BYTE *)this + 34) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)v6[3]);
  }
  return 0LL;
}
