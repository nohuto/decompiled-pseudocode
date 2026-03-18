/*
 * XREFs of ??_E?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAPEAXI@Z @ 0x18016E230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ @ 0x18016D1E4 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ.c)
 */

void *__fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::`vector deleting destructor'(void *a1, char a2)
{
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
