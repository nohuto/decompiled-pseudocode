/*
 * XREFs of ?SetFloatProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01D7720
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01D7784 (-SetFloatProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetFloatProperty(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 == 11 )
  {
    if ( *((float *)this + 36) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x10000u;
    *((float *)this + 36) = a3;
    goto LABEL_8;
  }
  if ( a2 != 13 )
    return DirectComposition::CScenePbrMaterialMarshaler::SetFloatProperty(this, a2, a3, a4);
  if ( *((float *)this + 40) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x40000u;
    *((float *)this + 40) = a3;
LABEL_8:
    *a4 = 1;
  }
  return result;
}
