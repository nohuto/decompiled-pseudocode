/*
 * XREFs of KsepMatchInitialize @ 0x140A953EC
 * Callers:
 *     KseInitialize @ 0x140A3ED1C (KseInitialize.c)
 * Callees:
 *     KsepMatchInitMachineInfo @ 0x140A6CC90 (KsepMatchInitMachineInfo.c)
 */

__int64 KsepMatchInitialize()
{
  return KsepMatchInitMachineInfo();
}
