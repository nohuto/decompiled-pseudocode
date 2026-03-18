/*
 * XREFs of IopCheckFileObjectExtensionFlag @ 0x140209F2C
 * Callers:
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopCheckFileObjectExtensionFlag(__int64 a1, int a2)
{
  _DWORD *v2; // rax

  v2 = *(_DWORD **)(a1 + 208);
  return v2 && (*v2 & a2) != 0;
}
