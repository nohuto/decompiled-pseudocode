/*
 * XREFs of ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A5144
 * Callers:
 *     ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A5050 (-SetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18023DA50 (-OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18023DBB4 (-OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18023DC9C (-OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18023DD1C (-OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    if ( a2 )
    {
      if ( a2 == 6 )
      {
        if ( *(float *)a4 != *(float *)(a1 + 112) )
        {
          *(_DWORD *)(a1 + 112) = *a4;
          CScenePbrMaterial::OnNormalScaleChanged((CScenePbrMaterial *)a1);
        }
      }
      else
      {
        if ( a2 != 8 )
        {
          v6 = 3713;
          goto LABEL_11;
        }
        if ( *(float *)a4 != *(float *)(a1 + 116) )
        {
          *(_DWORD *)(a1 + 116) = *a4;
          CScenePbrMaterial::OnOcclusionStrengthChanged((CScenePbrMaterial *)a1);
        }
      }
    }
    else if ( *(float *)a4 != *(float *)(a1 + 88) )
    {
      *(_DWORD *)(a1 + 88) = *a4;
      CScenePbrMaterial::OnAlphaCutoffChanged((CScenePbrMaterial *)a1);
    }
    return 0;
  }
  if ( a3 == 52 )
  {
    if ( a2 != 3 )
    {
      v6 = 3723;
      goto LABEL_11;
    }
    *(_QWORD *)(a1 + 96) = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 104) = a4[2];
    CScenePbrMaterial::OnEmissiveFactorChanged((CScenePbrMaterial *)a1);
    return 0;
  }
  v6 = 3728;
LABEL_11:
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024809, v6);
  return v4;
}
