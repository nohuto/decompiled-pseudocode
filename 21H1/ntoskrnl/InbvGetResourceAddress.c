/*
 * XREFs of InbvGetResourceAddress @ 0x1404F9540
 * Callers:
 *     DisplayBootBitmap @ 0x1403AB120 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50A98 && (v0 = *(__int64 (**)(void))(qword_140C50A98 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
