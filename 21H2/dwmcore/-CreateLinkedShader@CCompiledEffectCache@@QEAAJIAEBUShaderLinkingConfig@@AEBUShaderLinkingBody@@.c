/*
 * XREFs of ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18003C310
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18003C310 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18003C50C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x180032EF4 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180039A40 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x18003B008 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18003C310 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x18003C460 (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x18003C4AC (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180249728 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1802497D0 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     McTemplateU0s_EventWriteTransfer @ 0x180249840 (McTemplateU0s_EventWriteTransfer.c)
 */

__int64 __fastcall CCompiledEffectCache::CreateLinkedShader(
        const void **this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  int LinkedShader; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  CLinkedShader *v15; // rax
  unsigned int v16; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // rax
  struct CLinkedShader *v29; // rax
  int v30; // r9d
  unsigned int v31; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D10Blob *v33; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[16]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v37[8]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+F0h] [rbp-10h]
  __int128 v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+10h]
  char v41[32]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0LL;
  v35[0] = (__int64)a5;
  v32 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    StringCchPrintfA(v41, 0x20uLL, "id=%p cid=%u lit=%u", this[4], a2, *(_DWORD *)(a3 + 128) != -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0s_EventWriteTransfer(v19, v18, v41);
  }
  ShaderLinkingConfig::GetLookupKey(a3, v41, a2);
  v33 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
  *(_OWORD *)v34 = *a5;
  LinkedShader = LinkShader(a4, a3, v34, (__int64)v36, &v33);
  v13 = LinkedShader;
  if ( LinkedShader >= 0 )
  {
    v14 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)v36);
    v15 = (CLinkedShader *)DefaultHeap::Alloc(0x48uLL);
    if ( v15 )
      v15 = CLinkedShader::CLinkedShader(v15, v33, v14);
    Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v32, v15);
    v6 = v32;
    if ( !v32 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x70u, 0LL);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a3 + 128) == -1 )
  {
    v31 = 108;
  }
  else
  {
    v20 = *(_OWORD *)(a3 + 16);
    v37[0] = *(_OWORD *)a3;
    v21 = *(_OWORD *)(a3 + 32);
    v37[1] = v20;
    v22 = *(_OWORD *)(a3 + 48);
    v37[2] = v21;
    v23 = *(_OWORD *)(a3 + 64);
    v37[3] = v22;
    v24 = *(_OWORD *)(a3 + 80);
    v37[4] = v23;
    v25 = *(_OWORD *)(a3 + 96);
    v37[5] = v24;
    v26 = *(_OWORD *)(a3 + 128);
    v37[6] = v25;
    v37[7] = *(_OWORD *)(a3 + 112);
    v27 = *(_OWORD *)(a3 + 144);
    v28 = *(_QWORD *)(a3 + 160);
    v38 = v26;
    v39 = v27;
    v40 = v28;
    LODWORD(v38) = -1;
    v29 = CCompiledEffectCache::LookupShader((CCompiledEffectCache *)this, a2, (const struct ShaderLinkingConfig *)v37);
    v34[0] = (__int64)v29;
    if ( v29 )
    {
      *a6 = v29;
      v13 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v35 = *(_OWORD *)v35[0];
    LinkedShader = CCompiledEffectCache::CreateLinkedShader(
                     (CCompiledEffectCache *)this,
                     a2,
                     (__int64)v35,
                     (__int64)v34);
    v13 = LinkedShader;
    if ( LinkedShader >= 0 )
    {
      Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v32, v34[0]);
      v6 = v32;
LABEL_6:
      if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                           (__int64)this,
                           v41,
                           &v32) )
      {
        *a6 = v6;
        goto LABEL_8;
      }
      v30 = -2147024882;
      v13 = -2147024882;
      v31 = 117;
      goto LABEL_22;
    }
    v31 = 101;
  }
  v30 = LinkedShader;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v30, v31, 0LL);
LABEL_8:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
  if ( v6 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v6);
  return v13;
}
