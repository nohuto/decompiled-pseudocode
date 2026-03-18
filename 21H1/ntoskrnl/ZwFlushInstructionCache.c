/*
 * XREFs of ZwFlushInstructionCache @ 0x1403F4030
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405CCE50 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     WbCreateHeapExecutedBlock @ 0x14065CA04 (WbCreateHeapExecutedBlock.c)
 *     sub_14095F358 @ 0x14095F358 (sub_14095F358.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
