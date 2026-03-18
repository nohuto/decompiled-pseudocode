/*
 * XREFs of ?SetFloatProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01D7784
 * Callers:
 *     ?SetFloatProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01D7720 (-SetFloatProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetFloatProperty(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
  {
    if ( *((float *)this + 14) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x20u;
    *((float *)this + 14) = a3;
    goto LABEL_11;
  }
  if ( a2 == 6 )
  {
    if ( *((float *)this + 24) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 24) = a3;
    goto LABEL_11;
  }
  if ( a2 != 8 )
    return 3221225485LL;
  if ( *((float *)this + 28) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    *((float *)this + 28) = a3;
LABEL_11:
    *a4 = 1;
  }
  return result;
}
