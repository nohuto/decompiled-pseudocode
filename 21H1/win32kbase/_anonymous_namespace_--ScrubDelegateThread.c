/*
 * XREFs of _anonymous_namespace_::ScrubDelegateThread @ 0x1C002AB30
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C002AAB0 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C012A480 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::ScrubDelegateThread(__int64 a1)
{
  *(_DWORD *)(a1 + 1216) &= ~0x2000u;
  *(_QWORD *)(a1 + 1240) = 0LL;
  *(_QWORD *)(a1 + 1248) = 0LL;
  if ( (*(_DWORD *)(a1 + 1216) & 0x1000000) == 0 )
    *(_DWORD *)(a1 + 480) &= 0xFFFFFF3F;
}
