/*
 * XREFs of sub_180008F9C @ 0x180008F9C
 * Callers:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_18000688C @ 0x18000688C (sub_18000688C.c)
 *     sub_18000E2A0 @ 0x18000E2A0 (sub_18000E2A0.c)
 *     sub_18002AA58 @ 0x18002AA58 (sub_18002AA58.c)
 * Callees:
 *     sub_1800090A8 @ 0x1800090A8 (sub_1800090A8.c)
 */

__int64 __fastcall sub_180008F9C(__int64 a1, __int64 *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 112) + 1LL;
  *(_QWORD *)(a1 + 112) = v3;
  if ( a2 )
    *a2 = v3;
  if ( !*(_DWORD *)(a1 + 128) )
  {
    v2 = 1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 96)) <= 1 )
      __fastfail(0xEu);
    *(_DWORD *)(a1 + 128) = GetCurrentThreadId();
  }
  if ( v2 != (unsigned int)sub_1800090A8(a1) )
    __int2c();
  return v2;
}
