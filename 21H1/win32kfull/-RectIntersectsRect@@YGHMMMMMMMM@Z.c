/*
 * XREFs of ?RectIntersectsRect@@YGHMMMMMMMM@Z @ 0x14FF7E
 * Callers:
 *     _DpiRectIntersectsRectWithSubpixel@24 @ 0x150F7B (_DpiRectIntersectsRectWithSubpixel@24.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __stdcall RectIntersectsRect(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  char v8; // bl
  BOOL v9; // esi
  struct _KFLOATING_SAVE FloatSave; // [esp+8h] [ebp-28h] BYREF
  char v12; // [esp+28h] [ebp-8h]

  v8 = 0;
  v9 = 0;
  v12 = 0;
  if ( CSmartFloatingSave::Save(&FloatSave) < 0 )
  {
    v8 = v12;
  }
  else
  {
    if ( a5 <= a3 - 0.001000000047497451 && a6 <= a4 - 0.001000000047497451 && a7 >= a1 + 0.001000000047497451 )
      v9 = a8 >= a2 + 0.001000000047497451;
    KeRestoreFloatingPointState(&FloatSave);
    v12 = 0;
  }
  if ( v8 )
    KeRestoreFloatingPointState(&FloatSave);
  return v9;
}
