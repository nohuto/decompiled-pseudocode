/*
 * XREFs of IopCheckFileObjectExtensionFlag @ 0x1402AC870
 * Callers:
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopCheckFileObjectExtensionFlag(__int64 a1, int a2)
{
  _DWORD *v2; // rax

  v2 = *(_DWORD **)(a1 + 208);
  return v2 && (a2 & *v2) != 0;
}
