/*
 * XREFs of ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180248C88
 * Callers:
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180248BCC (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x1802489BC (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180248EA0 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 */

__int64 __fastcall CD3DSurface::CreateViewOfTexture(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        unsigned int *a3,
        __int64 a4,
        struct CD3DSurface **a5)
{
  CD3DSurface *v7; // rax
  __int64 v8; // rcx
  CD3DSurface *v9; // rbx
  unsigned int v10; // edi
  unsigned int *v11; // r8
  unsigned int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx

  *a5 = 0LL;
  v7 = (CD3DSurface *)operator new(0x100uLL);
  if ( v7 )
    v9 = CD3DSurface::CD3DSurface(v7, a2);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (**(void (__fastcall ***)(CD3DSurface *))v9)(v9);
    v13 = CD3DSurface::Init(v9, a1, v11, v12);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x68u, 0LL);
      (*(void (__fastcall **)(CD3DSurface *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    else
    {
      *a5 = v9;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x63u, 0LL);
  }
  return v10;
}
