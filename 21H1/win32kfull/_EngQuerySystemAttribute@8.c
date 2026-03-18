/*
 * XREFs of _EngQuerySystemAttribute@8 @ 0xEDF66
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EngQuerySystemAttribute(ENG_SYSTEM_ATTRIBUTE CapNum, PDWORD pCapability)
{
  return __imp__EngQuerySystemAttribute@8(CapNum, pCapability);
}
