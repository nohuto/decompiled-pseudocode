/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x18001CA44
 * Callers:
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18001C338 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18006D6CC (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801523E0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180161CB0 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x180161D28 (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180161DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0pqztp_EventWriteTransfer @ 0x180183DB0 (McTemplateU0pqztp_EventWriteTransfer.c)
 *     McTemplateU0zqtq_EventWriteTransfer @ 0x180183E94 (McTemplateU0zqtq_EventWriteTransfer.c)
 *     McTemplateU0dz_EventWriteTransfer @ 0x180186D28 (McTemplateU0dz_EventWriteTransfer.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x1803CBFA8 (McTemplateU0zzz_EventWriteTransfer.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x1803CC0B0 (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1804232B0 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Show@CDropFeedback@@UEAAJXZ @ 0x180423470 (-Show@CDropFeedback@@UEAAJXZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x180424B9C (--1CDragVisual@@MEAA@XZ.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x180425520 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180426570 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x180426810 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1804281E4 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_Show@CDragVisual@@AEAAXXZ @ 0x18042839C (-_Show@CDragVisual@@AEAAXXZ.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x18042C074 (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x18042C100 (McTemplateU0qdddd_EventWriteTransfer.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180467AC0 (McTemplateU0sqq_EventWriteTransfer.c)
 *     McTemplateU0z_EventWriteTransfer @ 0x18046839C (McTemplateU0z_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EventWriteTransfer(*a1, a2, 0LL, 0LL, a4, UserData);
}
