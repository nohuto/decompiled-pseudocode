/*
 * XREFs of ?SetFloatProperty@CScaleTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01D7650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CScaleTransform3DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  result = 0LL;
  if ( !a2 )
  {
    if ( *((float *)this + 18) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 18) = a3;
    goto LABEL_20;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 19) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 19) = a3;
    goto LABEL_20;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 20) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 20) = a3;
    goto LABEL_20;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 21) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x400u;
    *((float *)this + 21) = a3;
    goto LABEL_20;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 22) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 22) = a3;
    goto LABEL_20;
  }
  if ( v8 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 23) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    *((float *)this + 23) = a3;
LABEL_20:
    *a4 = 1;
  }
  return result;
}
