/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x1C0033BA0
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x1C0032290 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0035390 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0016398 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x1C0035E90 (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_StopTimeTrackingForHandle(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r14
  char v5; // r13
  char v7; // si
  __int64 v9; // rbp
  __int64 v10; // r12
  unsigned int i; // ebx
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  unsigned int *v16; // rbx
  int Ulong; // eax
  unsigned int v18; // ebx
  int v19; // edx
  int v20; // r8d
  int v21; // r9d

  v4 = a1 + 608;
  v5 = a3;
  v7 = 0;
  v9 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 616), a2, a3, a4);
  v10 = *(_QWORD *)(v4 + 24);
  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 112))(
              WdfDriverGlobals,
              v10);
        ++i )
  {
    if ( (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 144))(
           WdfDriverGlobals,
           v10,
           i) == a2 )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a2,
             off_1C00613B0);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 128))(
        WdfDriverGlobals,
        *(_QWORD *)(v4 + 24),
        a2);
      *(_BYTE *)(v9 + 40) = 0;
      if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
              WdfDriverGlobals,
              *(_QWORD *)(v4 + 24)) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
          WdfDriverGlobals,
          **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
          Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
          v4);
        v15 = *(_QWORD *)(a1 + 88);
        v16 = *(unsigned int **)(v15 + 32);
        Ulong = XilRegister_ReadUlong(v15, v16);
        XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v16, Ulong & 0xFFFFFBFF);
        *(_BYTE *)v4 = 0;
      }
      v18 = 0;
      goto LABEL_11;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(a1 + 72),
      v12,
      4,
      293,
      (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
      a2,
      *(_QWORD *)(v4 + 24));
  }
  v18 = -1073741811;
LABEL_11:
  DynamicLock_Release(*(_QWORD *)(v4 + 8), v12, v13, v14);
  if ( v9 )
  {
    v7 = *(_BYTE *)(v9 + 52);
    v20 = *(_DWORD *)(v9 + 44);
    v21 = *(_DWORD *)(v9 + 48);
  }
  else
  {
    v20 = 0;
    v21 = 0;
  }
  ++*(_DWORD *)(a1 + 764);
  *(_DWORD *)(a1 + 768) += v20;
  *(_DWORD *)(a1 + 772) += v21;
  if ( (WPP_MAIN_CB.AlignmentRequirement & 0x1000) != 0 )
    McTemplateK0pptqqqq_EtwWriteTransfer(v7, v19, v20, *(_QWORD *)(a1 + 8), a2, v5, v7, v18, v20, v21);
  return v18;
}
