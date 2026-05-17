/*
 * XREFs of _PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION@8 @ 0x4B388AC0
 * Callers:
 *     _PssNtQuerySnapshot@16 @ 0x4B386C80 (_PssNtQuerySnapshot@16.c)
 * Callees:
 *     <none>
 */

int __fastcall PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION(_DWORD *a1, _DWORD *a2)
{
  qmemcpy(a2, a1 + 3, 0x20u);
  qmemcpy(a2 + 8, a1 + 12, 0x22u);
  qmemcpy(a2 + 18, a1 + 22, 0x30u);
  a2[34] = a1[50];
  a2[35] = a1[51];
  a2[36] = a1[48];
  a2[37] = a1[49];
  return 0;
}
