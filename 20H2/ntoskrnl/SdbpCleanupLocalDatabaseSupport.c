/*
 * XREFs of SdbpCleanupLocalDatabaseSupport @ 0x14074F1CC
 * Callers:
 *     SdbReleaseDatabase @ 0x14074F208 (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpCloseLocalDatabaseEx @ 0x140968F04 (SdbpCloseLocalDatabaseEx.c)
 */

__int64 __fastcall SdbpCleanupLocalDatabaseSupport(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  int v5; // eax

  if ( (*(_DWORD *)(a1 + 28) & 0xFFF8) != 0 )
  {
    for ( i = 3; i < 0x10; ++i )
    {
      v5 = *(_DWORD *)(a1 + 28);
      if ( _bittest(&v5, i) )
        SdbpCloseLocalDatabaseEx(a1, a2, i);
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
    SdbpCloseLocalDatabaseEx(a1, a2, 1LL);
  return 1LL;
}
