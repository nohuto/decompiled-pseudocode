/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A7410
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0061710 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0197BB4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A0B60 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C01A0D28 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A3F04 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C01A6804 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x1C01CA118 (ApiSetEditionRimDeviceReadNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, void **a2, __int64 a3, __int64 a4, void *a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  void **v9; // r13
  int v10; // r14d
  unsigned int IsInjectionDeviceFromKernelHandle; // r15d
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DEVICEINFO *v16; // rbx
  CHidInput *v17; // rcx
  unsigned int v18; // r8d
  __int64 *v19; // rdx
  CTouchProcessor *v20; // rcx
  unsigned __int64 v21; // r10
  __int64 v22; // rax
  CPTPProcessor *v23; // rcx
  int v24; // eax

  v5 = a4;
  v6 = a3;
  v9 = a2;
  v10 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
  {
    if ( a2[4] != a5 && a5 != (void *)-1LL )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    IsInjectionDeviceFromKernelHandle = *((_DWORD *)a2 + 20);
  }
  else
  {
    v9 = 0LL;
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5, a3, a4);
  }
  DeviceInfo = CBaseInput::FindDeviceInfo(this, (char *)a5, IsInjectionDeviceFromKernelHandle, a4);
  v16 = DeviceInfo;
  if ( DeviceInfo )
  {
    v17 = (CHidInput *)*((unsigned int *)DeviceInfo + 50);
    if ( ((unsigned __int8)v17 & 0x40) == 0 )
    {
      v18 = 4;
      switch ( v6 )
      {
        case 4u:
          v18 = 13;
          break;
        case 0x10u:
          v18 = 11;
          break;
        case 8u:
          v18 = 17;
          break;
      }
      CInputGlobals::UpdateInputGlobals(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        v18,
        0LL,
        0,
        IsInjectionDeviceFromKernelHandle != 0 ? 8 : 0);
    }
    if ( *((_QWORD *)v16 + 60) )
    {
      if ( !v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v13, v14, v15);
      if ( (*((_DWORD *)v16 + 50) & 0x80u) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v13, v14, v15);
      if ( !CHidInput::IsTouchpadDevice(v17, v16) || isChildPartition((__int64)v20, (__int64)v19) )
      {
        CTouchProcessor::ProcessInput(v20, v19, (struct RIMCOMPLETEFRAME *)a2);
      }
      else
      {
        v22 = *((_QWORD *)v16 + 60);
        if ( v22 )
          v23 = *(CPTPProcessor **)(v22 + 1000);
        else
          v23 = 0LL;
        if ( v23 )
          CPTPProcessor::ProcessInput(
            v23,
            v21,
            (struct RIMCOMPLETEFRAME *)a2,
            -__CFSHR__(*((_DWORD *)v16 + 46), 14),
            -__CFSHR__(*(_DWORD *)(v22 + 312), 5),
            *((_DWORD *)v9 + 21));
      }
    }
    else
    {
      v24 = *((_DWORD *)v16 + 50);
      if ( (v24 & 0x100) != 0 || (v24 & 0x200) != 0 )
        ApiSetEditionRimDeviceReadNotification(a2, v6, v5, a5);
    }
  }
  return 0LL;
}
