/*
 * XREFs of sub_18001F9E0 @ 0x18001F9E0
 * Callers:
 *     sub_180046791 @ 0x180046791 (sub_180046791.c)
 *     sub_1800467A7 @ 0x1800467A7 (sub_1800467A7.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001F9E0(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
