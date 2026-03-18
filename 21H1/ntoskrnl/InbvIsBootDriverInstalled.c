/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403AB220
 * Callers:
 *     DisplayBootBitmap @ 0x1403AB120 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403AB1B0 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140A3E9B4 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50A98 && (v0 = *(__int64 (**)(void))(qword_140C50A98 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
