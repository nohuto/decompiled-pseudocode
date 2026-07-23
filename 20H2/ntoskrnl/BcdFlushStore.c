/*
 * XREFs of BcdFlushStore @ 0x1407762E0
 * Callers:
 *     PopBcdClearPendingResume @ 0x14077DF80 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14033102C (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x14039ACD0 (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x1403F9EB0 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140780994 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140780B58 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdFlushStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  void *v5; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  NTSTATUS v10; // r8d

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v10;
  }
  else
  {
    v5 = (void *)BiSanitizeHandle((__int64)BcdStoreHandle);
    v6 = ZwFlushKey(v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
}
