/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C012A480
 * Callers:
 *     CleanupInputDelegation @ 0x1C002A9E0 (CleanupInputDelegation.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C002AA28 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1C002AB30 (_anonymous_namespace_--ScrubDelegateThread.c)
 *     IsClearDelegationCaptureSupported @ 0x1C002AB68 (IsClearDelegationCaptureSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  --*(_DWORD *)(v3 + 1256);
  --*(_DWORD *)(v1 + 1256);
  if ( (int)IsClearDelegationCaptureSupported() >= 0
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 136LL) == a1
    && qword_1C0257FC8 )
  {
    qword_1C0257FC8();
  }
  if ( *(_DWORD *)(v1 + 1256) )
    return 0;
  anonymous_namespace_::ScrubDelegateThread(v1);
  return 1;
}
