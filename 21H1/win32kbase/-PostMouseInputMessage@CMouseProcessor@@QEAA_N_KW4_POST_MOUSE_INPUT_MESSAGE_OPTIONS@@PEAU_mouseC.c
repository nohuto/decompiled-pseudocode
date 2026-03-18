/*
 * XREFs of ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C32A0
 * Callers:
 *     PostMouseInputMessage @ 0x1C01B1960 (PostMouseInputMessage.c)
 * Callees:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C005FCCC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0063334 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     PostThreadEvent @ 0x1C01B1A2C (PostThreadEvent.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01C10E0 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01C1734 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01C1BD8 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01C278C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01C43CC (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::PostMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        struct _mouseCursorEvent *a4)
{
  struct CMouseProcessor::MouseInputMessage *v7; // rax
  __int64 v8; // rcx
  struct CMouseProcessor::MouseInputMessage *v9; // rdi
  const struct CInputDest *v10; // rbx
  const struct CMouseProcessor::CMouseEvent *v11; // rsi
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct ContainerMouseInput *v16; // r8

  v7 = CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 3912),
         a2);
  v9 = v7;
  if ( v7 )
  {
    v10 = (struct CMouseProcessor::MouseInputMessage *)((char *)v7 + 24);
    if ( !*((_DWORD *)v7 + 6) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    if ( (a3 & 1) == 0 )
      goto LABEL_17;
    v11 = 0LL;
    if ( *((_DWORD *)v9 + 42) == 1 )
    {
      v11 = (struct CMouseProcessor::MouseInputMessage *)((char *)v9 + 352);
      CMouseProcessor::DeliverMouseMoveToInputDest(
        (CMouseProcessor *)a1,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v9 + 352),
        v10,
        (struct tagPOINT *)v9 + 18,
        a4);
    }
    else
    {
      if ( *((_DWORD *)v9 + 42) != 2 )
      {
        if ( *((_DWORD *)v9 + 42) == 3 )
        {
          v11 = (struct CMouseProcessor::MouseInputMessage *)((char *)v9 + 352);
          CMouseProcessor::DeliverMouseWheelToInputDest(
            (CMouseProcessor *)a1,
            (struct CMouseProcessor::MouseInputMessage *)((char *)v9 + 352),
            v10,
            (struct CMouseProcessor::MouseInputMessage *)((char *)v9 + 144));
        }
LABEL_13:
        if ( IsMouseIVEnabled() && isRootPartition(v14, v13) && v11 )
        {
          CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
            (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3976),
            v11);
          CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
            (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3976),
            v15,
            v16);
        }
LABEL_17:
        CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v9);
        LOBYTE(v7) = 1;
        return (char)v7;
      }
      v11 = (struct CMouseProcessor::MouseInputMessage *)((char *)v9 + 352);
      CMouseProcessor::DeliverMouseButtonToInputDest(
        (CMouseProcessor *)a1,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v9 + 352),
        v10,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v9 + 144));
    }
    if ( a4 )
    {
      ThreadInfo = CInputDest::GetThreadInfo(v10);
      PostThreadEvent(
        (__int64)ThreadInfo,
        0LL,
        0x20u,
        *(unsigned int *)a4,
        *((unsigned int *)a4 + 1),
        *((_QWORD *)v9 + 22));
    }
    goto LABEL_13;
  }
  return (char)v7;
}
