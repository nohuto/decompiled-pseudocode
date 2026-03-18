/*
 * XREFs of ??_ECImageSource@@UEAAPEAXI@Z @ 0x18016EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A40A8 (--1CResource@@MEAA@XZ.c)
 */

CImageSource *__fastcall CImageSource::`vector deleting destructor'(CImageSource *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
