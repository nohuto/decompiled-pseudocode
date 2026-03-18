/*
 * XREFs of KsepMatchInitialize @ 0x140A900FC
 * Callers:
 *     KseInitialize @ 0x140A38EBC (KseInitialize.c)
 * Callees:
 *     KsepMatchInitMachineInfo @ 0x140A65FE0 (KsepMatchInitMachineInfo.c)
 */

__int64 KsepMatchInitialize()
{
  return KsepMatchInitMachineInfo();
}
