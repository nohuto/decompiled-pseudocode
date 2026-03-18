/*
 * XREFs of ??_GCDeviceResource@@MEAAPEAXI@Z @ 0x18019F540
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDeviceResource@@MEAA@XZ @ 0x1800328BC (--1CDeviceResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CDeviceResource *__fastcall CDeviceResource::`scalar deleting destructor'(CDeviceResource *this, char a2)
{
  CDeviceResource::~CDeviceResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
