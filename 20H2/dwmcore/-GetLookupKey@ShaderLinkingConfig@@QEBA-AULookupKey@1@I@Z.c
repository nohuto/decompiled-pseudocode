/*
 * XREFs of ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18005DF50
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180052330 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18005D908 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18005DBD0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x1801F882C (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall ShaderLinkingConfig::GetLookupKey(__int64 a1, _OWORD *a2, int a3)
{
  int v3; // r10d
  BOOL v5; // eax
  BOOL v6; // r9d
  int v7; // eax
  unsigned int v8; // r9d
  int v9; // eax
  unsigned int v10; // r9d
  int v11; // r11d
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // eax
  unsigned int v19; // r9d
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // r9d
  int v23; // eax
  int v24; // r8d
  int v25; // eax
  unsigned int v26; // r8d
  _OWORD *result; // rax
  __int128 v28; // [rsp+0h] [rbp-18h]

  v28 = 0LL;
  v3 = 0;
  v5 = *(_BYTE *)(a1 + 21) || *(_BYTE *)(a1 + 20);
  v6 = v5;
  if ( *(_BYTE *)(a1 + 53) || *(_BYTE *)(a1 + 52) )
    v7 = 2;
  else
    v7 = 0;
  v8 = v7 | v6 & 0xFFFFFFFD;
  if ( *(_BYTE *)(a1 + 85) || *(_BYTE *)(a1 + 84) )
    v9 = 4;
  else
    v9 = 0;
  v10 = v9 | v8 & 0xFFFFFFFB;
  if ( *(_BYTE *)(a1 + 117) || *(_BYTE *)(a1 + 116) )
    v11 = 8;
  else
    v11 = 0;
  v12 = v11 | v10 & 0xF0FFFFE7 | (16
                                * (*(_BYTE *)(a1 + 18) & 1 | ((*(_BYTE *)(a1 + 24) & 1 | (2
                                                                                        * (*(_BYTE *)(a1 + 56) & 1 | (2 * (*(_BYTE *)(a1 + 88) & 1 | (2 * (*(_BYTE *)(a1 + 120) & 1))))))) << 20)));
  if ( *(_BYTE *)(a1 + 18) )
    v12 = v11 & 0xFFFCFCFF | v10 & 0xF0FCFCE7 | (16
                                               * (*(_BYTE *)(a1 + 18) & 1 | ((*(_BYTE *)(a1 + 24) & 1 | (2 * (*(_BYTE *)(a1 + 56) & 1 | (2 * (*(_BYTE *)(a1 + 88) & 1 | (2 * (*(_BYTE *)(a1 + 120) & 1))))))) << 20))) & 0xFFFCFCFF | ((*(_BYTE *)(a1 + 16) & 3 | ((*(_BYTE *)(a1 + 17) & 3) << 8)) << 8);
  v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(32 * *(_BYTE *)(a1 + 50))) & 0x20;
  if ( *(_BYTE *)(a1 + 50) )
    v13 = v13 & 0xFFF3F3FF | ((*(_BYTE *)(a1 + 48) & 3 | ((*(_BYTE *)(a1 + 49) & 3) << 8)) << 10);
  v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*(_BYTE *)(a1 + 82) << 6)) & 0x40;
  if ( *(_BYTE *)(a1 + 82) )
    v14 = v14 & 0xFFCFCFFF | ((*(_BYTE *)(a1 + 80) & 3 | ((*(_BYTE *)(a1 + 81) & 3) << 8)) << 12);
  v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(*(_BYTE *)(a1 + 114) << 7)) & 0x80;
  if ( *(_BYTE *)(a1 + 114) )
    v15 = v15 & 0xFF3F3FFF | ((*(_BYTE *)(a1 + 112) & 3 | ((*(_BYTE *)(a1 + 113) & 3) << 8)) << 14);
  v16 = 0;
  if ( *(_BYTE *)(a1 + 153) )
    v16 = 0x10000000;
  v17 = v16 | v15 & 0xEFFFFFFF;
  v18 = 0;
  v19 = (*(_BYTE *)(a1 + 155) != 0 ? 0x20000000 : 0) | v17 & 0xDFFFFFFF;
  if ( *(_BYTE *)(a1 + 156) )
    v18 = 0x80000000;
  v20 = v18 | v19 & 0x7FFFFFFF;
  v21 = 0;
  if ( *(_BYTE *)(a1 + 152) )
    v21 = 0x40000000;
  v22 = v21 | v20 & 0xBFFFFFFF;
  v23 = 0;
  DWORD1(v28) = v22;
  if ( *(_BYTE *)(a1 + 158) )
    v23 = 0x10000;
  v24 = v23 | (*(_DWORD *)(a1 + 144) << 18) & 0xFC0000;
  v25 = 0;
  if ( *(_BYTE *)(a1 + 159) )
    v25 = 0x20000;
  v26 = v25 | v24 & 0xFFFDFFFF;
  if ( *(_BYTE *)(a1 + 160) )
    v3 = 0x1000000;
  DWORD2(v28) = v3 | (a3 << 25) | v26 & 0xFF0000 | *(unsigned __int16 *)(a1 + 128);
  result = a2;
  LODWORD(v28) = *(_DWORD *)(a1 + 8) & 0x3F | ((*(_DWORD *)(a1 + 40) & 0x3F | ((*(_DWORD *)(a1 + 72) & 0x3F | ((*(_DWORD *)(a1 + 104) & 0x3F | ((*(_BYTE *)(a1 + 22) & 1 | (2 * (*(_BYTE *)(a1 + 54) & 1 | (2 * (*(_BYTE *)(a1 + 86) & 1 | (2 * (*(_BYTE *)(a1 + 118) & 1 | (2 * (*(_BYTE *)(a1 + 23) & 1 | (2 * (*(_BYTE *)(a1 + 55) & 1 | (2 * (*(_BYTE *)(a1 + 87) & 1 | (2 * *(unsigned __int8 *)(a1 + 119))))))))))))))) << 6)) << 6)) << 6)) << 6);
  *a2 = v28;
  return result;
}
