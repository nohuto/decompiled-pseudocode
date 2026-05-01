/*
 * XREFs of sub_180083FDC @ 0x180083FDC
 * Callers:
 *     sub_1800838A0 @ 0x1800838A0 (sub_1800838A0.c)
 *     sub_180083B4C @ 0x180083B4C (sub_180083B4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180083FDC(__int64 a1)
{
  __int64 result; // rax

  result = HamCloseActivity(*(_QWORD *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 72), *(_QWORD *)(a1 + 40));
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 52) = 2;
    return 0LL;
  }
  return result;
}
