/*
 * XREFs of KsepMatchInitialize @ 0x140A9324C
 * Callers:
 *     KseInitialize @ 0x140A3D89C (KseInitialize.c)
 * Callees:
 *     KsepMatchInitMachineInfo @ 0x140A6B0D0 (KsepMatchInitMachineInfo.c)
 */

__int64 KsepMatchInitialize()
{
  return KsepMatchInitMachineInfo();
}
