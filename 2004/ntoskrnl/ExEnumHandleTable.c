/*
 * XREFs of ExEnumHandleTable @ 0x1406D7420
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501D80 (IoRevokeHandlesForProcess.c)
 *     ObInitProcess @ 0x140617FD0 (ObInitProcess.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     ObFindHandleForObject @ 0x1406D7370 (ObFindHandleForObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1408927B8 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14089E24C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x1408D8E90 (ObShutdownSystem.c)
 *     EtwpObjectHandleRundown @ 0x14093AB2C (EtwpObjectHandleRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExpLookupHandleTableEntry @ 0x1405F62C0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406D45FC (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x1406D7540 (ExpGetNextHandleTableEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(
        unsigned int *a1,
        __int64 (__fastcall *a2)(unsigned int *, __int64 *, _QWORD, __int64),
        __int64 a3,
        _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v5; // si
  __int64 *NextHandleTableEntry; // rdi
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r9
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v15[0] = 0LL;
  --CurrentThread->KernelApcDisable;
  NextHandleTableEntry = (__int64 *)ExpGetNextHandleTableEntry(a1, 0LL, v15);
  if ( !NextHandleTableEntry )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(NextHandleTableEntry);
      v11 = *NextHandleTableEntry;
      if ( (*NextHandleTableEntry & 1) != 0 )
        break;
      if ( v11 )
      {
        ExpBlockOnLockedHandleEntry((__int64)a1, NextHandleTableEntry, v11);
      }
      else
      {
        v12 = v15[0];
LABEL_5:
        v13 = v12 + 4;
        if ( (v12 ^ (unsigned __int64)(v12 + 4)) >= 0x400 )
          NextHandleTableEntry = (__int64 *)ExpLookupHandleTableEntry(a1, v12 + 8);
        else
          NextHandleTableEntry += 2;
        v15[0] = v13;
        if ( !NextHandleTableEntry )
          goto LABEL_13;
      }
    }
  }
  while ( v11 != _InterlockedCompareExchange64(NextHandleTableEntry, v11 - 1, v11) );
  v12 = v15[0];
  v5 = a2(a1, NextHandleTableEntry, v15[0], a3);
  if ( !v5 )
    goto LABEL_5;
  if ( a4 )
    *a4 = v12;
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
