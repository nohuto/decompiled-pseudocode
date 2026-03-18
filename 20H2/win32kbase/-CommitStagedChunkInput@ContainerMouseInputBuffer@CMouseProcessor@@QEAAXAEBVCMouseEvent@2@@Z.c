/*
 * XREFs of ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01B9664
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034CE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0036394 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BB1D0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01B55EC (-TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01BA6BC (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // r9
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  const struct tagPOINT *v9; // rcx
  unsigned int v10; // ecx
  struct tagPOINT v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 1040) )
  {
    v4 = *((_QWORD *)this + 129);
    *(_WORD *)v4 = *(_WORD *)(*((_QWORD *)a2 + 1) + 24LL);
    *(_WORD *)(v4 + 2) = *(_WORD *)(*((_QWORD *)a2 + 1) + 36LL);
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 40LL);
    v5 = *((_QWORD *)a2 + 1);
    *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = *(_QWORD *)(v5 + 16);
    if ( *(_DWORD *)v5 == 3 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
      {
        v7 = HMValidateHandleNoSecure(v6, 19);
        if ( v7 )
          *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = *(_QWORD *)(v7 + 24);
      }
    }
    if ( *(_DWORD *)v5 != 2 )
    {
      if ( *(_DWORD *)v5 == 1 )
        *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = 0LL;
      *(_DWORD *)(*((_QWORD *)this + 129) + 48LL) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 156LL);
      *(_BYTE *)(*((_QWORD *)this + 129) + 32LL) = 1;
      *(_QWORD *)(*((_QWORD *)this + 129) + 40LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL);
    }
    v8 = *((_QWORD *)this + 129);
    if ( *(_BYTE *)(v8 + 52) )
    {
      *(_DWORD *)(v8 + 48) |= 4u;
      v11 = gptCursorAsync;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
        0x1244BCEu,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_TestMode_logged_traits,
        0,
        3);
      CDesktopInputTransform::TransformMouseCoordinates(v9, &v11);
      *(struct tagPOINT *)(*((_QWORD *)this + 129) + 12LL) = v11;
    }
    v10 = (unsigned __int16)++*((_WORD *)this + 512);
    *((_QWORD *)this + 129) = (char *)this + 64 * (unsigned __int64)*((unsigned __int16 *)this + 512);
    if ( v10 > 0x10 )
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(this);
    *((_BYTE *)this + 1040) = 0;
  }
}
