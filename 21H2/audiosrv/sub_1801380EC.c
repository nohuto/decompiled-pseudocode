/*
 * XREFs of sub_1801380EC @ 0x1801380EC
 * Callers:
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_18013449C @ 0x18013449C (sub_18013449C.c)
 * Callees:
 *     sub_1801342A4 @ 0x1801342A4 (sub_1801342A4.c)
 */

void __fastcall sub_1801380EC(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    sub_1801342A4(a1);
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
