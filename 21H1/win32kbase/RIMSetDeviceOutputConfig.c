/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x1C016D484
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C00A37A8 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C015EC50 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C016CEB0 (RIMFindMonitorForDigitizer.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C016D620 (RIMSetPointerDeviceInputSpace.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0063F80 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     RIMEndAllActiveContacts @ 0x1C0165CF0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C0168624 (RIMSuppressAllActiveContacts.c)
 *     ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x1C016C328 (-BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBU.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C016C7D4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     rimSetDeviceDisplayConfig @ 0x1C016E5DC (rimSetDeviceDisplayConfig.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01B5CD8 (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rcx
  _DWORD *v12; // r9
  struct INPUT_SPACE_REGION *v13[2]; // [rsp+20h] [rbp-28h] BYREF
  struct INPUT_SPACE *v14[3]; // [rsp+30h] [rbp-18h] BYREF

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
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v14);
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v13);
    if ( InputConfig::GetPointerDeviceConfig(
           a1,
           a2,
           (struct CLockedInputSpace *)v14,
           (struct CLockedInputSpaceRegion *)v13) )
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedInputSpace *)v14, (struct CLockedInputSpaceRegion *)v13);
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      *((_DWORD *)a2 + 39) = 0;
    }
    InputTraceLogging::Pointer::BindToInputSpace(a1, a2, v14[0], v13[0]);
    ExReleaseResourceLite(*(PERESOURCE *)v13[1]);
    KeLeaveCriticalRegion();
    ExReleaseResourceLite(*(PERESOURCE *)v14[1]);
    KeLeaveCriticalRegion();
  }
  if ( *((_DWORD *)a1 + 334) && a4 && *((_DWORD *)a1 + 338) != 4 && *(_DWORD *)a4 )
  {
    while ( 1 )
    {
      v12 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 200LL * v4);
      if ( v12[4] == *((_DWORD *)a1 + 467) && v12[5] == *((_DWORD *)a1 + 468) && v12[7] == *((_DWORD *)a1 + 470) )
        break;
      if ( ++v4 >= *(_DWORD *)a4 )
        return;
    }
    rimSetDeviceDisplayConfig(a1, a2, a3);
  }
}
