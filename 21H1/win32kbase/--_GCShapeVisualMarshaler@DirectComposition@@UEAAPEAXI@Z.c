/*
 * XREFs of ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6C10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00928CC (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CShapeVisualMarshaler *__fastcall DirectComposition::CShapeVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CShapeVisualMarshaler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &DirectComposition::CShapeVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
