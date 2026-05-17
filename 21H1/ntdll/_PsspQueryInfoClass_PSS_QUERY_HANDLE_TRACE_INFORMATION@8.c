/*
 * XREFs of _PsspQueryInfoClass_PSS_QUERY_HANDLE_TRACE_INFORMATION@8 @ 0x4B388AA2
 * Callers:
 *     _PssNtQuerySnapshot@16 @ 0x4B386C80 (_PssNtQuerySnapshot@16.c)
 * Callees:
 *     <none>
 */

int __fastcall PsspQueryInfoClass_PSS_QUERY_HANDLE_TRACE_INFORMATION(int a1, _DWORD *a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 804);
  if ( !v2 )
    return -1073741275;
  *a2 = v2;
  a2[1] = *(_DWORD *)(a1 + 800);
  return 0;
}
