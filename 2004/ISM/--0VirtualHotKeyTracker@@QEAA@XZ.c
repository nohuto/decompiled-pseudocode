/*
 * XREFs of ??0VirtualHotKeyTracker@@QEAA@XZ @ 0x18017FD68
 * Callers:
 *     ??$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKeyTracker@@@Z @ 0x18017FC3C (--$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKe.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180004F94 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
VirtualHotKeyTracker *__fastcall VirtualHotKeyTracker::VirtualHotKeyTracker(VirtualHotKeyTracker *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  *(_QWORD *)this = &VirtualHotKeyTracker::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 4) = v2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 6) = v3;
  return this;
}
