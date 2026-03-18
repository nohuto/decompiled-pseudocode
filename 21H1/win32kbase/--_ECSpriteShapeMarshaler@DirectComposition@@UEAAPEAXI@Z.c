/*
 * XREFs of ??_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6CC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01E9C50 (--1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSpriteShapeMarshaler *__fastcall DirectComposition::CSpriteShapeMarshaler::`vector deleting destructor'(
        DirectComposition::CSpriteShapeMarshaler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  DirectComposition::CSpriteShapeMarshaler::~CSpriteShapeMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
