/*
 * XREFs of ?SetFloatProperty@CRotateTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01D75E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransformMarshaler::SetFloatProperty(
        DirectComposition::CRotateTransformMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  if ( !a2 )
  {
    if ( *((float *)this + 18) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 18) = a3;
    goto LABEL_11;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 19) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 19) = a3;
    goto LABEL_11;
  }
  if ( v5 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 20) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 20) = a3;
LABEL_11:
    *a4 = 1;
  }
  return result;
}
