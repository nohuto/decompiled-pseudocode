/*
 * XREFs of BcdFlushStore @ 0x1407658F0
 * Callers:
 *     PopBcdClearPendingResume @ 0x14076D570 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140322838 (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x14039807C (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x1403F4050 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14076FF84 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140770148 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
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
