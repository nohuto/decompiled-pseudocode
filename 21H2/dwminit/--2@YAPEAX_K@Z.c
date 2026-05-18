/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x18000D5E8
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     _o__callnewh_0 @ 0x18000CFF6 (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x18000D090 (_o_malloc_0.c)
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x18000DB24 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x18000DB4C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = o_malloc_0(Size);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh_0() )
    {
      if ( i != -1LL )
        __scrt_throw_std_bad_alloc();
      __scrt_throw_std_bad_array_new_length();
    }
  }
  return result;
}
