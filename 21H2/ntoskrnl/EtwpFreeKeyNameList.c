/*
 * XREFs of EtwpFreeKeyNameList @ 0x140818900
 * Callers:
 *     EtwpEnableKeyProviders @ 0x14081881C (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x140851328 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  RTL_AVL_TABLE *i; // rbx
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
