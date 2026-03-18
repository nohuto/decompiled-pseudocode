/*
 * XREFs of ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x18024CC70
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180043940 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D910 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x18024CDDC (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x18024D04C (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x18024D21C (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x18024D324 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x18024D68C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CAtlasManager::CompactSingleAtlas(const struct CAtlasTexture ***this, bool *a2)
{
  const struct CAtlasTexture **v2; // rsi
  int v4; // edi
  bool v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // r8d
  struct CAtlasTexture *v9; // rcx
  __int64 *v10; // rbx
  void *v11; // rcx
  const struct CAtlasTexture *v12; // rdx
  CAtlasTexture *v13; // rcx
  __int64 *v14; // rbx
  CAtlasTexture *v15; // rcx
  void *v16; // rcx
  struct CAtlasTexture *v18; // [rsp+38h] [rbp-18h] BYREF
  char v19; // [rsp+40h] [rbp-10h]
  unsigned int v20; // [rsp+80h] [rbp+30h] BYREF
  CAtlasTexture *v21; // [rsp+88h] [rbp+38h]

  v2 = *this;
  v4 = 0;
  v5 = 0;
  v6 = CAtlasManager::DetermineIdealAtlasSize(*((_DWORD *)**this + 6) - *((_DWORD *)**this + 7));
  if ( v6 < v8 )
  {
    v21 = 0LL;
    v18 = 0LL;
    v19 = 1;
    v4 = CAtlasTexture::Create((struct CD3DDevice *)(v7 - 560), v6, &v18);
    if ( v19 )
    {
      v9 = v18;
      v10 = (__int64 *)v21;
      v21 = v18;
      if ( v10 )
      {
        *v10 = (__int64)&CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources((CAtlasTexture *)v10);
        v11 = (void *)v10[2];
        if ( v11 )
          operator delete(v11);
        Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v10 + 1);
        operator delete(v10);
      }
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v4, 0x7Bu, 0LL);
    }
    else
    {
      v12 = *v2;
      v20 = 0;
      CAtlasTexture::CopyFrom(v21, v12, &v20);
      v13 = *v2;
      v5 = 1;
      *v2 = v21;
      v21 = v13;
      CAtlasTexture::PurgeAndNotify(v13);
    }
    v14 = (__int64 *)v21;
    if ( v21 )
    {
      v15 = v21;
      *(_QWORD *)v21 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v15);
      v16 = (void *)v14[2];
      if ( v16 )
        operator delete(v16);
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v14 + 1);
      operator delete(v14);
    }
  }
  *a2 = v5;
  return (unsigned int)v4;
}
