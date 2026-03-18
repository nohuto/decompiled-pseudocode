/*
 * XREFs of ?TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z @ 0x147169
 * Callers:
 *     <none>
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?TabletRetrieveDevMode@@YGJPAU_devicemodeW@@@Z @ 0x147384 (-TabletRetrieveDevMode@@YGJPAU_devicemodeW@@@Z.c)
 *     ?xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z @ 0x147505 (-xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z.c)
 */

void __userpurge TabletButtonHandler(struct _devicemodeW *a1@<esi>, struct DEVICEINFO *a2)
{
  struct _HIDP_PREPARSED_DATA *v2; // ebx
  ULONG v3; // eax
  USHORT *v4; // esi
  NTSTATUS Usages; // eax
  int v6; // ecx
  char *v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // [esp-10h] [ebp-100h]
  int v11; // [esp-8h] [ebp-F8h]
  int v13; // [esp-4h] [ebp-F4h]
  struct _devicemodeW *v14; // [esp+0h] [ebp-F0h]
  ULONG ReportLength; // [esp+8h] [ebp-E8h]
  ULONG UsageLength; // [esp+Ch] [ebp-E4h] BYREF
  _DWORD v17[55]; // [esp+10h] [ebp-E0h] BYREF

  v2 = *(struct _HIDP_PREPARSED_DATA **)(*((_DWORD *)a2 + 69) + 8);
  ReportLength = *((_DWORD *)a2 + 39);
  v3 = HidP_MaxUsageListLength(HidP_Input, 0, v2);
  UsageLength = v3;
  if ( v3 )
  {
    v4 = (USHORT *)Win32AllocPool(2 * v3, 1635087189);
    if ( v4 )
    {
      Usages = HidP_GetUsages(
                 HidP_Input,
                 0,
                 0,
                 v4,
                 &UsageLength,
                 v2,
                 *(PCHAR *)(*((_DWORD *)a2 + 69) + 12),
                 ReportLength);
      if ( dword_26C164 != 10 )
      {
        if ( Usages >= 0 && (v9 = 0, UsageLength) )
        {
          while ( v4[v9] - 1 != dword_26C164 )
          {
            if ( ++v9 >= UsageLength )
              goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          if ( gpTabBtnAction )
          {
            xxxTabletButtonExecuteAction(0, (int)a1, v14);
            gpTabBtnAction = 0;
          }
          dword_26C164 = 10;
          if ( gtmridTabletButtonTimer )
          {
            FindTimer(0, gtmridTabletButtonTimer, 4u, 1, 0);
            gtmridTabletButtonTimer = 0;
          }
        }
        goto LABEL_34;
      }
      if ( Usages >= 0 )
      {
        if ( UsageLength )
        {
          memset(v17, 0, sizeof(v17));
          v6 = *v4;
          if ( (unsigned __int16)(v6 - 1) <= 9u )
          {
            dword_26C164 = v6 - 1;
            if ( TabletRetrieveDevMode(a1) >= 0 && v17[21] <= 3u )
            {
              switch ( v17[21] )
              {
                case 1:
                  v7 = (char *)&unk_275728 + 128 * dword_26C164;
                  break;
                case 2:
                  v7 = (char *)&unk_275748 + 128 * dword_26C164;
                  break;
                case 3:
                  v7 = (char *)&unk_275768 + 128 * dword_26C164;
                  break;
                default:
                  v7 = (char *)&TabButtonConfig + 128 * dword_26C164;
                  break;
              }
              if ( (PVOID)_grpdeskRitInput == grpdeskLogon )
                v7 += 16;
              v8 = *(_DWORD *)v7;
              if ( *(_DWORD *)v7 == -2147483636 || v8 == -2147483635 )
              {
                v11 = 0;
                v10 = 250;
              }
              else
              {
                if ( v8 == *((_DWORD *)v7 + 2) && *((_DWORD *)v7 + 1) == *((_DWORD *)v7 + 3) )
                {
                  xxxTabletButtonExecuteAction((struct tagTABLET_BUTTON_ACTION *)v17, v13, v14);
                  goto LABEL_34;
                }
                v11 = 1;
                v10 = 1000;
              }
              gpTabBtnAction = (struct tagTABLET_BUTTON_ACTION *)v7;
              gtmridTabletButtonTimer = SetRITTimer(
                                          (char *)gtmridTabletButtonTimer,
                                          v10,
                                          (int)xxxTabletButtonTimerCallback,
                                          v11);
            }
          }
        }
      }
LABEL_34:
      Win32FreePool(v4);
    }
  }
}
