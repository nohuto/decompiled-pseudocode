/*
 * XREFs of SdbReleaseDatabase @ 0x14073EAA8
 * Callers:
 *     KsepSdbUnmapFromMemory @ 0x14073EF08 (KsepSdbUnmapFromMemory.c)
 *     PiReleaseDDB @ 0x140769BB4 (PiReleaseDDB.c)
 *     KsepSdbBootRelease @ 0x1407A6468 (KsepSdbBootRelease.c)
 *     PpReleaseBootDDB @ 0x1407A64A4 (PpReleaseBootDDB.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x14073EA6C (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbCloseDatabaseRead @ 0x14073ECD8 (SdbCloseDatabaseRead.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SdbReleaseDatabase(__int64 P)
{
  __int64 v2; // rdx
  void *v3; // rcx
  _QWORD **v4; // r8

  AslLogCallPrintf(3LL);
  if ( *(_DWORD *)(P + 992) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(P + 1000) + 1000LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(P + 1000) + 1000LL));
      AslLogCallPrintf(1LL);
    }
    goto LABEL_8;
  }
  if ( *(int *)(P + 1000) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport(P, v2);
    if ( (*(_DWORD *)(P + 120) & 2) != 0 )
      SdbCloseDatabaseRead(*(PVOID *)(P + 112));
    v3 = *(void **)(P + 8);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    while ( 1 )
    {
      v4 = *(_QWORD ***)(P + 568);
      if ( !v4 )
        break;
      if ( v4[1] == v4 )
      {
        *(_QWORD *)(P + 568) = 0LL;
      }
      else
      {
        *(_QWORD *)(P + 568) = *v4;
        *v4[1] = *v4;
        (*v4)[1] = v4[1];
      }
      ExFreePoolWithTag(v4, 0x74705041u);
    }
LABEL_8:
    ExFreePoolWithTag((PVOID)P, 0x74705041u);
    return;
  }
  AslLogCallPrintf(1LL);
}
