/*
 * XREFs of ExInitializeNls @ 0x140A74EC4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1403FBA60 (ZwCreateDirectoryObject.c)
 */

NTSTATUS ExInitializeNls()
{
  NTSTATUS result; // eax
  HANDLE DirectoryHandle; // [rsp+30h] [rbp+8h] BYREF

  DirectoryHandle = 0LL;
  result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, (POBJECT_ATTRIBUTES)&NlsDirectoryAttributes);
  if ( result >= 0 )
  {
    ZwClose(DirectoryHandle);
    NlsSectionLock = 0LL;
    return 0;
  }
  return result;
}
