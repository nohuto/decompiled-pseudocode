/*
 * XREFs of ?Release@CD3DDevice@@WBA@EAAKXZ @ 0x1800F11D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD3DDevice::Release(__int64 a1)
{
  return CD3DDevice::Release((CD3DDevice *)(a1 - 16));
}
