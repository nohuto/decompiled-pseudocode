/*
 * XREFs of ??0DockDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x180021880
 * Callers:
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002192C (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x1800249B8 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
DockDeviceCollection *__fastcall DockDeviceCollection::DockDeviceCollection(
        DockDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3)
{
  _QWORD *v5; // rax

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &DockDeviceCollection::`vftable';
  *((_QWORD *)this + 345) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  *((_QWORD *)this + 351) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v5[1] = 0LL;
  *((_QWORD *)this + 347) = v5;
  *v5 = (char *)this + 2776;
  _Mtx_init_in_situ((DockDeviceCollection *)((char *)this + 2816), 2);
  *((_QWORD *)this + 3) = a3;
  return this;
}
