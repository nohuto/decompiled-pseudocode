/*
 * XREFs of SeSetAccessStateGenericMapping @ 0x1406780C0
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

void __stdcall SeSetAccessStateGenericMapping(PACCESS_STATE AccessState, PGENERIC_MAPPING GenericMapping)
{
  *(GENERIC_MAPPING *)((char *)AccessState->AuxData + 8) = *GenericMapping;
}
