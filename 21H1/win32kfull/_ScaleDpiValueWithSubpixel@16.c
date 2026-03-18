/*
 * XREFs of _ScaleDpiValueWithSubpixel@16 @ 0x151932
 * Callers:
 *     ?TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z @ 0x15F6FC (-TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ScaleValueWithSubpixel@@YGXPAJPAMM@Z @ 0x150074 (-ScaleValueWithSubpixel@@YGXPAJPAMM@Z.c)
 */

int __fastcall ScaleDpiValueWithSubpixel(int *a1, float *a2, unsigned __int16 a3, unsigned __int16 a4)
{
  char v5; // bl
  int result; // eax
  float *v7; // [esp+4h] [ebp-3Ch]
  float v8; // [esp+8h] [ebp-38h]
  float v10; // [esp+14h] [ebp-2Ch]
  struct _KFLOATING_SAVE FloatSave; // [esp+18h] [ebp-28h] BYREF
  char v12; // [esp+38h] [ebp-8h]

  v5 = 0;
  v12 = 0;
  result = CSmartFloatingSave::Save(&FloatSave);
  if ( result < 0 )
  {
    v5 = v12;
  }
  else
  {
    if ( a4 )
    {
      v10 = (double)a3 / (double)a4;
      ScaleValueWithSubpixel(a2, a1, (int *)LODWORD(v10), v7, v8);
    }
    result = KeRestoreFloatingPointState(&FloatSave);
    v12 = 0;
  }
  if ( v5 )
    return KeRestoreFloatingPointState(&FloatSave);
  return result;
}
