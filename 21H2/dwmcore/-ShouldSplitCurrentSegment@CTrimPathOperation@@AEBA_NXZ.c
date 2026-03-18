/*
 * XREFs of ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x1801160A6
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1802A0AD4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x1802A0BA8 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802A10B8 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTrimPathOperation::ShouldSplitCurrentSegment(CTrimPathOperation *this)
{
  return *((_DWORD *)this + 8) < 2u && *((float *)this + 11) > *((float *)this + *((unsigned int *)this + 8) + 6);
}
