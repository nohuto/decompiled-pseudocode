/*
 * XREFs of sub_18000FFAC @ 0x18000FFAC
 * Callers:
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_180021D50 @ 0x180021D50 (sub_180021D50.c)
 *     sub_180067614 @ 0x180067614 (sub_180067614.c)
 *     sub_180072B40 @ 0x180072B40 (sub_180072B40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000FFAC(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 160);
  if ( (result & 3) == 0 )
  {
    *(_DWORD *)(a1 + 160) = result | 1;
    return TpPostWork(*(_QWORD *)(a1 + 144));
  }
  return result;
}
