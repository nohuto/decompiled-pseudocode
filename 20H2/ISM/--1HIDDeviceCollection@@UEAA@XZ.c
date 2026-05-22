/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009C784
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x18004E19A (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _DockDeviceCollection::DockDeviceCollection_::_1_::dtor$0 @ 0x18004E23B (_DockDeviceCollection--DockDeviceCollection_--_1_--dtor$0.c)
 *     ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x18008F050 (--_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x180092600 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$0 @ 0x180097597 (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$0.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800976C0 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x18009909B (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 *     ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800990B0 (--_GConsumerControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x180099F00 (--_GSystemControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x18009A7B0 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x18009AD40 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x18009B270 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GDockDeviceCollection@@UEAAPEAXI@Z @ 0x18009B7B0 (--_GDockDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x18009C0C0 (--_EDockableDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x18009C7D0 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDeviceCollection::~HIDDeviceCollection(HIDDeviceCollection *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  v3 = (void *)*((_QWORD *)this + 343);
  if ( v3 )
  {
    operator delete(v3, a2);
    *((_QWORD *)this + 343) = 0LL;
  }
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
