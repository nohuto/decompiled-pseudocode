/*
 * XREFs of ?GetFloatAnimatableProperty@CRotateTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01D8360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransformMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CRotateTransformMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // eax

  v3 = 0;
  if ( !a2 )
  {
    *a3 = *((float *)this + 18);
    return v3;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v5 = *((_DWORD *)this + 19);
    goto LABEL_7;
  }
  if ( v4 == 1 )
  {
    v5 = *((_DWORD *)this + 20);
LABEL_7:
    *(_DWORD *)a3 = v5;
    return v3;
  }
  return (unsigned int)-1073741811;
}
