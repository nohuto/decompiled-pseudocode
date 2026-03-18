/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x1C006DF8C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C006BCA4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C006C208 (DrvChangeDisplaySettings.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     DrvGetDeviceFromName @ 0x1C005EB10 (DrvGetDeviceFromName.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C006E094 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C006F1A0 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsPreValidate(
        PCUNICODE_STRING String1,
        wchar_t *a2,
        __int64 a3,
        int a4,
        int a5,
        wchar_t **a6,
        int *a7)
{
  int v7; // edi
  wchar_t *DeviceFromName; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  wchar_t *i; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v7 = 0;
  DeviceFromName = a2;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && (unsigned int)DrvIsPermanentSettingChangesDisabled() )
    {
      v19 = WdLogNewEntry5_WdTrace(v13, v12);
      WdLogEvent5_WdTrace(v19);
      return 4294967293LL;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      v20 = WdLogNewEntry5_WdTrace(String1, a2);
      WdLogEvent5_WdTrace(v20);
      return 0xFFFFFFFFLL;
    }
  }
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( DeviceFromName )
    {
LABEL_8:
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        if ( DeviceFromName )
        {
          v7 = (*((_DWORD *)DeviceFromName + 40) >> 23) & 1;
        }
        else
        {
          for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
          {
            if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
            {
              v7 = 1;
              break;
            }
          }
        }
      }
      if ( !a4
        || !DeviceFromName
        || *((_QWORD *)DeviceFromName + 17)
        || (*((_DWORD *)DeviceFromName + 40) & 0x6000008) != 0 )
      {
        *a6 = DeviceFromName;
        *a7 = v7;
        return 0LL;
      }
      v21 = WdLogNewEntry5_WdTrace(i, v16);
      *(_QWORD *)(v21 + 24) = 2LL;
      goto LABEL_25;
    }
    v21 = WdLogNewEntry5_WdTrace(v15, v14);
    *(_QWORD *)(v21 + 24) = 0LL;
  }
  else
  {
    if ( !a3 )
    {
      DeviceFromName = 0LL;
      goto LABEL_8;
    }
    if ( DeviceFromName )
      DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 322);
    if ( DeviceFromName )
      goto LABEL_8;
    v21 = WdLogNewEntry5_WdTrace(String1, a2);
    *(_QWORD *)(v21 + 24) = 1LL;
  }
LABEL_25:
  WdLogEvent5_WdTrace(v21);
  return 4294967291LL;
}
