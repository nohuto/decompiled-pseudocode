/*
 * XREFs of Controller_D0EntryRestoreState @ 0x1C00317F4
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_I @ 0x1C00140DC (WPP_RECORDER_SF_I.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0035CB0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0035F54 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1, char a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  unsigned int *v6; // r14
  unsigned int *v7; // rsi
  __int16 Ulong; // ax
  ULONGLONG v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  int v12; // ebx
  ULONGLONG UnbiasedInterruptTime; // rbp
  int v14; // eax
  __int16 v15; // ax
  ULONGLONG v16; // rax
  unsigned __int64 v17; // rdx
  ULONGLONG v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // ebx
  ULONGLONG v21; // rax
  int v22; // r8d
  unsigned __int64 v23; // rdx
  int v25; // [rsp+20h] [rbp-48h]
  const char *v26; // [rsp+28h] [rbp-40h]
  int v27; // [rsp+30h] [rbp-38h]
  const char *v28; // [rsp+38h] [rbp-30h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = "Code Path Requires Passive Level";
      v27 = 3682;
      v26 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 108, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
  if ( (WPP_MAIN_CB.AlignmentRequirement & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(unsigned int **)(v5 + 32);
  v7 = v6 + 1;
  Ulong = XilRegister_ReadUlong(v5, v6 + 1);
  if ( (Ulong & 1) != 0 )
  {
    if ( (Ulong & 0x100) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v11 = 110;
      goto LABEL_14;
    }
    if ( (Ulong & 0x200) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v11 = 111;
      goto LABEL_14;
    }
    v12 = 20;
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL), 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 112, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v14 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, v14 | 0x200);
    while ( 1 )
    {
      v15 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
      if ( (v15 & 0x400) != 0 )
        break;
      if ( (v15 & 0x200) == 0 )
      {
        v18 = KeQueryUnbiasedInterruptTime();
        v9 = v18;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = (v18 - UnbiasedInterruptTime) / 0xA;
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v19, v10, 114, v25, (v18 - UnbiasedInterruptTime) / 0xA);
        }
        v20 = 0;
        goto LABEL_37;
      }
      if ( !v12 )
      {
        v16 = KeQueryUnbiasedInterruptTime();
        v9 = v16;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = (v16 - UnbiasedInterruptTime) / 0x2710;
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v17, v10, 115, v25, (v16 - UnbiasedInterruptTime) / 0x2710);
        }
        goto LABEL_36;
      }
      Interval.QuadPart = -2000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v12;
    }
    v21 = KeQueryUnbiasedInterruptTime();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = (v21 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v23, v22, 113, v25, (v21 - UnbiasedInterruptTime) / 0x2710);
    }
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, 1024);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 109;
LABEL_14:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v11, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
  }
LABEL_36:
  v20 = -1073741630;
LABEL_37:
  if ( (WPP_MAIN_CB.AlignmentRequirement & 8) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v9,
      &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE,
      v10,
      *(_QWORD *)(a1 + 8),
      v20,
      v26,
      v27,
      v28);
  if ( v20 < 0 )
  {
    ++*(_DWORD *)(a1 + 480);
    *(_BYTE *)(a1 + 472) = 1;
  }
  return (unsigned int)v20;
}
