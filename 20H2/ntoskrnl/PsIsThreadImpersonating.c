/*
 * XREFs of PsIsThreadImpersonating @ 0x140763E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1296) & 8) != 0;
}
