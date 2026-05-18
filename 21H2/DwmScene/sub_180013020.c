/*
 * XREFs of sub_180013020 @ 0x180013020
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092A88 @ 0x180092A88 (sub_180092A88.c)
 */

__int64 __fastcall sub_180013020(__int64 a1, int a2)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    sub_180092A88(*(_QWORD *)(a1 + 16), 0LL);
    return 0LL;
  }
  v2 = a2 - 1;
  if ( v2 )
  {
    if ( v2 != 1 )
      return 0LL;
    v3 = 3LL;
  }
  else
  {
    v3 = 1LL;
  }
  try
  {
    sub_180092A88(*(_QWORD *)(a1 + 16), v3);
  }
  catch ( ... )
  {
    sub_18000DD78(retaddr, 77, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return 0LL;
}
