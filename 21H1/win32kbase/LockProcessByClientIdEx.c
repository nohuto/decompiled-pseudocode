/*
 * XREFs of LockProcessByClientIdEx @ 0x1C00383DC
 * Callers:
 *     LockProcessByClientId @ 0x1C0038134 (LockProcessByClientId.c)
 *     _DwmCheckProcessSession @ 0x1C0038380 (_DwmCheckProcessSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockProcessByClientIdEx(void *a1, PEPROCESS *a2, _DWORD *a3)
{
  NTSTATUS v5; // edi

  v5 = PsLookupProcessByProcessId(a1, a2);
  if ( v5 >= 0 && a3 )
    *a3 = PsGetProcessSessionId(*a2);
  return (unsigned int)v5;
}
