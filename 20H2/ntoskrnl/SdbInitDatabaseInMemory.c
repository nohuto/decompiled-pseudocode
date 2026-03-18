/*
 * XREFs of SdbInitDatabaseInMemory @ 0x14074F350
 * Callers:
 *     KsepSdbMapToMemory @ 0x14074EBF4 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x14077AB80 (PiInitializeDDB.c)
 *     PpBootDDBHelper @ 0x140799A00 (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x1407CDC28 (KsepSdbBootInitialize.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpInitializeMatchers @ 0x14074F3D8 (SdbpInitializeMatchers.c)
 *     SdbCloseDatabaseRead @ 0x14074F438 (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x14074F480 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x1407541E4 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v7; // rcx

  v4 = AslAlloc(a1, 1008LL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2);
    *(_QWORD *)(v4 + 8) = v5;
    if ( v5 )
    {
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(v4 + 28) = 1;
      *(_DWORD *)(v4 + 56) = 2;
      *(_QWORD *)(v4 + 48) = v5;
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1LL);
    v7 = *(void **)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag((PVOID)v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
