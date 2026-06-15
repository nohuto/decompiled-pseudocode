/*
 * XREFs of sub_1800187C8 @ 0x1800187C8
 * Callers:
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_180016EF0 @ 0x180016EF0 (sub_180016EF0.c)
 *     sub_18001802C @ 0x18001802C (sub_18001802C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800187C8(__int64 a1, unsigned int *a2, int *a3, unsigned int *a4, _QWORD *a5)
{
  unsigned int v5; // eax
  __int64 v8; // r8
  __int64 v9; // rdx

  v5 = *a2;
  *a4 = *a2;
  *a3 = v5 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !v9 )
    return 0LL;
  while ( *(_DWORD *)(v9 + 24) != *a4 || *(_QWORD *)v9 != *(_QWORD *)a2 )
  {
    v8 = v9;
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      return 0LL;
  }
  *a5 = v8;
  return v9;
}
