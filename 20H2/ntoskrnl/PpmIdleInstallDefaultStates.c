/*
 * XREFs of PpmIdleInstallDefaultStates @ 0x1403C3A90
 * Callers:
 *     <none>
 * Callees:
 *     PpmInstallNewIdleStates @ 0x1403C3AB0 (PpmInstallNewIdleStates.c)
 */

__int64 __fastcall PpmIdleInstallDefaultStates(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = a1 + 0x8000;
  return PpmInstallNewIdleStates();
}
