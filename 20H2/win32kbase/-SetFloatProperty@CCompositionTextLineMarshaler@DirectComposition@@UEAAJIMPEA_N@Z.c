/*
 * XREFs of ?SetFloatProperty@CCompositionTextLineMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01D70F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionTextLineMarshaler::SetFloatProperty(
        DirectComposition::CCompositionTextLineMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx

  result = 0LL;
  v5 = a2 - 3;
  if ( !v5 )
  {
    if ( *((float *)this + 20) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 20) = a3;
    goto LABEL_11;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 21) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 21) = a3;
    goto LABEL_11;
  }
  if ( v6 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 22) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x400u;
    *((float *)this + 22) = a3;
LABEL_11:
    *a4 = 1;
  }
  return result;
}
