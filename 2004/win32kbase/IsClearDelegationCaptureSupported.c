/*
 * XREFs of IsClearDelegationCaptureSupported @ 0x1C0041CB8
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C003B930 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C01244A0 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsClearDelegationCaptureSupported()
{
  if ( qword_1C0252000 )
    return qword_1C0252000();
  else
    return 3221225659LL;
}
