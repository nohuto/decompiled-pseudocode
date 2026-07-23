/*
 * XREFs of InbvGetResourceAddress @ 0x1404FEF40
 * Callers:
 *     DisplayBootBitmap @ 0x1403B4EC0 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50BA8 && (v0 = *(__int64 (**)(void))(qword_140C50BA8 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
