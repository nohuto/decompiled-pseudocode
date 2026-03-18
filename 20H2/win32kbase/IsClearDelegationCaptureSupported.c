/*
 * XREFs of IsClearDelegationCaptureSupported @ 0x1C00A368C
 * Callers:
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C009B120 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0122150 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsClearDelegationCaptureSupported()
{
  if ( qword_1C0250000 )
    return qword_1C0250000();
  else
    return 3221225659LL;
}
