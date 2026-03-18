/*
 * XREFs of KeGetProcessorNode @ 0x14056D738
 * Callers:
 *     KiSetCacheInformationAmd @ 0x140A69A2C (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNode(__int64 a1)
{
  return KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
}
