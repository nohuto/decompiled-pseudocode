/*
 * XREFs of ExEnumHandleTable @ 0x1405E3DF0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140507150 (IoRevokeHandlesForProcess.c)
 *     ObFindHandleForObject @ 0x1405E3D40 (ObFindHandleForObject.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     ObInitProcess @ 0x1406970D4 (ObInitProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x140895B68 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A14AC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x1408DC5F0 (ObShutdownSystem.c)
 *     EtwpObjectHandleRundown @ 0x14093E2FC (EtwpObjectHandleRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1405E2998 (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x1405E3F10 (ExpGetNextHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64 *, __int64, __int64),
        __int64 a3,
        __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v5; // si
  __int64 v10; // rdx
  __int64 *NextHandleTableEntry; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v16[7]; // [rsp+30h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v16[0] = 0LL;
  --CurrentThread->KernelApcDisable;
  NextHandleTableEntry = (__int64 *)ExpGetNextHandleTableEntry(a1, 0LL, v16);
  if ( !NextHandleTableEntry )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(NextHandleTableEntry);
      v12 = *NextHandleTableEntry;
      if ( (*NextHandleTableEntry & 1) != 0 )
        break;
      if ( v12 )
      {
        ExpBlockOnLockedHandleEntry(a1, NextHandleTableEntry, v12);
      }
      else
      {
        v14 = v16[0];
LABEL_5:
        v13 = v14 + 4;
        if ( (v14 ^ (unsigned __int64)(v14 + 4)) >= 0x400 )
          NextHandleTableEntry = (__int64 *)ExpLookupHandleTableEntry(a1, v14 + 8);
        else
          NextHandleTableEntry += 2;
        v16[0] = v13;
        if ( !NextHandleTableEntry )
          goto LABEL_13;
      }
    }
  }
  while ( v12 != _InterlockedCompareExchange64(NextHandleTableEntry, v12 - 1, v12) );
  v14 = v16[0];
  v5 = a2(a1, NextHandleTableEntry, v16[0], a3);
  if ( !v5 )
    goto LABEL_5;
  if ( a4 )
    *a4 = v14;
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v12, v13);
  return v5;
}
