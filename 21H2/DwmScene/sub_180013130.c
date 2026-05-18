/*
 * XREFs of sub_180013130 @ 0x180013130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092714 @ 0x180092714 (sub_180092714.c)
 */

__int64 __fastcall sub_180013130(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_180092714(v1, &qword_1802124B8);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DD78(retaddr, 149, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
