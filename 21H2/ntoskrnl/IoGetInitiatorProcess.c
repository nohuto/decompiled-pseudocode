/*
 * XREFs of IoGetInitiatorProcess @ 0x14025D5C0
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x14025D580 (IoIsInitiator32bitProcess.c)
 *     IopCheckInitiatorHint @ 0x140280170 (IopCheckInitiatorHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 FileObjectExtension; // rax

  if ( *(_QWORD *)(a1 + 208) && (FileObjectExtension = IopGetFileObjectExtension(a1, 1LL)) != 0 )
    return *(_QWORD *)(FileObjectExtension + 8);
  else
    return 0LL;
}
