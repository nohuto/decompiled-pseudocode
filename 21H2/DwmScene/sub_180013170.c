/*
 * XREFs of sub_180013170 @ 0x180013170
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092E1C @ 0x180092E1C (sub_180092E1C.c)
 */

__int64 __fastcall sub_180013170(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_180092E1C(v1, &qword_1802124F8);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DD78(retaddr, 165, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
