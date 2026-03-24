/*
 * XREFs of ??1CPrimitiveColor@@MEAA@XZ @ 0x1801E2CCC
 * Callers:
 *     ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x18016DAC0 (--_GCPrimitiveColor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x1801E2E50 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 */

void __fastcall CPrimitiveColor::~CPrimitiveColor(CPrimitiveColor *this)
{
  *(_QWORD *)this = &CPrimitiveColor::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CPrimitiveColor::`vftable'{for `IDeviceResourceNotify'};
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  CResource::~CResource(this);
}
