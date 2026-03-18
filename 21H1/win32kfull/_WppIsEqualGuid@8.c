/*
 * XREFs of _WppIsEqualGuid@8 @ 0x178114
 * Callers:
 *     _WppTraceCallback@24 @ 0x27AFB5 (_WppTraceCallback@24.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall WppIsEqualGuid(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
