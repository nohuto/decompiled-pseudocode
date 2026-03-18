/*
 * XREFs of PostInputMessage @ 0x1C00B19CC
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0002858 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002A5C (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0039980 (EditionPostRawMouseInputMessage.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00F8E4C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionPostInputMessage @ 0x1C00F9050 (EditionPostInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F9270 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostMouseMoveToQ @ 0x1C00F99F0 (EditionPostMouseMoveToQ.c)
 *     EditionHandleAltTab @ 0x1C0126BE0 (EditionHandleAltTab.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D5448 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D8CA0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01E1F60 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01EF040 (PostPointerEventMessage.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0224110 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00302CC (IsAdaptiveQueueDetachExempted.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C008FE54 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0096880 (WPP_RECORDER_SF_qiqdd.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0097B60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     IsPointerInputMessageWithState @ 0x1C00A2970 (IsPointerInputMessageWithState.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PtiKbdFromQ @ 0x1C00B04B8 (PtiKbdFromQ.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C00B1E00 (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00B3268 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00BE760 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FC7C8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C01077D0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C010AE98 (DwmAsyncNotifyInputActivity.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01D51CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C01DFDC4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tl.c)
 */

__int64 __fastcall PostInputMessage(
        struct tagQ *a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        char a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        void *a11,
        struct tagUIPI_INFO *a12,
        int a13,
        __int64 a14)
{
  int v14; // esi
  struct tagINPUT_MESSAGE_SOURCE *v16; // r13
  __int64 v19; // rdi
  char *v20; // r12
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  int v27; // r12d
  unsigned int v28; // ecx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  void *v31; // rax
  __int64 CoalesceableMouseMessage; // rax
  int v33; // edx
  unsigned int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v37; // edx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rax
  struct _KEVENT *v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+40h] [rbp-59h]
  int v47; // [rsp+70h] [rbp-29h] BYREF
  int v48; // [rsp+74h] [rbp-25h] BYREF
  __int64 v49; // [rsp+78h] [rbp-21h] BYREF
  __int64 v50; // [rsp+80h] [rbp-19h] BYREF
  __int64 v51; // [rsp+88h] [rbp-11h] BYREF
  struct tagTHREADINFO *v52; // [rsp+90h] [rbp-9h]
  int v53; // [rsp+E0h] [rbp+47h] BYREF
  unsigned __int64 v54; // [rsp+F8h] [rbp+5Fh] BYREF

  v54 = a4;
  v14 = a13;
  v16 = a10;
  v52 = (struct tagTHREADINFO *)(a14 & -(__int64)(a13 != 0));
  LODWORD(a10) = a10 && *((_DWORD *)a10 + 1) == 2;
  v19 = *((_QWORD *)a1 + 4);
  if ( (*((_DWORD *)a1 + 97) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  if ( (a9 & 1) != 0 || !v19 || (*(_DWORD *)(v19 + 100) & 2) != 0 )
    v19 = 0LL;
  if ( v19 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, &v54, v19, v16);
    v25 = CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      if ( IsPointerInputMessage(*(_DWORD *)(CoalesceableMouseMessage + 24)) )
      {
        if ( (unsigned int)dword_1C0330B30 > 4
          && (qword_1C0330B40 & 0x10) != 0
          && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
        {
          v47 = *(unsigned __int16 *)(v25 + 34);
          v49 = *(_QWORD *)(v25 + 40);
          LOWORD(a13) = *(_WORD *)(v25 + 32);
          v50 = *(_QWORD *)(v25 + 136);
          v53 = v33;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C0330B30,
            (unsigned int)&unk_1C02F0519,
            v35,
            v36,
            (__int64)&v50,
            (__int64)&a13,
            (__int64)&v49,
            (__int64)&v47,
            (__int64)&v53);
        }
      }
      else if ( InputTraceLogging::IsMouseInputMessage(v34)
             && (unsigned int)dword_1C0330B30 > 4
             && (qword_1C0330B40 & 0x10) != 0
             && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
      {
        v51 = *(_QWORD *)(v25 + 136);
        v48 = v37;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C0330B30,
          (unsigned int)&unk_1C02F0584,
          v38,
          v39,
          (__int64)&v51,
          (__int64)&v48);
      }
      CleanInputMessage(a3, (struct tagQMSG *)v25);
      v20 = (char *)a1 + 24;
LABEL_11:
      *(_DWORD *)(v25 + 100) ^= (*(_DWORD *)(v25 + 100) ^ (32 * v14)) & 0x20;
      v26 = a7;
      *(_QWORD *)(v25 + 136) = a7;
      if ( v26 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v46) = *((_DWORD *)a1 + 11);
        WPP_RECORDER_SF_qiqdd(
          v23,
          v22,
          v24,
          0x14u,
          (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
          v25,
          v26,
          v20,
          v46,
          *((_DWORD *)a1 + 10));
      }
      v27 = 0;
      if ( a2 )
        v28 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL);
      else
        v28 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)a1) + 416) + 280LL);
      StoreQMessage((struct tagQMSG *)v25, a2, a3, v54, a5, a6, v26, 0, a8, a9, v16, v28, a11, a12);
      InputTraceLogging::Delivery::PostInputMessage((const struct tagQMSG *)v25, a1);
      if ( (unsigned int)IsPointerInputMessageWithState(a3) )
        CTouchProcessor::MarkPointerMessageGenerated(
          gpTouchProcessor,
          a3,
          *(_QWORD *)(v25 + 40),
          -__CFSHR__(*(_DWORD *)(v25 + 100), 6),
          (void *)v25);
      if ( (unsigned int)IsMiPMouseMessage(a3) )
      {
        if ( v16 )
        {
          if ( (unsigned int)IsGenuineMouseInput(v16) )
          {
            *(_DWORD *)(v25 + 100) |= 0x800u;
            if ( a2 )
              *(_DWORD *)(v25 + 100) ^= (*(_DWORD *)(v25 + 100) ^ ((unsigned int)InputTransform::OnInput(
                                                                                   a2,
                                                                                   *(struct tagWND **)(v25 + 128),
                                                                                   v30) << 13)) & 0x2000;
          }
        }
      }
      if ( (_DWORD)a10 )
        goto LABEL_24;
      if ( a3 == 255 )
        goto LABEL_24;
      if ( *((_DWORD *)a1 + 98) <= 1u )
        goto LABEL_24;
      v29 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
      if ( *(_QWORD *)(v29 + 48) )
        goto LABEL_24;
      v29 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
      if ( *(_QWORD *)(v29 + 56) )
        goto LABEL_24;
      if ( a2 && (v42 = *((_QWORD *)a2 + 2), a2 == *(struct tagWND **)(v42 + 1384)) )
      {
        v27 = 1;
      }
      else
      {
        v43 = *((_QWORD *)a1 + 15);
        if ( !v43 )
          goto LABEL_24;
        v42 = *(_QWORD *)(v43 + 16);
        if ( v43 != *(_QWORD *)(v42 + 1384) )
          goto LABEL_24;
      }
      if ( !v42 || IsAdaptiveQueueDetachExempted(v42, v40, v41) )
        goto LABEL_24;
      if ( a3 == 260 || a3 == 513 || a3 == 516 || a3 == 519 )
        goto LABEL_71;
      if ( a3 <= 0x209 )
      {
LABEL_24:
        if ( a3 - 256 <= 1 || a3 - 513 <= 0xD && (v29 = 8707LL, _bittest((const int *)&v29, a3 - 513)) )
        {
          v31 = (void *)ReferenceDwmApiPort(v29);
          DwmAsyncNotifyInputActivity(v31);
        }
        goto LABEL_27;
      }
      if ( a3 <= 0x20B || a3 == 526 )
        goto LABEL_71;
      if ( a3 != 581 )
      {
        if ( a3 == 582 )
        {
LABEL_71:
          KeSetEvent(*(PRKEVENT *)(v42 + 1376), 1, 0);
          goto LABEL_24;
        }
        goto LABEL_24;
      }
      if ( v27 )
      {
        v44 = *(struct _KEVENT **)(*((_QWORD *)a2 + 2) + 1376LL);
      }
      else
      {
        v45 = *(_QWORD *)(v42 + 664);
        if ( !v45 || (*(_DWORD *)(v45 + 196) & 0x100000) == 0 )
          goto LABEL_27;
        v44 = *(struct _KEVENT **)(v42 + 1376);
      }
      KeSetEvent(v44, 1, 0);
LABEL_27:
      WakeSomeone(a1, v52, a3, (struct tagQMSG *)v25);
      return 1LL;
    }
  }
  v20 = (char *)a1 + 24;
  result = (__int64)AllocQEntryEx((struct tagQ *)((char *)a1 + 24), 0LL, 0);
  v25 = result;
  if ( result )
    goto LABEL_11;
  return result;
}
