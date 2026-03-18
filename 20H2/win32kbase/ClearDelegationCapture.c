/*
 * XREFs of ClearDelegationCapture @ 0x1C00A4954
 * Callers:
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C009B120 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0122150 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ClearDelegationCapture())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0250008;
  if ( qword_1C0250008 )
    return (__int64 (*)(void))qword_1C0250008();
  return result;
}
