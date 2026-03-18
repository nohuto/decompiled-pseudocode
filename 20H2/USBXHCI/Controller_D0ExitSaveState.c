/*
 * XREFs of Controller_D0ExitSaveState @ 0x1C0031B1C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_I @ 0x1C00140DC (WPP_RECORDER_SF_I.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0035CB0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0035F54 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_D0ExitSaveState(__int64 a1, char a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  unsigned int *v7; // rsi
  unsigned int *v8; // rbp
  __int16 Ulong; // ax
  ULONGLONG v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  ULONGLONG UnbiasedInterruptTime; // r14
  int v14; // eax
  int i; // esi
  __int16 v16; // ax
  ULONGLONG v17; // rax
  unsigned __int64 v18; // rdx
  ULONGLONG v19; // rax
  unsigned __int64 v20; // rdx
  ULONGLONG v21; // rax
  int v22; // r8d
  unsigned __int64 v23; // rdx
  int v25; // [rsp+20h] [rbp-48h]
  const char *v26; // [rsp+28h] [rbp-40h]
  int v27; // [rsp+30h] [rbp-38h]
  const char *v28; // [rsp+38h] [rbp-30h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = "Code Path Requires Passive Level";
      v27 = 4153;
      v26 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 124, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
  if ( (WPP_MAIN_CB.AlignmentRequirement & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v6 = *(_QWORD *)(a1 + 88);
  v7 = *(unsigned int **)(v6 + 32);
  v8 = v7 + 1;
  Ulong = XilRegister_ReadUlong(v6, v7 + 1);
  if ( (Ulong & 1) != 0 )
  {
    if ( (Ulong & 0x100) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v12 = 126;
      goto LABEL_14;
    }
    if ( (Ulong & 0x200) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v12 = 127;
      goto LABEL_14;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 128, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v14 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, v14 | 0x100);
    for ( i = 20; ; --i )
    {
      v16 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v8);
      if ( (v16 & 0x400) != 0 )
        break;
      if ( (v16 & 0x100) == 0 )
      {
        v19 = KeQueryUnbiasedInterruptTime();
        v10 = v19;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = (v19 - UnbiasedInterruptTime) / 0xA;
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v20, v11, 130, v25, (v19 - UnbiasedInterruptTime) / 0xA);
        }
        goto LABEL_36;
      }
      if ( !i )
      {
        v17 = KeQueryUnbiasedInterruptTime();
        v10 = v17;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = (v17 - UnbiasedInterruptTime) / 0x2710;
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v18, v11, 131, v25, (v17 - UnbiasedInterruptTime) / 0x2710);
        }
        goto LABEL_35;
      }
      Interval.QuadPart = -2000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v21 = KeQueryUnbiasedInterruptTime();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = (v21 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v23, v22, 129, v25, (v21 - UnbiasedInterruptTime) / 0x2710);
    }
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v8, 1024);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 125;
LABEL_14:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v12, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
  }
LABEL_35:
  v4 = -1073741630;
LABEL_36:
  if ( (WPP_MAIN_CB.AlignmentRequirement & 8) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE,
      v11,
      *(_QWORD *)(a1 + 8),
      v4,
      v26,
      v27,
      v28);
  return v4;
}
