/*
 * XREFs of HalpWdatStop @ 0x1405223E0
 * Callers:
 *     <none>
 * Callees:
 *     WdInstrExecuteAction @ 0x14052CCA8 (WdInstrExecuteAction.c)
 */

__int64 __fastcall HalpWdatStop(__int64 a1)
{
  __int64 result; // rax

  result = WdInstrExecuteAction(a1 + 48, *(unsigned int *)(a1 + 44), 11LL, 0LL);
  *(_BYTE *)(a1 + 40) = 0;
  return result;
}
