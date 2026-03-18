/*
 * XREFs of _PostInputMessage@60 @ 0x467D0
 * Callers:
 *     _EditionPostMouseMoveToQ@28 @ 0x477E6 (_EditionPostMouseMoveToQ@28.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     _EditionPostRawMouseInputMessage@24 @ 0xACE78 (_EditionPostRawMouseInputMessage@24.c)
 *     ?PostHidNotification@@YGHPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@II@Z @ 0xC3A22 (-PostHidNotification@@YGHPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@II@Z.c)
 *     _EditionPostInputMessage@48 @ 0xF1632 (_EditionPostInputMessage@48.c)
 *     _EditionHandleAltTab@32 @ 0xF3338 (_EditionHandleAltTab@32.c)
 *     ?PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z @ 0x143C5D (-PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z @ 0x146A3E (-FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z.c)
 *     _EditionPostMouseWheelToForeground@40 @ 0x14E0AE (_EditionPostMouseWheelToForeground@40.c)
 *     _PostPointerEventMessage@16 @ 0x159285 (_PostPointerEventMessage@16.c)
 *     ?PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DBC5 (-PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DA.c)
 *     ?PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x16DCFA (-PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z @ 0x185481 (-DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsPointerInputMessageWithState@4 @ 0x439B4 (_IsPointerInputMessageWithState@4.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x4676E (-PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     _WPP_RECORDER_SF_qiqdd@44 @ 0x6C1F6 (_WPP_RECORDER_SF_qiqdd@44.c)
 *     _DwmAsyncNotifyInputActivity@12 @ 0xA991C (_DwmAsyncNotifyInputActivity@12.c)
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 *     _IsAdaptiveQueueDetachExempted@4 @ 0xC1162 (_IsAdaptiveQueueDetachExempted@4.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0xCC9F6 (-CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     _AllocQEntry@4 @ 0xEFE7A (_AllocQEntry@4.c)
 *     ?CleanInputMessage@@YGXIPAUtagQMSG@@@Z @ 0xF0F02 (-CleanInputMessage@@YGXIPAUtagQMSG@@@Z.c)
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 */

int __fastcall PostInputMessage(
        int a1,
        int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        int a9,
        unsigned int a10,
        unsigned int a11,
        struct tagINPUT_MESSAGE_SOURCE *a12,
        unsigned int a13,
        int a14,
        int a15)
{
  unsigned int v16; // ecx
  int v17; // edi
  int CoalesceableMouseMessage; // edi
  int v19; // edx
  int v20; // eax
  unsigned int v21; // eax
  int result; // eax
  int v23; // eax
  int v24; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v26; // eax
  int v27; // ebx
  int v28; // eax
  bool v29; // zf
  void *v30; // eax
  int v31; // eax
  unsigned __int64 v32; // [esp-1Ch] [ebp-3Ch]
  int v33; // [esp-4h] [ebp-24h]
  const struct tagQMSG *v34; // [esp+0h] [ebp-20h]
  unsigned int v35; // [esp+0h] [ebp-20h]
  unsigned __int64 v36; // [esp+0h] [ebp-20h]
  struct tagQMSG *v37; // [esp+4h] [ebp-1Ch]
  BOOL v39; // [esp+14h] [ebp-Ch]
  int v40; // [esp+14h] [ebp-Ch]
  int v41; // [esp+18h] [ebp-8h]

  v16 = a11;
  v41 = a1;
  v39 = a11 && *(_DWORD *)(a11 + 4) == 2;
  v17 = *(_DWORD *)(a1 + 16);
  if ( (*(_BYTE *)(a1 + 284) & 1) != 0 )
  {
    PostUpdateKeyStateEvent(a1);
    v16 = a11;
  }
  if ( (a10 & 1) != 0 || !v17 || (*(_BYTE *)(v17 + 64) & 2) != 0 )
    v17 = 0;
  if ( v17 && (a3 == (struct tagQMSG *)512 || a3 == (struct tagQMSG *)522 || a3 == (struct tagQMSG *)526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, &a4, v17, v16);
    if ( CoalesceableMouseMessage )
    {
      InputTraceLogging::Delivery::CoalesceMessage(v34);
      CleanInputMessage(v35, v37);
LABEL_17:
      v19 = a7;
      v20 = (*(_DWORD *)(CoalesceableMouseMessage + 64) ^ (32 * a14)) & 0x20;
      *(_DWORD *)(CoalesceableMouseMessage + 96) = a7;
      *(_DWORD *)(CoalesceableMouseMessage + 64) ^= v20;
      *(_DWORD *)(CoalesceableMouseMessage + 100) = a8;
      if ( __PAIR64__(a8, v19) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qiqdd(
          a1 + 12,
          20,
          &WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
          CoalesceableMouseMessage,
          v19,
          a8,
          a1 + 12,
          *(_DWORD *)(a1 + 24),
          *(_DWORD *)(a1 + 20));
        v19 = a7;
      }
      if ( a2 )
      {
        v21 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 184);
      }
      else
      {
        v23 = *(_DWORD *)(a1 + 64);
        if ( v23 )
          v24 = *(_DWORD *)(v23 + 8);
        else
          v24 = *(_DWORD *)(a1 + 52);
        v21 = *(_DWORD *)(*(_DWORD *)(v24 + 232) + 156);
      }
      HIDWORD(v32) = a9;
      LODWORD(v32) = 0;
      StoreQMessage(a3, a4, a5, a6, v19, a8, v32, a10, a11, v21, a12, a13, v34, v37);
      InputTraceLogging::Delivery::PostInputMessage(CoalesceableMouseMessage, a1);
      if ( IsPointerInputMessageWithState() )
        CTouchProcessor::MarkPointerMessageGenerated(
          _gpTouchProcessor,
          (unsigned int)a3,
          *(_DWORD *)(CoalesceableMouseMessage + 20),
          (int)(*(_DWORD *)(CoalesceableMouseMessage + 64) << 26) >> 31,
          (void *)CoalesceableMouseMessage);
      if ( IsMiPMouseMessage(a3) )
      {
        if ( a11 )
        {
          if ( IsGenuineMouseInput(a11) )
          {
            *(_DWORD *)(CoalesceableMouseMessage + 64) |= 0x800u;
            if ( a2 )
              *(_DWORD *)(CoalesceableMouseMessage + 64) ^= (*(_DWORD *)(CoalesceableMouseMessage + 64) ^ (InputTransform::OnInput(*(InputTransform **)(CoalesceableMouseMessage + 88), *(struct tagWND **)(CoalesceableMouseMessage + 92), v36) << 13)) & 0x2000;
          }
        }
      }
      if ( v39 )
        goto LABEL_56;
      if ( a3 == (struct tagQMSG *)255 )
        goto LABEL_56;
      if ( *(_DWORD *)(a1 + 288) <= 1u )
        goto LABEL_56;
      CurrentThread = KeGetCurrentThread();
      if ( *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 24) )
        goto LABEL_56;
      v26 = KeGetCurrentThread();
      if ( *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v26) + 252) + 28) )
        goto LABEL_56;
      v40 = 0;
      if ( a2 )
      {
        v27 = *(_DWORD *)(a2 + 8);
        if ( a2 == *(_DWORD *)(v27 + 796) )
        {
          v40 = 1;
LABEL_46:
          if ( v27 && !IsAdaptiveQueueDetachExempted(v27) )
          {
            if ( (unsigned int)a3 > 0x20B )
            {
              if ( a3 == (struct tagQMSG *)526 )
                goto LABEL_55;
              if ( a3 == (struct tagQMSG *)581 )
              {
                if ( v40 )
                {
                  KeSetEvent(*(PRKEVENT *)(*(_DWORD *)(a2 + 8) + 792), 1, 0);
                }
                else
                {
                  v31 = *(_DWORD *)(v27 + 368);
                  if ( v31 && (*(_DWORD *)(v31 + 184) & 0x100000) != 0 )
                    KeSetEvent(*(PRKEVENT *)(v27 + 792), 1, 0);
                }
                goto LABEL_63;
              }
              v29 = (struct tagQMSG *)((char *)a3 - 581) == (struct tagQMSG *)1;
            }
            else
            {
              if ( (unsigned int)a3 >= 0x20A
                || a3 == (struct tagQMSG *)260
                || a3 == (struct tagQMSG *)513
                || a3 == (struct tagQMSG *)516 )
              {
                goto LABEL_55;
              }
              v29 = (struct tagQMSG *)((char *)a3 - 516) == (struct tagQMSG *)3;
            }
            if ( v29 )
LABEL_55:
              KeSetEvent(*(PRKEVENT *)(v27 + 792), 1, 0);
          }
LABEL_56:
          if ( a3 == (struct tagQMSG *)513
            || a3 == (struct tagQMSG *)514
            || a3 == (struct tagQMSG *)522
            || a3 == (struct tagQMSG *)526
            || a3 == (struct tagQMSG *)256
            || a3 == (struct tagQMSG *)257 )
          {
            v33 = *(_DWORD *)(CoalesceableMouseMessage + 16);
            v30 = (void *)ReferenceDwmApiPort();
            DwmAsyncNotifyInputActivity(v30, v33);
          }
LABEL_63:
          WakeSomeone(a3, (struct tagTHREADINFO *)CoalesceableMouseMessage, v36, (struct tagQMSG *)HIDWORD(v36));
          return 1;
        }
        a1 = v41;
      }
      v28 = *(_DWORD *)(a1 + 64);
      if ( !v28 )
        goto LABEL_56;
      v27 = *(_DWORD *)(v28 + 8);
      if ( v28 != *(_DWORD *)(v27 + 796) )
        goto LABEL_56;
      goto LABEL_46;
    }
  }
  result = AllocQEntry(a1 + 12);
  CoalesceableMouseMessage = result;
  if ( result )
    goto LABEL_17;
  return result;
}
