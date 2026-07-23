/*
 * XREFs of _LdrpResReadFile@16 @ 0x4B343482
 * Callers:
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 *     _LdrpResCompareResourceNames@32 @ 0x4B2BF6C8 (_LdrpResCompareResourceNames@32.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _LdrpResSetFilePointer@8 @ 0x4B343B27 (_LdrpResSetFilePointer@8.c)
 */

NTSTATUS __thiscall LdrpResReadFile(HANDLE Handle, PVOID Buffer, ULONG Length)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+8h] [ebp-8h] BYREF

  if ( !Handle || Handle == (HANDLE)-1 )
    return -1073741811;
  result = LdrpResSetFilePointer(Handle);
  if ( result >= 0 )
  {
    v5 = NtReadFile(Handle, 0, 0, 0, &IoStatusBlock, Buffer, Length, 0, 0);
    if ( v5 == 259 )
      v5 = ZwWaitForSingleObject(Handle, 0, 0);
    result = (v5 & 0xC0000000) != 0x80000000 ? v5 : 0;
    if ( result >= 0 && Length != IoStatusBlock.Information )
      return -1073741823;
  }
  return result;
}
