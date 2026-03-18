/*
 * XREFs of ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BD540
 * Callers:
 *     PostMouseInputMessage @ 0x1C01ABC00 (PostMouseInputMessage.c)
 * Callees:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C006B88C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E208 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     IsMouseIVEnabled @ 0x1C0070FEC (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00712D4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     PostThreadEvent @ 0x1C01ABCCC (PostThreadEvent.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01BB380 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01BB9D4 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BBE78 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01BCA2C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01BE650 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::PostMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        struct _mouseCursorEvent *a4)
{
  struct CMouseProcessor::MouseInputMessage *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct CMouseProcessor::MouseInputMessage *v12; // rdi
  const struct CInputDest *v13; // rbx
  const struct CMouseProcessor::CMouseEvent *v14; // rsi
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct ContainerMouseInput *v19; // r8

  v7 = CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 3840),
         a2);
  v12 = v7;
  if ( v7 )
  {
    v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v7 + 24);
    if ( !*((_DWORD *)v7 + 6) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    if ( (a3 & 1) == 0 )
      goto LABEL_17;
    v14 = 0LL;
    if ( *((_DWORD *)v12 + 42) == 1 )
    {
      v14 = (struct CMouseProcessor::MouseInputMessage *)((char *)v12 + 352);
      CMouseProcessor::DeliverMouseMoveToInputDest(
        (CMouseProcessor *)a1,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v12 + 352),
        v13,
        (struct tagPOINT *)v12 + 18,
        a4);
    }
    else
    {
      if ( *((_DWORD *)v12 + 42) != 2 )
      {
        if ( *((_DWORD *)v12 + 42) == 3 )
        {
          v14 = (struct CMouseProcessor::MouseInputMessage *)((char *)v12 + 352);
          CMouseProcessor::DeliverMouseWheelToInputDest(
            (CMouseProcessor *)a1,
            (struct CMouseProcessor::MouseInputMessage *)((char *)v12 + 352),
            v13,
            (struct CMouseProcessor::MouseInputMessage *)((char *)v12 + 144));
        }
LABEL_13:
        if ( IsMouseIVEnabled() && isRootPartition(v17, v16) && v14 )
        {
          CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
            (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
            v14);
          CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
            (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
            v18,
            v19);
        }
LABEL_17:
        CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v12);
        LOBYTE(v7) = 1;
        return (char)v7;
      }
      v14 = (struct CMouseProcessor::MouseInputMessage *)((char *)v12 + 352);
      CMouseProcessor::DeliverMouseButtonToInputDest(
        (CMouseProcessor *)a1,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v12 + 352),
        v13,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v12 + 144));
    }
    if ( a4 )
    {
      ThreadInfo = CInputDest::GetThreadInfo(v13);
      PostThreadEvent(
        (__int64)ThreadInfo,
        0LL,
        0x20u,
        *(unsigned int *)a4,
        *((unsigned int *)a4 + 1),
        *((_QWORD *)v12 + 22));
    }
    goto LABEL_13;
  }
  return (char)v7;
}
