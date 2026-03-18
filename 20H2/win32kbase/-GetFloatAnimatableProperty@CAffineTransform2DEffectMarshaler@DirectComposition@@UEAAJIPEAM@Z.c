/*
 * XREFs of ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01DDB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r10d
  int v4; // ecx

  v3 = 0;
  if ( a2 == 3 )
  {
    v4 = *((_DWORD *)this + 36);
    goto LABEL_6;
  }
  if ( (unsigned int)(a2 - 4) <= 5 )
  {
    v4 = *((_DWORD *)this + 2 * ((unsigned __int64)(unsigned int)(a2 - 4) >> 1) + (a2 & 1) + 30);
LABEL_6:
    *(_DWORD *)a3 = v4;
    return v3;
  }
  return (unsigned int)-1073741811;
}
