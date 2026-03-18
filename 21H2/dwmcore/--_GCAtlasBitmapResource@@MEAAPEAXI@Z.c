/*
 * XREFs of ??_GCAtlasBitmapResource@@MEAAPEAXI@Z @ 0x18003EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasBitmapResource@@MEAA@XZ @ 0x18003EE30 (--1CAtlasBitmapResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CAtlasBitmapResource *__fastcall CAtlasBitmapResource::`scalar deleting destructor'(
        CAtlasBitmapResource *this,
        char a2)
{
  CAtlasBitmapResource::~CAtlasBitmapResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
