/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009CCE4
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x18004E7DA (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _DockDeviceCollection::DockDeviceCollection_::_1_::dtor$0 @ 0x18004E87B (_DockDeviceCollection--DockDeviceCollection_--_1_--dtor$0.c)
 *     ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x18008F5B0 (--_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x180092B60 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$0 @ 0x180097AF7 (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$0.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x180097C20 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1800995FB (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 *     ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x180099610 (--_GConsumerControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x18009A460 (--_GSystemControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x18009AD10 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x18009B2A0 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x18009B7D0 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GDockDeviceCollection@@UEAAPEAXI@Z @ 0x18009BD10 (--_GDockDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x18009C620 (--_EDockableDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x18009CD30 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
