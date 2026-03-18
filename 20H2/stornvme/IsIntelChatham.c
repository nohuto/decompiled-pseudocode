/*
 * XREFs of IsIntelChatham @ 0x1C00090DC
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00091E0 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C000B934 (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C0016A28 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0018DC4 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
