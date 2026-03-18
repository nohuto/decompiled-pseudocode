/*
 * XREFs of ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D8A10
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     SetRITTimer @ 0x1C00C9BD0 (SetRITTimer.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z @ 0x1C01D8CBC (-TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D8F0C (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall TabletButtonHandler(struct DEVICEINFO *a1)
{
  ULONG ReportLength; // ebp
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  ULONG v4; // eax
  USHORT *v5; // rdi
  NTSTATUS Usages; // eax
  int v7; // ecx
  unsigned __int64 v8; // r9
  char *v9; // rax
  struct tagTABLET_BUTTON_ACTION *v10; // r9
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rdx
  ULONG UsageLength[4]; // [rsp+40h] [rbp-108h] BYREF
  _devicemodeW v15; // [rsp+50h] [rbp-F8h] BYREF

  ReportLength = *((_DWORD *)a1 + 66);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)a1 + 58) + 16LL);
  v4 = HidP_MaxUsageListLength(HidP_Input, 0, PreparsedData);
  UsageLength[0] = v4;
  if ( v4 )
  {
    v5 = (USHORT *)Win32AllocPool(2LL * v4, 1635087189LL);
    if ( v5 )
    {
      Usages = HidP_GetUsages(
                 HidP_Input,
                 0,
                 0,
                 v5,
                 UsageLength,
                 PreparsedData,
                 *(PCHAR *)(*((_QWORD *)a1 + 58) + 24LL),
                 ReportLength);
      if ( dword_1C03331FC != 10 )
      {
        if ( Usages >= 0 && (v13 = 0LL, UsageLength[0]) )
        {
          while ( v5[v13] - 1 != dword_1C03331FC )
          {
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= UsageLength[0] )
              goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          if ( gpTabBtnAction )
          {
            xxxTabletButtonExecuteAction(gpTabBtnAction, 0, 0LL);
            gpTabBtnAction = 0LL;
          }
          dword_1C03331FC = 10;
          if ( gtmridTabletButtonTimer )
          {
            FindTimer(0LL, gtmridTabletButtonTimer, 4u, 1, 0LL);
            gtmridTabletButtonTimer = 0LL;
          }
        }
        goto LABEL_34;
      }
      if ( Usages < 0 )
        goto LABEL_34;
      if ( !UsageLength[0] )
        goto LABEL_34;
      memset(&v15, 0, sizeof(v15));
      v7 = *v5;
      if ( (unsigned __int16)(v7 - 1) > 9u )
        goto LABEL_34;
      dword_1C03331FC = v7 - 1;
      if ( (int)TabletRetrieveDevMode(&v15) < 0 || v15.dmDisplayOrientation > 3 )
        goto LABEL_34;
      if ( v15.dmDisplayOrientation == 1 )
      {
        v9 = (char *)&unk_1C033BA30;
      }
      else
      {
        if ( v15.dmDisplayOrientation != 2 )
        {
          v8 = (unsigned __int64)(unsigned int)dword_1C03331FC << 7;
          if ( v15.dmDisplayOrientation == 3 )
            v9 = (char *)&unk_1C033BA70;
          else
            v9 = (char *)&TabButtonConfig;
          goto LABEL_17;
        }
        v9 = (char *)&unk_1C033BA50;
      }
      v8 = (unsigned __int64)(unsigned int)dword_1C03331FC << 7;
LABEL_17:
      v10 = (struct tagTABLET_BUTTON_ACTION *)&v9[v8];
      if ( (PVOID)grpdeskRitInput == grpdeskLogon )
        v10 = (struct tagTABLET_BUTTON_ACTION *)((char *)v10 + 16);
      if ( (unsigned int)(*(_DWORD *)v10 + 2147483636) <= 1 )
      {
        gpTabBtnAction = v10;
        v11 = 250;
        v12 = 0;
LABEL_25:
        gtmridTabletButtonTimer = SetRITTimer(gtmridTabletButtonTimer, v11, (int)xxxTabletButtonTimerCallback, v12);
        goto LABEL_34;
      }
      if ( *(_DWORD *)v10 != *((_DWORD *)v10 + 2) || *((_DWORD *)v10 + 1) != *((_DWORD *)v10 + 3) )
      {
        gpTabBtnAction = v10;
        v11 = 1000;
        v12 = 1;
        goto LABEL_25;
      }
      xxxTabletButtonExecuteAction(v10, 0, &v15);
LABEL_34:
      Win32FreePool(v5);
    }
  }
}
