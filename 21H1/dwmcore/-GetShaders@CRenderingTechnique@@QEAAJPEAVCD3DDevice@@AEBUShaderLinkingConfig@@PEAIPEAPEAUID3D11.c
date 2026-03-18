/*
 * XREFs of ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180044FB8
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180046C80 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180045600 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x180045940 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x180045A30 (-GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA-AUConstantBufferRequirements@1@XZ.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x18009F020 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800A0C9C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::GetShaders(
        CRenderingTechnique *this,
        struct CD3DDevice *a2,
        const struct ShaderLinkingConfig *a3,
        unsigned int *a4,
        struct ID3D11PixelShader **a5)
{
  __int128 v5; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rdx
  struct ID3D11PixelShader *v10; // r14
  unsigned int v12; // r12d
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // r9d
  CRenderingTechnique **v23; // r8
  unsigned int i; // edi
  int *v25; // r15
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  struct CLinkedShader *v30; // rbx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // edi
  struct ID3D11PixelShader **v34; // rax
  int v36; // eax
  __int64 v37; // rcx
  struct CLinkedShader *v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  struct CD3DDevice *v41; // [rsp+48h] [rbp-B8h]
  struct ID3D11PixelShader **v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h]
  _OWORD v45[8]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v46; // [rsp+F0h] [rbp-10h]
  __int128 v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+10h]

  v5 = *(_OWORD *)a3;
  v7 = *((_OWORD *)a3 + 1);
  v42 = a5;
  v45[0] = v5;
  v41 = a2;
  v8 = *((_OWORD *)a3 + 2);
  v9 = *(_QWORD *)this;
  v10 = 0LL;
  v45[1] = v7;
  v12 = 0x80000000;
  v13 = *((_OWORD *)a3 + 3);
  v45[2] = v8;
  v14 = *((_OWORD *)a3 + 4);
  v45[3] = v13;
  v15 = *((_OWORD *)a3 + 5);
  v45[4] = v14;
  v16 = *((_OWORD *)a3 + 6);
  v45[5] = v15;
  v17 = *((_OWORD *)a3 + 8);
  v45[6] = v16;
  v45[7] = *((_OWORD *)a3 + 7);
  v18 = *((_OWORD *)a3 + 9);
  v19 = *((_QWORD *)a3 + 20);
  v46 = v17;
  v47 = v18;
  v48 = v19;
  BYTE10(v47) = 1;
  if ( *(CRenderingTechnique **)(*(_QWORD *)(v9 + 144) + 8LL * (unsigned int)(*(_DWORD *)(v9 + 168) - 1)) == this )
  {
    BYTE11(v47) = 1;
  }
  else
  {
    LODWORD(v46) = -1;
    BYTE8(v47) = 0;
  }
  ShaderLinkingConfig::GetConstantBufferRequirements(v45, &v39);
  v20 = v39;
  if ( (_DWORD)v39 != *((_DWORD *)this + 61) )
  {
    if ( HIDWORD(v39) != *((_DWORD *)this + 62) )
    {
      CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources((CRenderingTechnique *)((char *)this + 16));
      *((_BYTE *)this + 252) = 1;
    }
    *(_QWORD *)((char *)this + 244) = v20;
  }
  v21 = *(_QWORD *)this;
  v22 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  v23 = *(CRenderingTechnique ***)(*(_QWORD *)this + 144LL);
  if ( v23[v22 - 1] == this )
  {
    i = *(_DWORD *)(v21 + 192) | (v22 - 1);
  }
  else
  {
    for ( i = 0; i < v22; ++v23 )
    {
      if ( this == *v23 )
        break;
      ++i;
    }
  }
  v25 = *(int **)(v21 + 184);
  ShaderLinkingConfig::GetLookupKey(v45, &v43, i);
  v27 = 0;
  if ( v25[4] <= 0 )
  {
LABEL_21:
    v27 = -1;
  }
  else
  {
    v28 = 0LL;
    v29 = *(_QWORD *)v25;
    v26 = v44;
    while ( *(_QWORD *)v29 != v43 || *(_DWORD *)(v29 + 8) != (_DWORD)v44 )
    {
      ++v27;
      ++v28;
      v29 += 16LL;
      if ( v28 >= v25[4] )
        goto LABEL_21;
    }
  }
  if ( v27 == -1 )
  {
    v38 = 0LL;
  }
  else
  {
    v30 = *(struct CLinkedShader **)(*((_QWORD *)v25 + 1) + 8LL * v27);
    if ( v30 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v30 + 2);
      CDrawListEntry::Release(v30);
    }
    v38 = v30;
    if ( v30 )
      goto LABEL_14;
  }
  v36 = CRenderingTechnique::AddShaderToCache(
          this,
          (struct CCompiledEffectCache *)v25,
          i,
          (const struct ShaderLinkingConfig *)v45,
          &v38);
  v33 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x12Fu, 0LL);
    return (unsigned int)v33;
  }
  v30 = v38;
LABEL_14:
  v40 = 0LL;
  v31 = CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::FindOrCreateResourceNoRef((char *)v30 + 32, v41, &v40, v26);
  v33 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x15u, 0LL);
  }
  else
  {
    v12 = *((_DWORD *)v30 + 6);
    v10 = *(struct ID3D11PixelShader **)(v40 + 112);
  }
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v33, 0x132u, 0LL);
  }
  else
  {
    v34 = v42;
    *a4 = v12;
    *v34 = v10;
    if ( v10 )
      ((void (__fastcall *)(struct ID3D11PixelShader *))v10->lpVtbl->AddRef)(v10);
  }
  return (unsigned int)v33;
}
