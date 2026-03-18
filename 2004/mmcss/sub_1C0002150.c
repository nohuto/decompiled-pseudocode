/*
 * XREFs of sub_1C0002150 @ 0x1C0002150
 * Callers:
 *     sub_1C0001DB0 @ 0x1C0001DB0 (sub_1C0001DB0.c)
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C0002150()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( dword_1C0007048 == 257 )
    return KeQueryInterruptTimePrecise(&v1);
  else
    return MEMORY[0xFFFFF78000000008];
}
