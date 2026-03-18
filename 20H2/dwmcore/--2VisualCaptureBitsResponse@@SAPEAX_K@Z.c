/*
 * XREFs of ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180051D30
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180050530 (-Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801624E0 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall VisualCaptureBitsResponse::operator new()
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x6C8uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
