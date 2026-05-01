/*
 * XREFs of _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$8 @ 0x1802A9F51
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18014793C (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 272));
  }
}
