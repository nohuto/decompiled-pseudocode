/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403D8370
 * Callers:
 *     DisplayBootBitmap @ 0x1403D8274 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403D8300 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140B263A0 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C54D10 && (v0 = *(__int64 (**)(void))(qword_140C54D10 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
