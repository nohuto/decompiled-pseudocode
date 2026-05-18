/*
 * XREFs of sub_180012F40 @ 0x180012F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D1B8 @ 0x18008D1B8 (sub_18008D1B8.c)
 */

__int64 __fastcall sub_180012F40(__int64 a1, int a2)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    sub_18008D1B8(*(_QWORD *)(a1 + 16), 0LL);
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
    sub_18008D1B8(*(_QWORD *)(a1 + 16), v3);
  }
  catch ( ... )
  {
    sub_18000DC98(retaddr, 77, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return 0LL;
}
