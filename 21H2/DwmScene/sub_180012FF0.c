/*
 * XREFs of sub_180012FF0 @ 0x180012FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092AA8 @ 0x180092AA8 (sub_180092AA8.c)
 */

__int64 sub_180012FF0()
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    sub_180092AA8();
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DD78(retaddr, 44, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
