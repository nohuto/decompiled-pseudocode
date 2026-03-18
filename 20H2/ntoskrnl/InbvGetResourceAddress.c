/*
 * XREFs of InbvGetResourceAddress @ 0x1404FD420
 * Callers:
 *     DisplayBootBitmap @ 0x1403B3710 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C509E8 && (v0 = *(__int64 (**)(void))(qword_140C509E8 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
