/*
 * XREFs of InbvSetTextColor @ 0x140550D30
 * Callers:
 *     DisplayBootBitmap @ 0x1403D8274 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C54D10 && (v0 = *(__int64 (**)(void))(qword_140C54D10 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
