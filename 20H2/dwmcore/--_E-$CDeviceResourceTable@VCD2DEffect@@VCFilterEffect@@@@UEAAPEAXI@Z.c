/*
 * XREFs of ??_E?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@UEAAPEAXI@Z @ 0x18016C410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ @ 0x18016B3A0 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ.c)
 */

void *__fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vector deleting destructor'(void *a1, char a2)
{
  CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
