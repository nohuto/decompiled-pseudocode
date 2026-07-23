/*
 * XREFs of HvlInitializeProcessor @ 0x140795810
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402FE520 (MmGetPhysicalAddress.c)
 *     HvlpFreeOverlayPages @ 0x14036C9A0 (HvlpFreeOverlayPages.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F2488 (HvlpSetupCachedHypercallPages.c)
 *     HvlpAllocateOverlayPages @ 0x1404F90AC (HvlpAllocateOverlayPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     HvlpEnableRootVirtualProcessor @ 0x1408912F8 (HvlpEnableRootVirtualProcessor.c)
 */

__int64 __fastcall HvlInitializeProcessor(_SLIST_HEADER *a1)
{
  __int64 result; // rax
  __int64 v3; // r14
  void *v4; // rdi
  void *v5; // rbp
  __int64 OverlayPages; // rax
  __int64 v7; // rax
  SIZE_T v8; // rdx
  MEMORY_CACHING_TYPE v9; // r8d
  __int64 IndependentPages; // rax
  PHYSICAL_ADDRESS *v11; // rsi

  if ( !HvlHypervisorConnected )
    return 0LL;
  v3 = 2LL;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpEnableRootVirtualProcessor(), (int)result >= 0) )
  {
    v4 = 0LL;
    v5 = 0LL;
    if ( (HvlpFlags & 0x80000) != 0 && (HvlpFlags & 2) == 0 )
    {
      OverlayPages = HvlpAllocateOverlayPages();
      v5 = (void *)OverlayPages;
      if ( !OverlayPages )
        return 3221225626LL;
      a1[2104].Region = OverlayPages;
    }
    if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x8000) != 0 )
    {
      v7 = HvlpAllocateOverlayPages();
      v4 = (void *)v7;
      if ( !v7 )
      {
LABEL_18:
        if ( v5 )
        {
          HvlpFreeOverlayPages(v5, v8, v9);
          a1[2104].Region = 0LL;
        }
        if ( v4 )
        {
          HvlpFreeOverlayPages(v4, v8, v9);
          a1[2123].Region = 0LL;
        }
        return 3221225626LL;
      }
      a1[2123].Region = v7;
    }
    IndependentPages = MmAllocateIndependentPagesEx(0x6000uLL, *(unsigned __int16 *)(a1[12].Alignment + 146), 0LL, 0);
    v11 = (PHYSICAL_ADDRESS *)IndependentPages;
    if ( IndependentPages )
    {
      a1[2104].Alignment = IndependentPages;
      do
      {
        v11[2] = MmGetPhysicalAddress(v11);
        v11 += 512;
        --v3;
      }
      while ( v3 );
      HvlpSetupCachedHypercallPages(a1);
      return 0LL;
    }
    goto LABEL_18;
  }
  return result;
}
