/*
 * XREFs of sub_1800CF4A4 @ 0x1800CF4A4
 * Callers:
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_1800CE9C4 @ 0x1800CE9C4 (sub_1800CE9C4.c)
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 * Callees:
 *     sub_1800053AC @ 0x1800053AC (sub_1800053AC.c)
 *     sub_18000543C @ 0x18000543C (sub_18000543C.c)
 */

__int64 __fastcall sub_1800CF4A4(__int64 a1, __int64 a2, int *a3, unsigned int *a4, __int64 *a5)
{
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 i; // rbx

  v9 = sub_18000543C(a2);
  *a4 = v9;
  *a3 = v9 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v10 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_DWORD *)(i + 96) == *a4 && sub_1800053AC(i, a2) )
      {
        *a5 = v10;
        return i;
      }
      v10 = i;
    }
  }
  return 0LL;
}
