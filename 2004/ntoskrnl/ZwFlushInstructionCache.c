/*
 * XREFs of ZwFlushInstructionCache @ 0x1403F52C0
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405CE220 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     WbCreateHeapExecutedBlock @ 0x1406D8EB0 (WbCreateHeapExecutedBlock.c)
 *     sub_1409606F8 @ 0x1409606F8 (sub_1409606F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
