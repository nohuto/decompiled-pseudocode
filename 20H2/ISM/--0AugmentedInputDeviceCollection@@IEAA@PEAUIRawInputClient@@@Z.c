/*
 * XREFs of ??0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z @ 0x180024B08
 * Callers:
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18002297C (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180024A48 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
AugmentedInputDeviceCollection *__fastcall AugmentedInputDeviceCollection::AugmentedInputDeviceCollection(
        AugmentedInputDeviceCollection *this,
        struct IRawInputClient *a2)
{
  _QWORD *v3; // rax

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &AugmentedInputDeviceCollection::`vftable';
  *((_QWORD *)this + 345) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 345) = v3;
  *((_BYTE *)this + 2776) = 1;
  return this;
}
