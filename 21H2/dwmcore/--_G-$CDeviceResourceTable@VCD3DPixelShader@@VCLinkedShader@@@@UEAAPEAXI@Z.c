/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAPEAXI@Z @ 0x1802496A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ @ 0x180249638 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ.c)
 */

void *__fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`scalar deleting destructor'(void *a1, char a2)
{
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
