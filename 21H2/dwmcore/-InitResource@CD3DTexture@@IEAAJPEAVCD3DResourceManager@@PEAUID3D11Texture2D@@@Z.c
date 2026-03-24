/*
 * XREFs of ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x18026D8C4
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18026D7A0 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003C1AC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023B18C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CD3DTexture::InitResource(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  unsigned int v3; // ebp
  int v4; // r14d
  unsigned int v5; // r15d
  __int64 v9; // rcx
  struct CD3DResourceManager *v10; // rdx
  struct CD3DResourceManager **v11; // rcx
  unsigned int v12; // edx
  _DWORD v14[12]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 44) )
  {
    while ( 1 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a3->lpVtbl->GetDesc)(a3, v14);
      v9 = GetPixelFormatSize(v14[4]) >> 3;
      if ( !(_DWORD)v9 )
        break;
      ++v5;
      v4 += v9 * v14[0] * v14[1];
      if ( v5 >= *((_DWORD *)this + 44) )
        goto LABEL_4;
    }
    v3 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003292288, 0x85u, 0LL);
  }
  else
  {
LABEL_4:
    *((_DWORD *)this + 20) = v4;
    *((_BYTE *)this + 86) = 1;
    v10 = (CD3DTexture *)((char *)this + 40);
    *((_QWORD *)this + 2) = a2;
    v11 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
    if ( *v11 != (struct CD3DResourceManager *)((char *)a2 + 32) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)a2 + 32;
    *((_QWORD *)this + 6) = v11;
    *v11 = v10;
    *((_QWORD *)a2 + 5) = v10;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 24LL))((char *)this + 24) )
      *((_BYTE *)this + 85) = 1;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 84) = 1;
      ++*((_DWORD *)a2 + 18);
      if ( *((_BYTE *)this + 85) )
        CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a2 + 10) + 16LL));
    }
    v12 = *((_DWORD *)a2 + 12) + *((_DWORD *)this + 20);
    *((_DWORD *)a2 + 12) = v12;
    if ( *((_DWORD *)a2 + 13) < v12 )
      *((_DWORD *)a2 + 13) = v12;
    *((_QWORD *)this + 14) = a3;
    ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
  }
  return v3;
}
