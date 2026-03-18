/*
 * XREFs of IopFileObjectRevoked @ 0x140205670
 * Callers:
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x1406D8FA4 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
