/*
 * XREFs of DxgkCreateHwQueue @ 0x1C026FFA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCreateHwQueueInternal @ 0x1C026FFB8 (DxgkCreateHwQueueInternal.c)
 */

__int64 __fastcall DxgkCreateHwQueue(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkCreateHwQueueInternal(a1, a2);
}
