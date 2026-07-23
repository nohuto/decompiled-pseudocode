/*
 * XREFs of IopCheckFileObjectExtensionFlag @ 0x14026A250
 * Callers:
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopCheckFileObjectExtensionFlag(__int64 a1, int a2)
{
  _DWORD *v2; // rax

  v2 = *(_DWORD **)(a1 + 208);
  return v2 && (*v2 & a2) != 0;
}
