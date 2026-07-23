/*
 * XREFs of EtwpFreeKeyNameList @ 0x14079C3E0
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14079B1B4 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14079C2FC (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1402483E0 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140252950 (RtlDeleteElementGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  _RTL_AVL_TABLE *i; // rbx
  PVOID result; // rax

  for ( i = Table; ; Table = i )
  {
    result = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !result )
      break;
    RtlDeleteElementGenericTableAvl(i, result);
  }
  return result;
}
