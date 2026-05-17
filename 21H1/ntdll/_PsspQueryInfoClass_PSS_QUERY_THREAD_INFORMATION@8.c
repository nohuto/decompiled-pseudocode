/*
 * XREFs of _PsspQueryInfoClass_PSS_QUERY_THREAD_INFORMATION@8 @ 0x4B388B27
 * Callers:
 *     _PssNtQuerySnapshot@16 @ 0x4B386C80 (_PssNtQuerySnapshot@16.c)
 * Callees:
 *     <none>
 */

int __fastcall PsspQueryInfoClass_PSS_QUERY_THREAD_INFORMATION(_DWORD *a1, _DWORD *a2)
{
  if ( !a1[212] )
    return -1073741275;
  *a2 = a1[210];
  a2[1] = a1[216];
  return 0;
}
