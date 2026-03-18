/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AD170
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C005AF90 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C019D8A4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A68C0 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C01A6A88 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A9C64 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C01AC564 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x1C01D0098 (ApiSetEditionRimDeviceReadNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, void **a2, unsigned int a3, unsigned int a4, void *a5)
{
  void **v9; // r13
  int v10; // r14d
  int IsInjectionDeviceFromKernelHandle; // r15d
  struct DEVICEINFO *DeviceInfo; // rax
  struct DEVICEINFO *v13; // rbx
  CHidInput *v14; // rcx
  unsigned int v15; // r8d
  __int64 *v16; // rdx
  CTouchProcessor *v17; // rcx
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  CPTPProcessor *v20; // rcx
  int v21; // eax

  v9 = a2;
  v10 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
  {
    if ( a2[4] != a5 && a5 != (void *)-1LL )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    IsInjectionDeviceFromKernelHandle = *((_DWORD *)a2 + 20);
  }
  else
  {
    v9 = 0LL;
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5);
  }
  DeviceInfo = CBaseInput::FindDeviceInfo(this, (char *)a5, IsInjectionDeviceFromKernelHandle);
  v13 = DeviceInfo;
  if ( DeviceInfo )
  {
    v14 = (CHidInput *)*((unsigned int *)DeviceInfo + 50);
    if ( ((unsigned __int8)v14 & 0x40) == 0 )
    {
      v15 = 4;
      switch ( a3 )
      {
        case 4u:
          v15 = 13;
          break;
        case 0x10u:
          v15 = 11;
          break;
        case 8u:
          v15 = 17;
          break;
      }
      CInputGlobals::UpdateInputGlobals(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        v15,
        0LL,
        0,
        IsInjectionDeviceFromKernelHandle != 0 ? 8 : 0);
    }
    if ( *((_QWORD *)v13 + 60) )
    {
      if ( !v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
      if ( (*((_DWORD *)v13 + 50) & 0x80u) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
      if ( !CHidInput::IsTouchpadDevice(v14, v13) || isChildPartition((__int64)v17, (__int64)v16) )
      {
        CTouchProcessor::ProcessInput(v17, v16, (struct RIMCOMPLETEFRAME *)a2);
      }
      else
      {
        v19 = *((_QWORD *)v13 + 60);
        if ( v19 )
          v20 = *(CPTPProcessor **)(v19 + 1000);
        else
          v20 = 0LL;
        if ( v20 )
          CPTPProcessor::ProcessInput(
            v20,
            v18,
            (struct RIMCOMPLETEFRAME *)a2,
            (unsigned int)-__CFSHR__(*((_DWORD *)v13 + 46), 14),
            -__CFSHR__(*(_DWORD *)(v19 + 312), 5),
            *((_DWORD *)v9 + 21));
      }
    }
    else
    {
      v21 = *((_DWORD *)v13 + 50);
      if ( (v21 & 0x100) != 0 || (v21 & 0x200) != 0 )
        ApiSetEditionRimDeviceReadNotification(a2, a3, a4, a5);
    }
  }
  return 0LL;
}
