/*
 * XREFs of ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C006BAFC
 * Callers:
 *     CitSessionConnectChange @ 0x1C005C5E0 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C005E85C (CitDisplayPowerChange.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C006CF88 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CitpAllowForegroundProcess(const struct _CIT_IMPACT_CONTEXT *a1)
{
  return (*((_BYTE *)a1 + 112) & 2) != 0 && *((_DWORD *)a1 + 50);
}
