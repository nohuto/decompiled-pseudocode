/*
 * XREFs of ??_GCAtlasBitmapResource@@MEAAPEAXI@Z @ 0x180209790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CAtlasBitmapResource@@MEAA@XZ @ 0x1802096F8 (--1CAtlasBitmapResource@@MEAA@XZ.c)
 */

CAtlasBitmapResource *__fastcall CAtlasBitmapResource::`scalar deleting destructor'(CAtlasBitmapResource *this)
{
  char v2; // r10

  CAtlasBitmapResource::~CAtlasBitmapResource(this);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
