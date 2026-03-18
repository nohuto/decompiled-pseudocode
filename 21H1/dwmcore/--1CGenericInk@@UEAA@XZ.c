/*
 * XREFs of ??1CGenericInk@@UEAA@XZ @ 0x1801C616C
 * Callers:
 *     ??_GCGenericInk@@UEAAPEAXI@Z @ 0x180171600 (--_GCGenericInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ @ 0x18016FD5C (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801997D4 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ??1CSuperWetSource@@UEAA@XZ @ 0x1801C7694 (--1CSuperWetSource@@UEAA@XZ.c)
 */

void __fastcall CGenericInk::~CGenericInk(CGenericInk *this)
{
  struct CSuperWetSource *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v2 = (CGenericInk *)((char *)this + 72);
  *(_QWORD *)this = &CGenericInk::`vftable'{for `CContent'};
  *((_QWORD *)this + 8) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 9) = &CGenericInk::`vftable'{for `CSuperWetSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CGenericInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CGenericInk::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 320;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 336;
  CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 2) + 128LL), v2);
  FastRegion::CRegion::FreeMemory((void **)this + 31);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 200);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>((__int64)this + 128);
  CSuperWetSource::~CSuperWetSource(v2);
  CResource::~CResource(this);
}
