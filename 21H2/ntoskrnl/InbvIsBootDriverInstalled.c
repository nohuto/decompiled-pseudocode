/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403B4FC0
 * Callers:
 *     DisplayBootBitmap @ 0x1403B4EC0 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403B4F50 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140A4CB74 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50BA8 && (v0 = *(__int64 (**)(void))(qword_140C50BA8 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
