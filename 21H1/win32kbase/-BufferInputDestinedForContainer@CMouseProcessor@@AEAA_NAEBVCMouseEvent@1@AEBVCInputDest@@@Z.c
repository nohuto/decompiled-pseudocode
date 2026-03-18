/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C00646B4
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C005FCCC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0063334 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01C1BD8 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C0189110 (-IsContainer@CInputDest@@QEBA_NXZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01C1734 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01C278C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C01C45F4 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 */

bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  int v7; // ebx
  bool IsContainer; // si
  char v9; // al
  char v10; // cl

  if ( !(unsigned __int8)IsMouseIVEnabled() || !(unsigned __int8)isRootPartition() )
    return 0;
  v7 = *((_DWORD *)a3 + 27);
  if ( (unsigned __int8)IsMouseIVEnabled() )
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
      0x1244BCEu,
      0,
      0,
      (__int64)&Feature_BrokeredDisplays_TestMode_logged_traits,
      0,
      3);
  IsContainer = CInputDest::IsContainer(a3);
  v9 = 1;
  if ( *((_WORD *)this + 2517) != (_WORD)v7 || (v10 = 1, *((_WORD *)this + 2518) != HIWORD(v7)) )
    v10 = 0;
  if ( *((_WORD *)this + 2500) )
    v9 = 0;
  else
    *(_DWORD *)((char *)this + 5034) = v7;
  if ( (!IsContainer || !v9 || !v10) && *((_BYTE *)this + 5032) )
  {
    CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput((CMouseProcessor *)((char *)this + 3976), a2);
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3976));
  }
  if ( IsContainer )
    CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk((CMouseProcessor *)((char *)this + 3976), a2, a3);
  return IsContainer;
}
