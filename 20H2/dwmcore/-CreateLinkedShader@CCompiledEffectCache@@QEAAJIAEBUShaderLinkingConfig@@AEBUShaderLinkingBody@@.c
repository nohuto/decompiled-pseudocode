/*
 * XREFs of ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180052330
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180051FB0 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180052330 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x180052290 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800522F4 (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180052330 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x1800525A4 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x180052FB8 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180054470 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18005DF50 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C502C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x1801F882C (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1801F88D4 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     McTemplateU0s_EventWriteTransfer @ 0x1801F8950 (McTemplateU0s_EventWriteTransfer.c)
 */

__int64 __fastcall CCompiledEffectCache::CreateLinkedShader(
        const void **a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        struct CLinkedShader **a6)
{
  CDrawListEntry *v6; // rbx
  int LinkedShader; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  int v14; // ebx
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
  CDrawListEntry *v32; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D10Blob *v33; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[16]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v37[8]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+F0h] [rbp-10h]
  __int128 v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+10h]
  char Buffer[32]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0LL;
  *(_QWORD *)&v35 = a5;
  v32 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    StringCchPrintfA(Buffer, 0x20uLL, "id=%p cid=%u lit=%u", a1[4], a2, *(_DWORD *)(a3 + 128) != -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0s_EventWriteTransfer(v19, v18, Buffer);
  }
  ShaderLinkingConfig::GetLookupKey(a3, Buffer, a2);
  v33 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v33);
  v34 = *a5;
  LinkedShader = LinkShader(a4, a3, &v34, v36, &v33);
  v13 = LinkedShader;
  if ( LinkedShader >= 0 )
  {
    v14 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)v36);
    v15 = (CLinkedShader *)DefaultHeap::Alloc(0x48uLL);
    if ( v15 )
      v15 = CLinkedShader::CLinkedShader(v15, v33, v14);
    Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v32, (volatile signed __int32 *)v15);
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
    v29 = CCompiledEffectCache::LookupShader((CCompiledEffectCache *)a1, a2, (const struct ShaderLinkingConfig *)v37);
    *(_QWORD *)&v34 = v29;
    if ( v29 )
    {
      *a6 = v29;
      v13 = 0;
      goto LABEL_8;
    }
    v35 = *(_OWORD *)v35;
    LinkedShader = CCompiledEffectCache::CreateLinkedShader(
                     (_DWORD)a1,
                     a2,
                     (unsigned int)v37,
                     a4,
                     (__int64)&v35,
                     (__int64)&v34);
    v13 = LinkedShader;
    if ( LinkedShader >= 0 )
    {
      Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v32, (volatile signed __int32 *)v34);
      v6 = v32;
LABEL_6:
      if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                           a1,
                           Buffer,
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
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v33);
  if ( v6 )
    CDrawListEntry::Release(v6);
  return v13;
}
