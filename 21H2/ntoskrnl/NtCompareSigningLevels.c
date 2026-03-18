/*
 * XREFs of NtCompareSigningLevels @ 0x1406E5A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 NtCompareSigningLevels()
{
  int v0; // eax

  v0 = 0;
  if ( qword_140C1B8E0 )
    v0 = ((__int64 (*)(void))qword_140C1B8E0)();
  return v0 == 0 ? 0xC0000428 : 0;
}
