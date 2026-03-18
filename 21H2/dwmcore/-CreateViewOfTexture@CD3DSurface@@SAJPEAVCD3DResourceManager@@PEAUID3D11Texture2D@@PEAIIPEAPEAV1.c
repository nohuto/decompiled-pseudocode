/*
 * XREFs of ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18028C458
 * Callers:
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x18028C390 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x18028C108 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x18028C144 (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18028C6C8 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
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
  CD3DSurface *v9; // rax
  CD3DSurface *v10; // rbx
  char *v11; // rcx
  unsigned int *v12; // r8
  unsigned int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi

  *a5 = 0LL;
  v7 = (CD3DSurface *)operator new(0xF0uLL);
  if ( !v7 )
  {
    v10 = 0LL;
    goto LABEL_7;
  }
  v9 = CD3DSurface::CD3DSurface(v7, a2);
  v10 = v9;
  if ( !v9 )
  {
LABEL_7:
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147024882, 0x63u);
    goto LABEL_8;
  }
  v11 = (char *)v9 + *(int *)(*((_QWORD *)v9 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v11);
  v14 = CD3DSurface::Init(v10, a1, v12, v13);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x68u);
  }
  else
  {
    *a5 = v10;
    v10 = 0LL;
  }
LABEL_8:
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v10);
  return v16;
}
