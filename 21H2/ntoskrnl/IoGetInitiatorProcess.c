/*
 * XREFs of IoGetInitiatorProcess @ 0x140251590
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402722F0 (IopCheckInitiatorHint.c)
 *     IoIsInitiator32bitProcess @ 0x14036CEF0 (IoIsInitiator32bitProcess.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 FileObjectExtension; // rax

  if ( *(_QWORD *)(a1 + 208) && (FileObjectExtension = IopGetFileObjectExtension(a1, 1LL)) != 0 )
    return *(_QWORD *)(FileObjectExtension + 8);
  else
    return 0LL;
}
