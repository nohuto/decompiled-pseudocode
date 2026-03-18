/*
 * XREFs of std::_Med3_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___ @ 0x18022C27C
 * Callers:
 *     std::_Guess_median_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___ @ 0x18022BFE0 (std--_Guess_median_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // r8

  v4 = *(_QWORD *)(a4 + 1088);
  v6 = (unsigned int)*a2;
  v7 = (unsigned int)*a1;
  if ( *(float *)(v4 + 4 * v6) > *(float *)(v4 + 4 * v7) )
  {
    *a2 = v7;
    *a1 = v6;
    v4 = *(_QWORD *)(a4 + 1088);
    LODWORD(v6) = *a2;
  }
  v8 = (unsigned int)*a3;
  result = (unsigned int)v6;
  if ( *(float *)(v4 + 4 * v8) > *(float *)(v4 + 4LL * (unsigned int)v6) )
  {
    *a3 = v6;
    *a2 = v8;
    result = *(_QWORD *)(a4 + 1088);
    v10 = (unsigned int)*a1;
    if ( *(float *)(result + 4 * v8) > *(float *)(result + 4 * v10) )
    {
      *a2 = v10;
      *a1 = v8;
    }
  }
  return result;
}
