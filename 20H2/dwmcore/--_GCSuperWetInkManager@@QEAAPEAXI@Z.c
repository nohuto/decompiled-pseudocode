/*
 * XREFs of ??_GCSuperWetInkManager@@QEAAPEAXI@Z @ 0x180154EEC
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E2F0 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801548C0 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@0AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180154304 (--$_Destroy_range@V-$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetS.c)
 */

CSuperWetInkManager *__fastcall CSuperWetInkManager::`scalar deleting destructor'(CSuperWetInkManager *this)
{
  void *v2; // rcx
  void *v3; // rdi

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 88 * ((*((_QWORD *)this + 6) - (_QWORD)v2) / 88LL));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>(
      *((_QWORD *)this + 1),
      *((_QWORD *)this + 2));
    std::_Deallocate<16,0>(v3, 80 * ((*((_QWORD *)this + 3) - (_QWORD)v3) / 80LL));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  operator delete(this);
  return this;
}
