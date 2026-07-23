/*
 * XREFs of BcdFlushStore @ 0x14077A454
 * Callers:
 *     PopBcdClearPendingResume @ 0x140781F20 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14025166C (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x14039B6EC (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x1403FC2C0 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784934 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784AF8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140784F5C (BiLogMessage.c)
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
