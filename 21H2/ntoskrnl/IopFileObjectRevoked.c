/*
 * XREFs of IopFileObjectRevoked @ 0x1402AC840
 * Callers:
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     NtReadFile @ 0x14073A320 (NtReadFile.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x1406C9928 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
