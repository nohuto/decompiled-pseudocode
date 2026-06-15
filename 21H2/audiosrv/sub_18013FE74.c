/*
 * XREFs of sub_18013FE74 @ 0x18013FE74
 * Callers:
 *     sub_180140028 @ 0x180140028 (sub_180140028.c)
 *     sub_18014034C @ 0x18014034C (sub_18014034C.c)
 *     sub_18014059C @ 0x18014059C (sub_18014059C.c)
 *     sub_1801426AC @ 0x1801426AC (sub_1801426AC.c)
 *     sub_180142A90 @ 0x180142A90 (sub_180142A90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18013FE74(__int64 a1, unsigned int a2, int *a3, unsigned int *a4, _QWORD *a5)
{
  __int64 v6; // r9
  __int64 result; // rax

  *a4 = a2;
  *a3 = a2 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v6 = 0LL;
  *a5 = 0LL;
  result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !result )
    return 0LL;
  while ( *(_DWORD *)(result + 24) != *a4 || *(_DWORD *)result != a2 )
  {
    v6 = result;
    result = *(_QWORD *)(result + 16);
    if ( !result )
      return 0LL;
  }
  *a5 = v6;
  return result;
}
