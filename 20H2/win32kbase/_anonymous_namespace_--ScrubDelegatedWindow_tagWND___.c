/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C009B120
 * Callers:
 *     CleanupInputDelegation @ 0x1C009B050 (CleanupInputDelegation.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C009B098 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     IsClearDelegationCaptureSupported @ 0x1C00A368C (IsClearDelegationCaptureSupported.c)
 *     ClearDelegationCapture @ 0x1C00A4954 (ClearDelegationCapture.c)
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1C00B8A34 (_anonymous_namespace_--ScrubDelegateThread.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagWND___(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 264);
  if ( !v1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  --*(_DWORD *)(v3 + 1272);
  --*(_DWORD *)(v1 + 1272);
  if ( (int)IsClearDelegationCaptureSupported() >= 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
    if ( *(_QWORD *)(v4 + 136) == a1 )
      ClearDelegationCapture(v4);
  }
  if ( *(_DWORD *)(v1 + 1272) )
    return 0;
  anonymous_namespace_::ScrubDelegateThread(v1);
  return 1;
}
