/*
 * XREFs of KsepMatchInitialize @ 0x140A8F6EC
 * Callers:
 *     KseInitialize @ 0x140A38D38 (KseInitialize.c)
 * Callees:
 *     KsepMatchInitMachineInfo @ 0x140A659C0 (KsepMatchInitMachineInfo.c)
 */

__int64 KsepMatchInitialize()
{
  return KsepMatchInitMachineInfo();
}
