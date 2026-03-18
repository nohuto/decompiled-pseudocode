/*
 * XREFs of std::_Med3_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DC7AC
 * Callers:
 *     std::_Guess_median_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DC41C (std--_Guess_median_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = *(_QWORD *)(a4 + 976);
  result = *a2;
  v7 = *a1;
  if ( *(float *)(v4 + 4 * *a2) > *(float *)(v4 + 4 * v7) )
  {
    *a2 = v7;
    *a1 = result;
    v4 = *(_QWORD *)(a4 + 976);
    result = *a2;
  }
  v8 = *a3;
  if ( *(float *)(v4 + 4 * *a3) > *(float *)(v4 + 4 * result) )
  {
    *a3 = result;
    *a2 = v8;
    result = *(_QWORD *)(a4 + 976);
    if ( *(float *)(result + 4 * v8) > *(float *)(result + 4 * *a1) )
    {
      *a2 = *a1;
      *a1 = v8;
    }
  }
  return result;
}
