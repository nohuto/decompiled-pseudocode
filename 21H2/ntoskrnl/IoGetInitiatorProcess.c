/*
 * XREFs of IoGetInitiatorProcess @ 0x1402D3250
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402602E0 (IopCheckInitiatorHint.c)
 *     IoIsInitiator32bitProcess @ 0x14036CD40 (IoIsInitiator32bitProcess.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1403567E0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 FileObjectExtension; // rax

  if ( *(_QWORD *)(a1 + 208) && (FileObjectExtension = IopGetFileObjectExtension(a1, 1LL, 0LL, a4)) != 0 )
    return *(_QWORD *)(FileObjectExtension + 8);
  else
    return 0LL;
}
