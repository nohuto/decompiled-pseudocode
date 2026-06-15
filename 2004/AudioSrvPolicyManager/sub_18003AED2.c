/*
 * XREFs of sub_18003AED2 @ 0x18003AED2
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002320 @ 0x180002320 (sub_180002320.c)
 */

__int64 __fastcall sub_18003AED2(__int64 a1, __int64 a2)
{
  char *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx

  **(_BYTE **)(a2 + 48) = 1;
  v3 = *(char **)(a2 + 32);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 40)) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 56);
    sub_180002320(v3, v4, v5 + 24);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 56);
  }
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(v5 + 28);
  return 0LL;
}
