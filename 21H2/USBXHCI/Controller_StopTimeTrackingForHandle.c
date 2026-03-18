/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x1C0032F20
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x1C00101E0 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034840 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001665C (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x1C0032630 (Controller_IsHandlePresentInCollectionLocked.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x1C0035430 (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_StopTimeTrackingForHandle(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  char v6; // si
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned int *v10; // rbx
  int Ulong; // eax
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d

  v3 = a1 + 608;
  v6 = 0;
  v8 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 616));
  if ( Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(v3 + 24), a2) )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           a2,
           off_1C00613B0);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 128))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 24),
      a2);
    *(_BYTE *)(v8 + 48) = 0;
    if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
            WdfDriverGlobals,
            *(_QWORD *)(v3 + 24)) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
        WdfDriverGlobals,
        **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
        Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
        v3);
      v9 = *(_QWORD *)(a1 + 88);
      v10 = *(unsigned int **)(v9 + 32);
      Ulong = XilRegister_ReadUlong(v9, v10);
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v10, Ulong & 0xFFFFFBFF);
      *(_BYTE *)v3 = 0;
    }
    v12 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a1 + 72),
        2u,
        4u,
        0x129u,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        a2,
        *(_QWORD *)(v3 + 24));
    v12 = -1073741811;
  }
  DynamicLock_Release(*(_QWORD *)(v3 + 8));
  if ( v8 )
  {
    v6 = *(_BYTE *)(v8 + 60);
    v14 = *(_DWORD *)(v8 + 52);
    v15 = *(_DWORD *)(v8 + 56);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  ++*(_DWORD *)(a1 + 764);
  *(_DWORD *)(a1 + 768) += v14;
  *(_DWORD *)(a1 + 772) += v15;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0pptqqqq_EtwWriteTransfer(v6, v13, v14, *(_QWORD *)(a1 + 8), a2, a3, v6, v12, v14, v15);
  return v12;
}
