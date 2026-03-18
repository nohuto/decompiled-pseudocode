/*
 * XREFs of Endpoint_Create @ 0x1C006B7E0
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C006B610 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0072A60 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C0007C74 (WPP_RECORDER_SF_ddqDdd.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C0009428 (WPP_RECORDER_SF_ddq.c)
 *     XilEndpoint_Create @ 0x1C00095C8 (XilEndpoint_Create.c)
 *     TR_GetWdfQueue @ 0x1C0009650 (TR_GetWdfQueue.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C0009660 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C0009744 (Etw_EndpointCreate.c)
 *     Controller_IsSecureDevice @ 0x1C0009764 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0038A24 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_SetType @ 0x1C006B790 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C006BF6C (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __m128i *v8; // r14
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
  bool v23; // cf
  unsigned int v24; // ebx
  __int64 v25; // rax
  struct _DEVICE_OBJECT *v26; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v28; // ebx
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  int v34; // r8d
  int v35; // r9d
  int v36; // ecx
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rax
  char v40; // al
  __int64 WdfQueue; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  char v45; // [rsp+30h] [rbp-81h]
  int v46; // [rsp+38h] [rbp-79h]
  char v47; // [rsp+40h] [rbp-71h]
  unsigned __int64 v48; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v49[2]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v50; // [rsp+80h] [rbp-31h]
  __int64 v51; // [rsp+90h] [rbp-21h]
  __int128 v52; // [rsp+98h] [rbp-19h] BYREF
  void (__fastcall *v53)(__int64); // [rsp+A8h] [rbp-9h]
  __int64 v54; // [rsp+B0h] [rbp-1h]
  __int128 v55; // [rsp+B8h] [rbp+7h]
  void *v56; // [rsp+C8h] [rbp+17h]
  __int64 v57; // [rsp+118h] [rbp+67h] BYREF

  v57 = a3;
  DWORD1(v52) = 0;
  v55 = 0LL;
  v48 = 0LL;
  v8 = (__m128i *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C0061428);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(a4 + 2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
      WdfDriverGlobals,
      a2,
      off_1C00612C0);
    WPP_RECORDER_SF_ddqDdd(
      v8[4].m128i_i64[1],
      v9 >> 7,
      (v9 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
      *(_BYTE *)(a4 + 3) & 3);
  }
  v56 = off_1C00611A8;
  *(_QWORD *)&v52 = 56LL;
  *((_QWORD *)&v52 + 1) = Endpoint_EvtEndpointCleanupCallback;
  v54 = 0x100000001LL;
  v53 = Endpoint_EvtDestroyCallback;
  v55 = 0LL;
  IsSecureDevice = Controller_IsSecureDevice((__int64)v8);
  v12 = v11;
  v13 = v11 + 1;
  if ( IsSecureDevice )
    v12 = v13;
  LODWORD(v54) = v12;
  ClearStallContext = qword_1C00627D0(UcxDriverGlobals, a2, &v57, &v52, &v48);
  if ( ClearStallContext >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(a4 + 2);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00612C0);
      v21 = v19 >> 7;
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_ddq(
        v8[4].m128i_i64[1],
        v21,
        13,
        16,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        *(_BYTE *)(v20 + 135),
        (v19 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
        v48);
    }
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v48,
            off_1C00611A8);
    KeInitializeEvent((PRKEVENT)(v22 + 40), NotificationEvent, 0);
    v51 = 0LL;
    v50 = 0LL;
    LODWORD(v50) = 0;
    DWORD2(v50) = 0;
    v49[1] = Endpoint_WdfEvtStateMachineTimer;
    BYTE4(v50) = 1;
    v49[0] = 40LL;
    v23 = (_mm_srli_si128(v8[21], 8).m128i_u32[0] & 0x40000) != 0LL;
    v53 = 0LL;
    v54 = 0x100000001LL;
    LOBYTE(v51) = v23;
    v56 = 0LL;
    v55 = v48;
    v52 = 0LL;
    LODWORD(v52) = 56;
    ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 2544))(
                          WdfDriverGlobals,
                          v49,
                          &v52,
                          v22 + 1296);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v24 = *(unsigned __int8 *)(a4 + 2);
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00612C0);
      v18 = 17;
      goto LABEL_14;
    }
    v26 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 248))(
                                     WdfDriverGlobals,
                                     v8->m128i_i64[0]);
    WorkItem = IoAllocateWorkItem(v26);
    *(_QWORD *)(v22 + 1272) = WorkItem;
    if ( !WorkItem )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = *(unsigned __int8 *)(a4 + 2);
        v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                a2,
                off_1C00612C0);
        v30 = (v28 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
        LOBYTE(v30) = 2;
        WPP_RECORDER_SF_dd(
          v8[4].m128i_i64[1],
          v30,
          13,
          18,
          (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
          *(_BYTE *)(v29 + 135),
          (v28 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F));
      }
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)(v22 + 1168) = 0;
    *(_DWORD *)(v22 + 1140) = 2000;
    *(_DWORD *)(v22 + 1264) = 2000;
    *(_QWORD *)(v22 + 1256) = &ESMStateTable;
    *(_QWORD *)(v22 + 1248) = v22;
    *(_BYTE *)(v22 + 1306) = Controller_IsSecureDevice((__int64)v8);
    if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) && (v8[51].m128i_i32[1] & 1) != 0 )
      *(_BYTE *)(v22 + 1306) = 1;
    *(_QWORD *)v22 = v8;
    *(_QWORD *)(v22 + 8) = a2;
    v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00612C0);
    v32 = a5;
    *(_QWORD *)(v22 + 16) = v31;
    *(_QWORD *)(v22 + 136) = 0LL;
    *(_QWORD *)(v22 + 264) = 0LL;
    *(_DWORD *)(v22 + 96) = *(_DWORD *)a4;
    *(_WORD *)(v22 + 100) = *(_WORD *)(a4 + 4);
    *(_BYTE *)(v22 + 102) = *(_BYTE *)(a4 + 6);
    if ( v32 )
    {
      *(_DWORD *)(v22 + 103) = *(_DWORD *)v32;
      *(_WORD *)(v22 + 107) = *(_WORD *)(v32 + 4);
    }
    if ( a6 )
      *(_QWORD *)(v22 + 109) = *a6;
    Endpoint_SetType(v22);
    v36 = 2 * (*(_BYTE *)(v22 + 98) & 0xF);
    if ( (unsigned int)(*(_DWORD *)(v22 + 120) - 1) > 2 )
      ++v36;
    *(_DWORD *)(v22 + 144) = v36;
    ClearStallContext = XilEndpoint_Create(v22, v33, v34, v35);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v24 = *(unsigned __int8 *)(a4 + 2);
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00612C0);
      v18 = 19;
LABEL_14:
      v17 = v24 >> 7;
      v47 = ClearStallContext;
      v46 = (v24 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
      v45 = *(_BYTE *)(v25 + 135);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(*(_QWORD *)(v22 + 16) + 20LL) == 3
      && (*(_BYTE *)(v22 + 99) & 3) == 2
      && (*(_BYTE *)(v22 + 106) & 0x1F) != 0 )
    {
      v37 = *(_QWORD *)v22;
      *(_BYTE *)(v22 + 37) = 1;
      if ( (*(_QWORD *)(v37 + 336) & 0x200000LL) != 0 )
      {
        ClearStallContext = Endpoint_CreateClearStallContext(v22);
        if ( ClearStallContext < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)ClearStallContext;
          v38 = *(_DWORD *)(v22 + 144);
          v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  a2,
                  off_1C00612C0);
          v18 = 20;
          goto LABEL_38;
        }
      }
      v40 = *(_BYTE *)(v22 + 37);
    }
    else
    {
      *(_BYTE *)(v22 + 37) = 0;
      v40 = 0;
    }
    ClearStallContext = TR_Create((_DWORD)v8, v22, v48, v40 != 0, v22 + 88);
    if ( ClearStallContext >= 0 )
    {
      WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v22 + 88));
      ((void (__fastcall *)(__int64, unsigned __int64, __int64))qword_1C00627F8)(UcxDriverGlobals, v48, WdfQueue);
      if ( *(_DWORD *)(v22 + 144) == 1 )
        *(_QWORD *)(*(_QWORD *)(v22 + 16) + 176LL) = v22;
      v42 = *(_QWORD *)(v22 + 16);
      *(_QWORD *)(v22 + 24) = v48;
      UsbDevice_AddEndpointToDeviceEndpointList(v42, v48, (_QWORD *)(v22 + 64));
      Etw_EndpointCreate(v43, (_QWORD *)v22);
      return (unsigned int)ClearStallContext;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v38 = *(_DWORD *)(v22 + 144);
    v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00612C0);
    v18 = 21;
LABEL_38:
    v47 = ClearStallContext;
    LOBYTE(v46) = v38;
    v45 = *(_BYTE *)(v39 + 135);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = *(unsigned __int8 *)(a4 + 2);
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00612C0);
    v18 = 15;
    v47 = ClearStallContext;
    v46 = (v15 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    v45 = *(_BYTE *)(v16 + 135);
LABEL_8:
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_ddd(
      v8[4].m128i_i64[1],
      v17,
      13,
      v18,
      (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
      v45,
      v46,
      v47);
  }
  return (unsigned int)ClearStallContext;
}
