/*
 * XREFs of HvlDeleteProcessor @ 0x140931100
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     HvlpFreeOverlayPages @ 0x140213380 (HvlpFreeOverlayPages.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     HvlpGetRegister64 @ 0x14054BFF0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x14054C0E0 (HvlpSetRegister64.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 */

void __fastcall HvlDeleteProcessor(struct _KPRCB *a1, SIZE_T a2, MEMORY_CACHING_TYPE a3)
{
  void *VirtualApicAssist; // rcx
  void *SchedulerAssist; // rcx
  void *HypercallCachedPages; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  VirtualApicAssist = a1->VirtualApicAssist;
  if ( VirtualApicAssist )
  {
    if ( a1 == KeGetCurrentPrcb() )
    {
      HvlpGetRegister64(589843LL, &v7);
      HvlpSetRegister64(589843LL, v7 & 0xFFFFFFFFFFFFFFFEuLL);
      VirtualApicAssist = a1->VirtualApicAssist;
    }
    if ( (HvlpFlags & 2) != 0 )
      MmUnmapIoSpace(VirtualApicAssist, 1uLL);
    else
      HvlpFreeOverlayPages(VirtualApicAssist, a2, a3);
    a1->VirtualApicAssist = 0LL;
  }
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
    HvlpFreeOverlayPages(SchedulerAssist, a2, a3);
  HypercallCachedPages = a1->HypercallCachedPages;
  if ( HypercallCachedPages )
    MmFreeIndependentPages(HypercallCachedPages, 20480LL);
}
