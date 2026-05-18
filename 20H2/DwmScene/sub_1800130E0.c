/*
 * XREFs of sub_1800130E0 @ 0x1800130E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D1D8 @ 0x18008D1D8 (sub_18008D1D8.c)
 */

__int64 sub_1800130E0()
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    sub_18008D1D8();
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DC98(retaddr, 181, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
