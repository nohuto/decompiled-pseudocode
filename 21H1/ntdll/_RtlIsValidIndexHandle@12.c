/*
 * XREFs of _RtlIsValidIndexHandle@12 @ 0x4B2E0520
 * Callers:
 *     _RtlpFreeHandleForAtom@8 @ 0x4B2A7933 (_RtlpFreeHandleForAtom@8.c)
 *     _RtlpAtomMapAtomToHandleEntry@8 @ 0x4B2E04EF (_RtlpAtomMapAtomToHandleEntry@8.c)
 * Callees:
 *     _RtlIsValidHandle@8 @ 0x4B2E0560 (_RtlIsValidHandle@8.c)
 */

char __stdcall RtlIsValidIndexHandle(int a1, int a2, int *a3)
{
  int v3; // esi

  v3 = *(_DWORD *)(a1 + 20) + a2 * *(_DWORD *)(a1 + 4);
  if ( !(unsigned __int8)RtlIsValidHandle(a1, v3) )
    return 0;
  *a3 = v3;
  return 1;
}
