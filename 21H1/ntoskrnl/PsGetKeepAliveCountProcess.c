/*
 * XREFs of PsGetKeepAliveCountProcess @ 0x1409031D4
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

int __fastcall PsGetKeepAliveCountProcess(__int64 a1, char a2)
{
  int v2; // eax

  if ( a2 )
    v2 = *(_DWORD *)(a1 + 2476);
  else
    v2 = *(_DWORD *)(a1 + 2508);
  return v2 & 0x7FFFFFFF;
}
