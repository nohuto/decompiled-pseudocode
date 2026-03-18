/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403B3810
 * Callers:
 *     DisplayBootBitmap @ 0x1403B3710 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403B37A0 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140A4A4B8 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C509E8 && (v0 = *(__int64 (**)(void))(qword_140C509E8 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
