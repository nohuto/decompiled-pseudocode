/*
 * XREFs of ??1CHitTestContext@@QEAA@XZ @ 0x180180E00
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x180180E6C (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CHitTestContext::~CHitTestContext(void **this)
{
  void *v2; // rcx

  DefaultHeap::Free(this[28]);
  DefaultHeap::Free(this[24]);
  v2 = this[17];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, ((_BYTE *)this[19] - (_BYTE *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[17] = 0LL;
    this[18] = 0LL;
    this[19] = 0LL;
  }
  DefaultHeap::Free(this[7]);
}
