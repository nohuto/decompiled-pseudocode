/*
 * XREFs of ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x18025D1F4
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18025D120 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18025D218 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18025D70C (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTrimPathOperation::ShouldSplitCurrentSegment(CTrimPathOperation *this)
{
  return *((_DWORD *)this + 8) < 2u && *((float *)this + 11) > *((float *)this + *((unsigned int *)this + 8) + 6);
}
