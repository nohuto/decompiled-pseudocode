/*
 * XREFs of _anonymous_namespace_::ScrubDelegateThread @ 0x1C00B8A34
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C009B120 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0122150 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::ScrubDelegateThread(__int64 a1)
{
  *(_DWORD *)(a1 + 1232) &= ~0x2000u;
  *(_QWORD *)(a1 + 1256) = 0LL;
  *(_QWORD *)(a1 + 1264) = 0LL;
  if ( (*(_DWORD *)(a1 + 1232) & 0x1000000) == 0 )
    *(_DWORD *)(a1 + 488) &= 0xFFFFFF3F;
}
