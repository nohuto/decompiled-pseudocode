/*
 * XREFs of _MagpRemoveTransformOutputMagFac@4 @ 0xA3ACC
 * Callers:
 *     _RemoveMagnificationOutputTransform@4 @ 0xA3ABA (_RemoveMagnificationOutputTransform@4.c)
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 * Callees:
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

NTSTATUS __thiscall MagpRemoveTransformOutputMagFac(float *this)
{
  NTSTATUS result; // eax
  double *v3; // esi
  double v4; // st7
  double v5; // st6
  double v6; // st5
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-Ch]
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+Ch] [ebp-8h]
  float v12; // [esp+10h] [ebp-4h]

  result = _grpdeskRitInput;
  v3 = *(double **)(_grpdeskRitInput + 132);
  if ( v3 )
  {
    if ( ((_BYTE)v3[1] & 2) != 0 )
    {
      result = EnterFloatingPointRegion();
      if ( result )
      {
        if ( memcmp(v3 + 9, &gMagOutTransformIdentity, 0x20u) )
        {
          v12 = v3[9];
          v10 = v3[11];
          v7 = v3[12];
          v4 = v12;
          v5 = v10;
          v6 = v7;
          if ( 1.0 != v12 || 0.0 != v5 || 0.0 != v6 )
          {
            v8 = this[12] - v5;
            v11 = v8;
            this[12] = v8;
            v9 = this[13] - v6;
            this[13] = v9;
            if ( 0.0 != v4 )
            {
              *this = *this / v4;
              this[5] = this[5] / v4;
              this[12] = v11 / v4;
              this[13] = v9 / v4;
            }
          }
        }
        return KeRestoreFloatingPointState(_gfsSave);
      }
    }
  }
  return result;
}
