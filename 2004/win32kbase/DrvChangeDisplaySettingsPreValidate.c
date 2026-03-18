/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x1C00B13D0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00B1024 (DrvChangeDisplaySettings.c)
 * Callees:
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C00594C4 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     DrvGetDeviceFromName @ 0x1C00A5CD0 (DrvGetDeviceFromName.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C00B1328 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsPreValidate(
        PCUNICODE_STRING String1,
        wchar_t *DeviceFromName,
        __int64 a3,
        int a4,
        int a5,
        wchar_t **a6,
        int *a7)
{
  int v7; // edi
  wchar_t *i; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v7 = 0;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      v14 = WdLogNewEntry5_WdTrace();
      WdLogEvent5_WdTrace(v14);
      return 4294967293LL;
    }
    if ( DrvIsTemporarySettingChangeDisabled() )
    {
      v15 = WdLogNewEntry5_WdTrace();
      WdLogEvent5_WdTrace(v15);
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
      v16 = WdLogNewEntry5_WdTrace();
      *(_QWORD *)(v16 + 24) = 2LL;
      goto LABEL_25;
    }
    v16 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v16 + 24) = 0LL;
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
    v16 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v16 + 24) = 1LL;
  }
LABEL_25:
  WdLogEvent5_WdTrace(v16);
  return 4294967291LL;
}
