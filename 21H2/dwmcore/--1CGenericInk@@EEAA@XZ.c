/*
 * XREFs of ??1CGenericInk@@EEAA@XZ @ 0x180214FD8
 * Callers:
 *     ??_GCGenericInk@@EEAAPEAXI@Z @ 0x18019ED80 (--_GCGenericInk@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ @ 0x18019D820 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7F3C (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CGenericInk::~CGenericInk(CGenericInk *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CGenericInk::`vftable'{for `CSuperWetSource'};
  *((_QWORD *)this + 18) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CProjectedShadow::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CGenericInk::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 344;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                         - 360;
  CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 2) + 256LL), this);
  FastRegion::CRegion::FreeMemory((void **)this + 34);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 28);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 24);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>((__int64)this + 152);
  CSuperWetSource::~CSuperWetSource(this);
}
