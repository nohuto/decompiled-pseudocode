/*
 * XREFs of sub_180043AF0 @ 0x180043AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_180043AF0(__int64 a1, __int64 a2, __int64 a3, int *a4, __int64 a5, size_t Size)
{
  unsigned int v7; // eax
  const void *v8; // rdx
  size_t v9; // rdi
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+24h] [rbp-24h] BYREF

  v7 = sub_18002BF9C(*a4);
  v12 = 0LL;
  v9 = v7;
  v11 = 1;
  if ( (unsigned int)Size <= 8 )
    memcpy(&v12, v8, (unsigned int)Size);
  sub_18002B954((void **)a4, &v11, v9, 0);
  return 0LL;
}
