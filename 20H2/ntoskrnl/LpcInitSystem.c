/*
 * XREFs of LpcInitSystem @ 0x140A72E5C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     AlpcpInitSystem @ 0x1407C9D8C (AlpcpInitSystem.c)
 */

char LpcInitSystem()
{
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    return 0;
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  return 1;
}
