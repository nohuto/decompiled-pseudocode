/*
 * XREFs of ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x180093620
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x180093540 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023946C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Initialize(CSecondaryD2DBitmap *this)
{
  int v1; // eax
  int v3; // r11d
  int v4; // r9d
  int v5; // r10d
  _DWORD *v6; // rdx
  __int64 *v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // rcx

  v1 = *((_DWORD *)this + 63);
  v3 = *((_DWORD *)this + 65);
  v4 = *((_DWORD *)this + 62);
  v5 = *((_DWORD *)this + 64);
  if ( v1 >= v3 || v4 >= v5 )
  {
    **((_DWORD **)this + 33) = 0;
  }
  else
  {
    v6 = (_DWORD *)*((_QWORD *)this + 33);
    *v6 = 2;
    v6[7] = v4;
    v6[3] = v1;
    v6[8] = v5;
    v6[4] = 16;
    v6[1] = v4;
    v6[2] = v5;
    v6[6] = 16;
    v6[5] = v3;
  }
  v7 = (__int64 *)*((_QWORD *)this + 3);
  v8 = (_QWORD *)((char *)this + 40);
  v9 = *v7;
  if ( *(__int64 **)(*v7 + 8) != v7 )
    __fastfail(3u);
  *v8 = v9;
  *((_QWORD *)this + 6) = v7;
  *(_QWORD *)(v9 + 8) = v8;
  *v7 = (__int64)v8;
  v10 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 32) = 1;
  v11 = (char *)this + *(int *)(v10 + 8) + 16;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v11 + 24LL))(v11) )
    *((_BYTE *)this + 34) = 1;
  if ( *((_BYTE *)this + 33) )
  {
    ++*((_DWORD *)v7 + 4);
    if ( *((_BYTE *)this + 34) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)v7[3]);
  }
  return 0LL;
}
