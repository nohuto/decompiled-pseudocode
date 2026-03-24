/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403B4E50
 * Callers:
 *     DisplayBootBitmap @ 0x1403B4D50 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403B4DE0 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50B68 && (v0 = *(__int64 (**)(void))(qword_140C50B68 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
