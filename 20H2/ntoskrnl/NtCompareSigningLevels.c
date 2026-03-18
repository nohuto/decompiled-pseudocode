/*
 * XREFs of NtCompareSigningLevels @ 0x1406DD380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 NtCompareSigningLevels()
{
  int v0; // eax

  v0 = 0;
  if ( qword_140C1D980 )
    v0 = ((__int64 (*)(void))qword_140C1D980)();
  return v0 == 0 ? 0xC0000428 : 0;
}
