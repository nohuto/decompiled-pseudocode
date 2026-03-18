/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034CE4
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C002EBFC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00330E0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01B9B08 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     IsMouseIVEnabled @ 0x1C003694C (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C0180ED0 (-IsContainer@CInputDest@@QEBA_NXZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01B9664 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01BA6BC (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C01BC500 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
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
      (__int64)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
      0x1244BCEu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_TestMode_logged_traits,
      0,
      3);
  IsContainer = CInputDest::IsContainer(a3);
  v9 = 1;
  if ( *((_WORD *)this + 2481) != (_WORD)v7 || (v10 = 1, *((_WORD *)this + 2482) != HIWORD(v7)) )
    v10 = 0;
  if ( *((_WORD *)this + 2464) )
    v9 = 0;
  else
    *(_DWORD *)((char *)this + 4962) = v7;
  if ( (!IsContainer || !v9 || !v10) && *((_BYTE *)this + 4960) )
  {
    CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput((CMouseProcessor *)((char *)this + 3904), a2);
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
  }
  if ( IsContainer )
    CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk((CMouseProcessor *)((char *)this + 3904), a2, a3);
  return IsContainer;
}
