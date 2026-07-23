/*
 * XREFs of BcdCreateObject @ 0x14096B730
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405B71A0 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F2494 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14096CF04 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14039870C (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x140398810 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140772394 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407725C8 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x14096BAE0 (BiCreateObject.c)
 */

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  int v5; // ebx
  int v6; // r14d
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  NTSTATUS Object; // ebx

  v5 = (int)Description;
  v6 = (int)Identifier;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject((_DWORD)BcdStoreHandle, v6, v5, 0, (__int64)BcdObjectHandle);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable((__int64)*BcdObjectHandle, 0LL) )
        BiSetFirmwareModified((__int64)BcdStoreHandle, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
