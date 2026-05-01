/*
 * XREFs of sub_180043FCC @ 0x180043FCC
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_180043FCC(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // rdx
  void *v4; // r9
  int v5; // edi
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = sub_18002BF9C(*(_DWORD *)a1);
  memcpy(v4, v3, v2);
  v5 = TpAllocTimer(a1 + 72, sub_18002B030, a1, 0LL);
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 64) = 30LL;
    v8 = -300000000LL;
    TpSetTimer(v6, &v8, 0LL, 0LL);
  }
  return (unsigned int)v5;
}
