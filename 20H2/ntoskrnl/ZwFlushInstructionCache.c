/*
 * XREFs of ZwFlushInstructionCache @ 0x1403F9E90
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D46C4 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     WbCreateHeapExecutedBlock @ 0x14065E314 (WbCreateHeapExecutedBlock.c)
 *     sub_1409664C8 @ 0x1409664C8 (sub_1409664C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
