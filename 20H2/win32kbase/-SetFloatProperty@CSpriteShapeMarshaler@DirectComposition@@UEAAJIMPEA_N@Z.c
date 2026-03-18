/*
 * XREFs of ?SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01E21E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetFloatProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx

  result = 0LL;
  v5 = a2 - 10;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 3221225485LL;
      *((_DWORD *)this + 4) |= 0x2000u;
      *((float *)this + 28) = a3;
    }
    else
    {
      *((_DWORD *)this + 4) |= 0x1000u;
      *((float *)this + 27) = a3;
    }
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 26) = a3;
  }
  *a4 = 1;
  return result;
}
