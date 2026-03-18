/*
 * XREFs of ??1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01E3CD0
 * Callers:
 *     ??_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0D40 (--_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CSpriteShapeMarshaler::~CSpriteShapeMarshaler(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &DirectComposition::CSpriteShapeMarshaler::`vftable';
  v1 = *((_QWORD *)this + 11);
  if ( v1 )
    Win32FreePool(v1);
}
