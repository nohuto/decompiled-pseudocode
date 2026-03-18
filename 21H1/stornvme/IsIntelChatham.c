/*
 * XREFs of IsIntelChatham @ 0x1C000912C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C000B984 (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C0016AA8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0018E64 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
