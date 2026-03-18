/*
 * XREFs of Endpoint_Create @ 0x1C006A2E0
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C006A110 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0070BE0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C0007704 (WPP_RECORDER_SF_ddqDdd.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C0008A48 (WPP_RECORDER_SF_ddq.c)
 *     XilEndpoint_Create @ 0x1C0008BE8 (XilEndpoint_Create.c)
 *     TR_GetWdfQueue @ 0x1C0008C70 (TR_GetWdfQueue.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C0008C80 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C0008D64 (Etw_EndpointCreate.c)
 *     Controller_IsSecureDevice @ 0x1C0008D84 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0037544 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_SetType @ 0x1C006A290 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C006AA48 (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v8; // r14
  unsigned int v9; // ebx
  char IsSecureDevice; // al
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int ClearStallContext; // edi
  unsigned int v15; // ebx
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // r9d
  unsigned int v19; // ebx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rbx
  unsigned int v23; // ebx
  __int64 v24; // rax
  struct _DEVICE_OBJECT *v25; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v27; // ebx
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  int v35; // ecx
  __int64 v36; // rax
  int v37; // ebx
  __int64 v38; // rax
  char v39; // al
  __int64 WdfQueue; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  char v44; // [rsp+30h] [rbp-81h]
  int v45; // [rsp+38h] [rbp-79h]
  char v46; // [rsp+40h] [rbp-71h]
  unsigned __int64 v47; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v49; // [rsp+80h] [rbp-31h]
  __int64 v50; // [rsp+90h] [rbp-21h]
  __int128 v51; // [rsp+98h] [rbp-19h] BYREF
  void (__fastcall *v52)(__int64); // [rsp+A8h] [rbp-9h]
  __int64 v53; // [rsp+B0h] [rbp-1h]
  __int128 v54; // [rsp+B8h] [rbp+7h]
  void *v55; // [rsp+C8h] [rbp+17h]
  __int64 v56; // [rsp+118h] [rbp+67h] BYREF

  v56 = a3;
  DWORD1(v51) = 0;
  v54 = 0LL;
  v47 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060428);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(a4 + 2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
      WdfDriverGlobals,
      a2,
      off_1C00602C0);
    WPP_RECORDER_SF_ddqDdd(
      *(_QWORD *)(v8 + 72),
      v9 >> 7,
      (v9 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
      *(_BYTE *)(a4 + 3) & 3);
  }
  v55 = off_1C00601A8;
  *(_QWORD *)&v51 = 56LL;
  *((_QWORD *)&v51 + 1) = Endpoint_EvtEndpointCleanupCallback;
  v53 = 0x100000001LL;
  v52 = Endpoint_EvtDestroyCallback;
  v54 = 0LL;
  IsSecureDevice = Controller_IsSecureDevice(v8);
  v12 = v11;
  v13 = v11 + 1;
  if ( IsSecureDevice )
    v12 = v13;
  LODWORD(v53) = v12;
  ClearStallContext = qword_1C00616F0(UcxDriverGlobals, a2, &v56, &v51, &v47);
  if ( ClearStallContext >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(a4 + 2);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00602C0);
      v21 = v19 >> 7;
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v8 + 72),
        v21,
        13,
        15,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(v20 + 135),
        (v19 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
        v47);
    }
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v47,
            off_1C00601A8);
    KeInitializeEvent((PRKEVENT)(v22 + 40), NotificationEvent, 0);
    v50 = 0LL;
    v49 = 0LL;
    LODWORD(v49) = 0;
    DWORD2(v49) = 0;
    v48[1] = Endpoint_WdfEvtStateMachineTimer;
    v55 = 0LL;
    v52 = 0LL;
    BYTE4(v49) = 1;
    v54 = v47;
    v51 = 0LL;
    v53 = 0x100000001LL;
    v48[0] = 40LL;
    LODWORD(v51) = 56;
    ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 2544))(
                          WdfDriverGlobals,
                          v48,
                          &v51,
                          v22 + 1296);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v23 = *(unsigned __int8 *)(a4 + 2);
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00602C0);
      v18 = 16;
      goto LABEL_14;
    }
    v25 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(
                                     WdfDriverGlobals,
                                     *(_QWORD *)v8);
    WorkItem = IoAllocateWorkItem(v25);
    *(_QWORD *)(v22 + 1272) = WorkItem;
    if ( !WorkItem )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = *(unsigned __int8 *)(a4 + 2);
        v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                a2,
                off_1C00602C0);
        v29 = (v27 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
        LOBYTE(v29) = 2;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v8 + 72),
          v29,
          13,
          17,
          (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
          *(_BYTE *)(v28 + 135),
          (v27 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F));
      }
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)(v22 + 1168) = 0;
    *(_DWORD *)(v22 + 1140) = 2000;
    *(_DWORD *)(v22 + 1264) = 2000;
    *(_QWORD *)(v22 + 1256) = &ESMStateTable;
    *(_QWORD *)(v22 + 1248) = v22;
    *(_BYTE *)(v22 + 1306) = Controller_IsSecureDevice(v8);
    if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) && (*(_DWORD *)(v8 + 804) & 1) != 0 )
      *(_BYTE *)(v22 + 1306) = 1;
    *(_QWORD *)v22 = v8;
    *(_QWORD *)(v22 + 8) = a2;
    v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00602C0);
    v31 = a5;
    *(_QWORD *)(v22 + 16) = v30;
    *(_QWORD *)(v22 + 136) = 0LL;
    *(_QWORD *)(v22 + 264) = 0LL;
    *(_DWORD *)(v22 + 96) = *(_DWORD *)a4;
    *(_WORD *)(v22 + 100) = *(_WORD *)(a4 + 4);
    *(_BYTE *)(v22 + 102) = *(_BYTE *)(a4 + 6);
    if ( v31 )
    {
      *(_DWORD *)(v22 + 103) = *(_DWORD *)v31;
      *(_WORD *)(v22 + 107) = *(_WORD *)(v31 + 4);
    }
    if ( a6 )
      *(_QWORD *)(v22 + 109) = *a6;
    Endpoint_SetType(v22);
    v35 = 2 * (*(_BYTE *)(v22 + 98) & 0xF);
    if ( (unsigned int)(*(_DWORD *)(v22 + 120) - 1) > 2 )
      ++v35;
    *(_DWORD *)(v22 + 144) = v35;
    ClearStallContext = XilEndpoint_Create(v22, v32, v33, v34);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v23 = *(unsigned __int8 *)(a4 + 2);
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00602C0);
      v18 = 18;
LABEL_14:
      v17 = v23 >> 7;
      v46 = ClearStallContext;
      v45 = (v23 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
      v44 = *(_BYTE *)(v24 + 135);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(*(_QWORD *)(v22 + 16) + 20LL) == 3
      && (*(_BYTE *)(v22 + 99) & 3) == 2
      && (*(_BYTE *)(v22 + 106) & 0x1F) != 0 )
    {
      v36 = *(_QWORD *)v22;
      *(_BYTE *)(v22 + 37) = 1;
      if ( (*(_QWORD *)(v36 + 336) & 0x200000LL) != 0 )
      {
        ClearStallContext = Endpoint_CreateClearStallContext(v22);
        if ( ClearStallContext < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)ClearStallContext;
          v37 = *(_DWORD *)(v22 + 144);
          v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  a2,
                  off_1C00602C0);
          v18 = 19;
          goto LABEL_38;
        }
      }
      v39 = *(_BYTE *)(v22 + 37);
    }
    else
    {
      *(_BYTE *)(v22 + 37) = 0;
      v39 = 0;
    }
    ClearStallContext = TR_Create(v8, v22, v47, v39 != 0, v22 + 88);
    if ( ClearStallContext >= 0 )
    {
      WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v22 + 88));
      ((void (__fastcall *)(__int64, unsigned __int64, __int64))qword_1C0061718)(UcxDriverGlobals, v47, WdfQueue);
      if ( *(_DWORD *)(v22 + 144) == 1 )
        *(_QWORD *)(*(_QWORD *)(v22 + 16) + 176LL) = v22;
      v41 = *(_QWORD *)(v22 + 16);
      *(_QWORD *)(v22 + 24) = v47;
      UsbDevice_AddEndpointToDeviceEndpointList(v41, v47, (_QWORD *)(v22 + 64));
      Etw_EndpointCreate(v42, (_QWORD *)v22);
      return (unsigned int)ClearStallContext;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v37 = *(_DWORD *)(v22 + 144);
    v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00602C0);
    v18 = 20;
LABEL_38:
    v46 = ClearStallContext;
    LOBYTE(v45) = v37;
    v44 = *(_BYTE *)(v38 + 135);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = *(unsigned __int8 *)(a4 + 2);
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00602C0);
    v18 = 14;
    v46 = ClearStallContext;
    v45 = (v15 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    v44 = *(_BYTE *)(v16 + 135);
LABEL_8:
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v8 + 72),
      v17,
      13,
      v18,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      v44,
      v45,
      v46);
  }
  return (unsigned int)ClearStallContext;
}
