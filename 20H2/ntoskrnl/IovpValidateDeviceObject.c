/*
 * XREFs of IovpValidateDeviceObject @ 0x1409C8B34
 * Callers:
 *     IovCallDriver @ 0x1409C7CC4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C8504 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
