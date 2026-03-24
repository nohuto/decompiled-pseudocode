/*
 * XREFs of BcdFlushStore @ 0x14077A294
 * Callers:
 *     PopBcdClearPendingResume @ 0x140781D60 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1402D333C (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x14039B59C (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x1403FC0E0 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784774 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784938 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140784D9C (BiLogMessage.c)
 */

__int64 __fastcall BcdFlushStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  void *v5; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v10; // r8d

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v10;
  }
  else
  {
    v5 = (void *)BiSanitizeHandle(a1);
    v6 = ZwFlushKey(v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
}
