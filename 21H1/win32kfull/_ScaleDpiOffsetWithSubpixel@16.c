/*
 * XREFs of _ScaleDpiOffsetWithSubpixel@16 @ 0x151870
 * Callers:
 *     _OffsetChildren@20 @ 0x2AECC (_OffsetChildren@20.c)
 *     ?GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z @ 0x14FCA4 (-GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     ?GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z @ 0xA3A82 (-GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ScaleValueWithSubpixel@@YGXPAJPAMM@Z @ 0x150074 (-ScaleValueWithSubpixel@@YGXPAJPAMM@Z.c)
 */

int __fastcall ScaleDpiOffsetWithSubpixel(int *a1, float *a2, _DWORD *a3, _DWORD *a4)
{
  char v4; // bl
  int result; // eax
  int WindowCoordinateSpaceDpi; // edi
  unsigned __int16 v7; // ax
  float *v8; // [esp+4h] [ebp-40h]
  float *v9; // [esp+4h] [ebp-40h]
  float v10; // [esp+8h] [ebp-3Ch]
  float v11; // [esp+8h] [ebp-3Ch]
  float v14; // [esp+18h] [ebp-2Ch]
  struct _KFLOATING_SAVE FloatSave; // [esp+1Ch] [ebp-28h] BYREF
  char v16; // [esp+3Ch] [ebp-8h]

  v4 = 0;
  v16 = 0;
  result = CSmartFloatingSave::Save(&FloatSave);
  if ( result < 0 )
  {
    v4 = v16;
  }
  else
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a3);
    v7 = GetWindowCoordinateSpaceDpi(a4);
    if ( v7 )
    {
      v14 = (double)WindowCoordinateSpaceDpi / (double)v7;
      ScaleValueWithSubpixel(a2, a1, (int *)LODWORD(v14), v8, v10);
      ScaleValueWithSubpixel(a2 + 1, a1 + 1, (int *)LODWORD(v14), v9, v11);
    }
    result = KeRestoreFloatingPointState(&FloatSave);
    v16 = 0;
  }
  if ( v4 )
    return KeRestoreFloatingPointState(&FloatSave);
  return result;
}
