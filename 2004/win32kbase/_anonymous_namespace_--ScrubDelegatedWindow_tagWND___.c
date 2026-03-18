/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C003B930
 * Callers:
 *     CleanupInputDelegation @ 0x1C003B860 (CleanupInputDelegation.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C003B8A8 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     IsClearDelegationCaptureSupported @ 0x1C0041CB8 (IsClearDelegationCaptureSupported.c)
 *     ClearDelegationCapture @ 0x1C0043950 (ClearDelegationCapture.c)
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1C0058D74 (_anonymous_namespace_--ScrubDelegateThread.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagWND___(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( !v1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  --*(_DWORD *)(v3 + 1264);
  --*(_DWORD *)(v1 + 1264);
  if ( (int)IsClearDelegationCaptureSupported() >= 0
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 136LL) == a1 )
  {
    ClearDelegationCapture();
  }
  if ( *(_DWORD *)(v1 + 1264) )
    return 0;
  anonymous_namespace_::ScrubDelegateThread(v1);
  return 1;
}
