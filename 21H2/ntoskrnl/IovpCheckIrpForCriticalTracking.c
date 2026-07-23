/*
 * XREFs of IovpCheckIrpForCriticalTracking @ 0x1409D1448
 * Callers:
 *     VfIrpAllocateCallDriverData @ 0x1409D24B0 (VfIrpAllocateCallDriverData.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409E17A8 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E192C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovpCheckIrpForCriticalTracking(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  int v4; // ecx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) == 0 )
  {
    v3 = VfIrpDatabaseEntryFindAndLock(a1);
    v4 = *(_DWORD *)(a1 + 16);
    if ( v3 )
    {
      *(_DWORD *)(a1 + 16) = v4 | 0x40000000;
      goto LABEL_6;
    }
    *(_DWORD *)(a1 + 16) = v4 | 0x80000000;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) != 0x40000000 )
    return 0LL;
  v3 = VfIrpDatabaseEntryFindAndLock(a1);
LABEL_6:
  if ( *(_QWORD *)(v3 + 240) )
    v1 = 1;
  else
    *(_DWORD *)(v3 + 56) |= 0x80000u;
  VfIrpDatabaseEntryReleaseLock(v3);
  return v1;
}
