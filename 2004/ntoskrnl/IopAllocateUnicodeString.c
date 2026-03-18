/*
 * XREFs of IopAllocateUnicodeString @ 0x140734AFC
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PiDeferSetInterfaceState @ 0x1407343C8 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140734474 (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407349E4 (IopBuildGlobalSymbolicLinkString.c)
 *     PiOpenDriverRedirectedStateKey @ 0x1407695E4 (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407B280C (PiCreateDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14089BBC0 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x14089C3C8 (PiGetDriverMutableStateDirectory.c)
 *     IoRequestDeviceRemovalForReset @ 0x14089D4B0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     RtlUShortAdd @ 0x140340B04 (RtlUShortAdd.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
