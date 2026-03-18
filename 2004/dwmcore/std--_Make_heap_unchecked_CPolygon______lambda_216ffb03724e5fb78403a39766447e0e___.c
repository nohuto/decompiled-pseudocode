/*
 * XREFs of std::_Make_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801FB19C
 * Callers:
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801FB5EC (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801FB488 (std--_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___.c)
 */

__int64 __fastcall std::_Make_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = (a2 - a1) >> 3;
  for ( i = (a2 - a1) >> 4;
        i > 0;
        result = std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___(
                   a1,
                   i,
                   v5,
                   &v9,
                   v8) )
  {
    --i;
    LOBYTE(v8) = a3;
    v9 = *(_QWORD *)(a1 + 8 * i);
  }
  return result;
}
