/*
 * XREFs of IopAllocateUnicodeString @ 0x140743F8C
 * Callers:
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PiDeferSetInterfaceState @ 0x140743858 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140743904 (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140743E74 (IopBuildGlobalSymbolicLinkString.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140777BF4 (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407C0754 (PiCreateDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x1408A16F0 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x1408A1EF8 (PiGetDriverMutableStateDirectory.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A2FE0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     RtlUShortAdd @ 0x1403118B4 (RtlUShortAdd.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, USHORT a2)
{
  _WORD *v2; // rdi
  NTSTATUS v4; // ebx
  PVOID PoolWithTag; // rax

  v2 = (_WORD *)(a1 + 2);
  *(_WORD *)a1 = 0;
  v4 = RtlUShortAdd(a2, 2u, (USHORT *)(a1 + 2));
  if ( v4 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)*v2, 0x75737050u);
    *(_QWORD *)(a1 + 8) = PoolWithTag;
    if ( !PoolWithTag )
    {
      *v2 = 0;
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
