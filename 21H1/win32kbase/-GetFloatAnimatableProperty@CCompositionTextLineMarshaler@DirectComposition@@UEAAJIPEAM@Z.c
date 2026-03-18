/*
 * XREFs of ?GetFloatAnimatableProperty@CCompositionTextLineMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01DE0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionTextLineMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CCompositionTextLineMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // eax

  v3 = 0;
  v4 = a2 - 3;
  if ( !v4 )
  {
    *a3 = *((float *)this + 20);
    return v3;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = *((_DWORD *)this + 21);
    goto LABEL_7;
  }
  if ( v5 == 1 )
  {
    v6 = *((_DWORD *)this + 22);
LABEL_7:
    *(_DWORD *)a3 = v6;
    return v3;
  }
  return (unsigned int)-1073741811;
}
