/*
 * XREFs of Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C001066C (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C00109E8 (Controller_Start.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011170 (RootHub_DetectAndAcknowledgePortResume.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00135F0 (WPP_RECORDER_SF_qd.c)
 *     Etw_ControllerRundown @ 0x1C0013888 (Etw_ControllerRundown.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0013B34 (Command_D0EntryPostInterruptsEnabled.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0014518 (WPP_RECORDER_SF_qdd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C0034AE8 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0034B7C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  char v5; // al
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  char v9; // r14
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // edi
  __int64 v15; // rbp
  unsigned int i; // edi
  int v17; // r9d
  int v19; // r9d

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00603D8)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v9 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      *(unsigned __int8 *)(v4 + 468),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 468));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qdd(
      *(_QWORD *)(v4 + 72),
      v6,
      4,
      74,
      (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
      a1,
      a2,
      *(_DWORD *)(v4 + 420));
  }
  if ( *(_DWORD *)(v4 + 464) && *(_QWORD *)(v4 + 776) )
    SleepstudyHelper_ComponentInactive();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v4 + 72),
      v6,
      4,
      121,
      (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
      v4,
      a2);
  }
  v10 = Controller_Start(v4, v6, v7, v8);
  v14 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v19 = 75;
    goto LABEL_21;
  }
  v15 = *(_QWORD *)(v4 + 152);
  for ( i = 1; i <= *(_DWORD *)(v15 + 16); ++i )
    RootHub_DetectAndAcknowledgePortResume((_QWORD *)v15, i, 1);
  v10 = Command_D0EntryPostInterruptsEnabled(*(_QWORD *)(v4 + 144), a2);
  v14 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v19 = 77;
LABEL_21:
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), v11, 4, v19, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, v10);
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(v4 + 336) & 0x10) != 0 )
  {
    v14 = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), v11, 4, 78, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
  }
  else
  {
    Wmi_CreateControllerCapabilities(*(__int64 **)(v4 + 160), v11, v13, v17);
  }
LABEL_16:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v12,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      v13,
      *(_QWORD *)(v4 + 8),
      a2,
      v9,
      v14);
  Etw_ControllerRundown(0LL, v4);
  return v14;
}
