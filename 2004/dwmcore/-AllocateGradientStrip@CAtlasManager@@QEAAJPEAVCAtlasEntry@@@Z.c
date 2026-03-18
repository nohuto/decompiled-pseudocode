/*
 * XREFs of ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180249FAC
 * Callers:
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802097C4 (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180249DB0 (--$_Emplace_reallocate@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@st.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x18024A34C (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x18024A78C (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x18024A894 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasManager::AllocateGradientStrip(CAtlasTexture ***this, struct CAtlasEntry *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  int v6; // esi
  CAtlasTexture **i; // rdx
  CAtlasTexture *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // eax
  struct CAtlasTexture *v11; // rcx
  __int64 *v12; // rbx
  void *v13; // rcx
  CAtlasTexture **v14; // rdx
  __int64 *v15; // rdi
  CAtlasTexture *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rbx
  CAtlasTexture *v21; // rcx
  void *v22; // rcx
  struct CAtlasTexture *v24; // [rsp+38h] [rbp-18h] BYREF
  char v25; // [rsp+40h] [rbp-10h]
  const void *retaddr; // [rsp+78h] [rbp+28h]
  CAtlasTexture *v27; // [rsp+80h] [rbp+30h] BYREF

  v4 = 0;
  v5 = (__int64)(this + 71);
  if ( !this )
    v5 = 1128LL;
  v6 = *(_DWORD *)v5;
  if ( *(int *)v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v6, 0x12u, 0LL);
  }
  else
  {
    for ( i = *this; i != this[1]; ++i )
    {
      v8 = *i;
      if ( *((_DWORD *)*i + 7) )
      {
        if ( v8 )
          goto LABEL_25;
        break;
      }
      v9 = *((_DWORD *)v8 + 6);
      if ( v4 > v9 )
        v9 = v4;
      v4 = v9;
    }
    v27 = 0LL;
    v24 = 0LL;
    v25 = 1;
    v10 = CAtlasManager::DetermineIdealAtlasSize(v4);
    v6 = CAtlasTexture::Create((struct CD3DDevice *)(this - 70), v10, &v24);
    if ( v25 )
    {
      v11 = v24;
      v12 = (__int64 *)v27;
      v27 = v24;
      if ( v12 )
      {
        *v12 = (__int64)&CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources((CAtlasTexture *)v12);
        v13 = (void *)v12[2];
        if ( v13 )
          operator delete(v13);
        Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v12 + 1);
        operator delete(v12);
      }
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v6, 0x27u, 0LL);
      v20 = (__int64 *)v27;
      if ( v27 )
      {
        v21 = v27;
        *(_QWORD *)v27 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v21);
        v22 = (void *)v20[2];
        if ( v22 )
          operator delete(v22);
        Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v20 + 1);
        operator delete(v20);
      }
      return (unsigned int)v6;
    }
    v14 = this[1];
    v8 = v27;
    if ( this[2] == v14 )
    {
      std::vector<std::unique_ptr<CAtlasTexture>>::_Emplace_reallocate<std::unique_ptr<CAtlasTexture>>(
        (__int64 *)this,
        (__int64)v14,
        (__int64 *)&v27);
    }
    else
    {
      v27 = 0LL;
      *v14 = v8;
      ++this[1];
    }
    v15 = (__int64 *)v27;
    if ( v27 )
    {
      v16 = v27;
      *(_QWORD *)v27 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v16);
      v17 = (void *)v15[2];
      if ( v17 )
        operator delete(v17);
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v15 + 1);
      operator delete(v15);
    }
LABEL_25:
    v18 = 0LL;
    if ( !*((_DWORD *)v8 + 6) )
LABEL_29:
      ModuleFailFastForHRESULT(-2003304315, retaddr);
    v19 = *((_QWORD *)v8 + 2);
    while ( *(_QWORD *)(v19 + 8 * v18) )
    {
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= *((_DWORD *)v8 + 6) )
        goto LABEL_29;
    }
    --*((_DWORD *)v8 + 7);
    *(_QWORD *)(v19 + 8 * v18) = a2;
    if ( *(_QWORD *)a2 )
      ModuleFailFastForHRESULT(-2003292412, retaddr);
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 4) = v18 + 1;
  }
  return (unsigned int)v6;
}
