/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x1C0167134
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C00AA0B4 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0158900 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01627C8 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0166B60 (RIMFindMonitorForDigitizer.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C01672D0 (RIMSetPointerDeviceInputSpace.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0012654 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     RIMEndAllActiveContacts @ 0x1C015F9A0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01622D4 (RIMSuppressAllActiveContacts.c)
 *     ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x1C0165FD8 (-BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBU.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0166484 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     rimSetDeviceDisplayConfig @ 0x1C016828C (rimSetDeviceDisplayConfig.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01AFF78 (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  struct RawInputManagerObject *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // r9
  struct INPUT_SPACE_REGION *v16[2]; // [rsp+20h] [rbp-28h] BYREF
  struct INPUT_SPACE *v17[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 60);
      v10 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 42);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10, v9, 0x200u);
      else
        RIMEndAllActiveContacts(v10, (__int64)a2, 0LL);
    }
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v17);
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v16);
    if ( InputConfig::GetPointerDeviceConfig(
           a1,
           a2,
           (struct CLockedInputSpace *)v17,
           (struct CLockedInputSpaceRegion *)v16) )
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedInputSpace *)v17, (struct CLockedInputSpaceRegion *)v16);
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
      *((_DWORD *)a2 + 39) = 0;
    }
    InputTraceLogging::Pointer::BindToInputSpace(a1, a2, v17[0], v16[0]);
    ExReleaseResourceLite(*(PERESOURCE *)v16[1]);
    KeLeaveCriticalRegion();
    ExReleaseResourceLite(*(PERESOURCE *)v17[1]);
    KeLeaveCriticalRegion();
  }
  if ( *((_DWORD *)a1 + 334) && a4 && *((_DWORD *)a1 + 338) != 4 && *(_DWORD *)a4 )
  {
    while ( 1 )
    {
      v15 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 200LL * v4);
      if ( v15[4] == *((_DWORD *)a1 + 467) && v15[5] == *((_DWORD *)a1 + 468) && v15[7] == *((_DWORD *)a1 + 470) )
        break;
      if ( ++v4 >= *(_DWORD *)a4 )
        return;
    }
    rimSetDeviceDisplayConfig(a1, a2, a3);
  }
}
