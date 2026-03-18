/*
 * XREFs of ?SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0004CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetFloatProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  *a4 = 0;
  if ( !a2 )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    *((float *)this + 26) = a3;
    goto LABEL_8;
  }
  v4 = a2 - 3;
  if ( !v4 )
  {
    *((_DWORD *)this + 4) |= 0x400u;
    *((float *)this + 27) = a3;
    goto LABEL_8;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    *((float *)this + 28) = a3;
    goto LABEL_8;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 29) = a3;
    goto LABEL_8;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)this + 4) |= 0x4000u;
    *((float *)this + 30) = a3;
    goto LABEL_8;
  }
  if ( v7 == 1 )
  {
    *((_DWORD *)this + 4) |= 0x8000u;
    *((float *)this + 31) = a3;
LABEL_8:
    *a4 = 1;
    return 0LL;
  }
  return 3221225485LL;
}
