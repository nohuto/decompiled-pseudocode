/*
 * XREFs of ??1CFilterEffect@@MEAA@XZ @ 0x18019DC44
 * Callers:
 *     ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x18019E920 (--_GCAffineTransform2DEffect@@UEAAPEAXI@Z.c)
 *     ??_ECShadowEffect@@UEAAPEAXI@Z @ 0x18019E970 (--_ECShadowEffect@@UEAAPEAXI@Z.c)
 *     ??_GCCompositeEffect@@UEAAPEAXI@Z @ 0x18019EA10 (--_GCCompositeEffect@@UEAAPEAXI@Z.c)
 *     ??_GCBrightnessEffect@@UEAAPEAXI@Z @ 0x18019EAB0 (--_GCBrightnessEffect@@UEAAPEAXI@Z.c)
 *     ??_GCColorMatrixEffect@@UEAAPEAXI@Z @ 0x18019EBA0 (--_GCColorMatrixEffect@@UEAAPEAXI@Z.c)
 *     ??_GCFilterEffect@@MEAAPEAXI@Z @ 0x18019ED30 (--_GCFilterEffect@@MEAAPEAXI@Z.c)
 *     ??_GCLinearTransferEffect@@UEAAPEAXI@Z @ 0x180223D30 (--_GCLinearTransferEffect@@UEAAPEAXI@Z.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x180242054 (--1CTableTransferEffect@@UEAA@XZ.c)
 *     ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x180242D90 (--_ECTurbulenceEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CMap@_K_KV?$CMapEqualHelper@_K_K@@@@QEAAXXZ @ 0x1801000E4 (-RemoveAll@-$CMap@_K_KV-$CMapEqualHelper@_K_K@@@@QEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ @ 0x18019D7C4 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180204594 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 */

void __fastcall CFilterEffect::~CFilterEffect(CFilterEffect *this)
{
  *(_QWORD *)this = &CFilterEffect::`vftable';
  CFilterEffect::EmptyFilterInputMap(this);
  CMap<unsigned __int64,unsigned __int64,CMapEqualHelper<unsigned __int64,unsigned __int64>>::RemoveAll((__int64)this + 120);
  CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>((__int64)this + 80);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
