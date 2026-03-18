/*
 * XREFs of IopFileObjectRevoked @ 0x140297B98
 * Callers:
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x1406FCB54 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
