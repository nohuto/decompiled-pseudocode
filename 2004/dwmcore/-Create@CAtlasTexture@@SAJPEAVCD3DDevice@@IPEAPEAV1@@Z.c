/*
 * XREFs of ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x18024A78C
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180249FAC (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x18024A1E0 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x18024A894 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x18024A9F0 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 */

__int64 __fastcall CAtlasTexture::Create(struct CD3DDevice *a1, unsigned int a2, struct CAtlasTexture **a3)
{
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rcx

  v6 = (__int64 *)DefaultHeap::Alloc(0x28uLL);
  v8 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 9) = 0;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 0;
    *v6 = (__int64)&CAtlasTexture::`vftable';
    v6[1] = 0LL;
    v6[2] = 0LL;
    *((_DWORD *)v6 + 8) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v10 = CAtlasTexture::Initialize((CAtlasTexture *)v8, a1, a2);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19u, 0LL);
      *v8 = (__int64)&CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources((CAtlasTexture *)v8);
      v12 = (void *)v8[2];
      if ( v12 )
        operator delete(v12);
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v8 + 1);
      operator delete(v8);
    }
    else
    {
      *a3 = (struct CAtlasTexture *)v8;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v9;
}
