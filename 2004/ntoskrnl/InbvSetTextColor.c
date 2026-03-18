/*
 * XREFs of InbvSetTextColor @ 0x1404F9C90
 * Callers:
 *     DisplayBootBitmap @ 0x1403B0DA0 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50960 && (v0 = *(__int64 (**)(void))(qword_140C50960 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
