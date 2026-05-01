/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x18004482C
 * Callers:
 *     sub_18000CF38 @ 0x18000CF38 (sub_18000CF38.c)
 *     sub_18000D0F8 @ 0x18000D0F8 (sub_18000D0F8.c)
 *     sub_1800184BC @ 0x1800184BC (sub_1800184BC.c)
 *     sub_18001A674 @ 0x18001A674 (sub_18001A674.c)
 *     sub_18001A940 @ 0x18001A940 (sub_18001A940.c)
 *     sub_18001C4E4 @ 0x18001C4E4 (sub_18001C4E4.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_18002E6C8 @ 0x18002E6C8 (sub_18002E6C8.c)
 *     sub_1800388C4 @ 0x1800388C4 (sub_1800388C4.c)
 *     sub_18003D358 @ 0x18003D358 (sub_18003D358.c)
 *     sub_18003DFA0 @ 0x18003DFA0 (sub_18003DFA0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x180045224 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ_0 @ 0x18004524C (-cancel_current_task@Concurrency@@YAXXZ_0.c)
 *     _o__callnewh @ 0x1800452FA (_o__callnewh.c)
 *     _o_malloc @ 0x180045390 (_o_malloc.c)
 */

void *__fastcall operator new(__int64 a1)
{
  __int64 i; // rbx
  void *result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = (void *)o_malloc(a1);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh(i) )
    {
      if ( i != -1 )
        Concurrency::cancel_current_task();
      Concurrency::cancel_current_task();
    }
  }
  return result;
}
