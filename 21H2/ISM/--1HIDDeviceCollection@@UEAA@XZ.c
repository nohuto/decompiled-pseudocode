/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009CBE4
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x18004EDCA (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _DockDeviceCollection::DockDeviceCollection_::_1_::dtor$0 @ 0x18004EE6B (_DockDeviceCollection--DockDeviceCollection_--_1_--dtor$0.c)
 *     ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x18008F4B0 (--_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x180092A60 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$0 @ 0x1800979F7 (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$0.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x180097B20 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1800994FB (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 *     ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x180099510 (--_GConsumerControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x18009A360 (--_GSystemControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x18009AC10 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x18009B1A0 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x18009B6D0 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GDockDeviceCollection@@UEAAPEAXI@Z @ 0x18009BC10 (--_GDockDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x18009C520 (--_EDockableDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x18009CC30 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
