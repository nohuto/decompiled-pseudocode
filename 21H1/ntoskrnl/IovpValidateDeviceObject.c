/*
 * XREFs of IovpValidateDeviceObject @ 0x1409C2B04
 * Callers:
 *     IovCallDriver @ 0x1409C1C94 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C24D4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
