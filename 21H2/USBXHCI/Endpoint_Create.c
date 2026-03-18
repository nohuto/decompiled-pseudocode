/*
 * XREFs of Endpoint_Create @ 0x1C006B6C8
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C006B450 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0071FA0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C0001D08 (WPP_RECORDER_SF_ddqDdd.c)
 *     XilEndpoint_Create @ 0x1C0001DEC (XilEndpoint_Create.c)
 *     TR_GetWdfQueue @ 0x1C0001E60 (TR_GetWdfQueue.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C0001E70 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C0001F54 (Etw_EndpointCreate.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00059E8 (WPP_RECORDER_SF_ddq.c)
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0038344 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_SetType @ 0x1C006B678 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C006BCD8 (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __m128i *v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  char IsSecureDevice; // al
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int ClearStallContext; // edi
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  bool v19; // cf
  struct _DEVICE_OBJECT *v20; // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r9d
  char v28; // al
  int v29; // eax
  char v30; // al
  __int64 WdfQueue; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rax
  unsigned __int16 v37; // r9
  unsigned int v38; // ebx
  __int64 v39; // rax
  unsigned int v40; // ebx
  __int64 v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // [rsp+28h] [rbp-89h]
  __int64 v46; // [rsp+30h] [rbp-81h]
  __int64 v47; // [rsp+38h] [rbp-79h]
  __int64 v48; // [rsp+40h] [rbp-71h]
  __int64 v49; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v50[2]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v51; // [rsp+80h] [rbp-31h]
  __int64 v52; // [rsp+90h] [rbp-21h]
  __int128 v53; // [rsp+98h] [rbp-19h] BYREF
  void (__fastcall *v54)(__int64); // [rsp+A8h] [rbp-9h]
  __int64 v55; // [rsp+B0h] [rbp-1h]
  __int128 v56; // [rsp+B8h] [rbp+7h]
  void *v57; // [rsp+C8h] [rbp+17h]
  __int64 v58; // [rsp+118h] [rbp+67h] BYREF

  v58 = a3;
  v49 = 0LL;
  DWORD1(v53) = 0;
  HIDWORD(v50[0]) = 0;
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
    HIDWORD(v48) = HIDWORD(a4);
    WPP_RECORDER_SF_ddqDdd(
      v8[4].m128i_i64[1],
      v10,
      (v9 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
      *(_BYTE *)(a4 + 3) & 3,
      v45);
  }
  v57 = off_1C00611A8;
  *(_QWORD *)&v53 = 56LL;
  *((_QWORD *)&v53 + 1) = Endpoint_EvtEndpointCleanupCallback;
  v54 = Endpoint_EvtDestroyCallback;
  v56 = 0LL;
  v55 = 0x100000001LL;
  IsSecureDevice = Controller_IsSecureDevice((__int64)v8);
  v13 = v12;
  v14 = v12 + 1;
  if ( IsSecureDevice )
    v13 = v14;
  LODWORD(v55) = v13;
  ClearStallContext = qword_1C00627F0(UcxDriverGlobals, a2, &v58, &v53, &v49);
  if ( ClearStallContext < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v35 = *(unsigned __int8 *)(a4 + 2);
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00612C0);
    v37 = 15;
    LODWORD(v48) = ClearStallContext;
    LODWORD(v47) = (v35 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v46) = *(unsigned __int8 *)(v36 + 135);
LABEL_31:
    WPP_RECORDER_SF_ddd(
      v8[4].m128i_i64[1],
      2u,
      0xDu,
      v37,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      v46,
      v47,
      v48);
    return (unsigned int)ClearStallContext;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int8 *)(a4 + 2);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00612C0);
    WPP_RECORDER_SF_ddq(
      v8[4].m128i_i64[1],
      4u,
      0xDu,
      0x10u,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(unsigned __int8 *)(v17 + 135),
      (v16 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
      v49);
  }
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v49,
          off_1C00611A8);
  KeInitializeEvent((PRKEVENT)(v18 + 40), NotificationEvent, 0);
  v52 = 0LL;
  v51 = 0LL;
  LODWORD(v51) = 0;
  DWORD2(v51) = 0;
  v50[1] = Endpoint_WdfEvtStateMachineTimer;
  BYTE4(v51) = 1;
  v50[0] = 40LL;
  v19 = (_mm_srli_si128(v8[21], 8).m128i_u32[0] & 0x40000) != 0LL;
  v54 = 0LL;
  v55 = 0x100000001LL;
  LOBYTE(v52) = v19;
  v57 = 0LL;
  v56 = (unsigned __int64)v49;
  v53 = 0LL;
  LODWORD(v53) = 56;
  ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 2544))(
                        WdfDriverGlobals,
                        v50,
                        &v53,
                        v18 + 1296);
  if ( ClearStallContext < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v38 = *(unsigned __int8 *)(a4 + 2);
    v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00612C0);
    v37 = 17;
    goto LABEL_30;
  }
  v20 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 248))(
                                   WdfDriverGlobals,
                                   v8->m128i_i64[0]);
  WorkItem = IoAllocateWorkItem(v20);
  *(_QWORD *)(v18 + 1272) = WorkItem;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = *(unsigned __int8 *)(a4 + 2);
      v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00612C0);
      v40 >>= 7;
      v42 = v40 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
      LOBYTE(v42) = 2;
      WPP_RECORDER_SF_DD(
        v8[4].m128i_i64[1],
        v42,
        13,
        18,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(v41 + 135),
        v40 + 2 * (*(_BYTE *)(a4 + 2) & 0x7F));
    }
    return (unsigned int)-1073741670;
  }
  *(_DWORD *)(v18 + 1168) = 0;
  *(_DWORD *)(v18 + 1140) = 2000;
  *(_DWORD *)(v18 + 1264) = 2000;
  *(_QWORD *)(v18 + 1256) = &ESMStateTable;
  *(_QWORD *)(v18 + 1248) = v18;
  *(_BYTE *)(v18 + 1306) = Controller_IsSecureDevice((__int64)v8);
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) && (v8[51].m128i_i32[1] & 1) != 0 )
    *(_BYTE *)(v18 + 1306) = 1;
  *(_QWORD *)v18 = v8;
  *(_QWORD *)(v18 + 8) = a2;
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a2,
          off_1C00612C0);
  v23 = a5;
  *(_QWORD *)(v18 + 16) = v22;
  *(_QWORD *)(v18 + 136) = 0LL;
  *(_QWORD *)(v18 + 264) = 0LL;
  *(_DWORD *)(v18 + 96) = *(_DWORD *)a4;
  *(_WORD *)(v18 + 100) = *(_WORD *)(a4 + 4);
  *(_BYTE *)(v18 + 102) = *(_BYTE *)(a4 + 6);
  if ( v23 )
  {
    *(_DWORD *)(v18 + 103) = *(_DWORD *)v23;
    *(_WORD *)(v18 + 107) = *(_WORD *)(v23 + 4);
  }
  if ( a6 )
    *(_QWORD *)(v18 + 109) = *a6;
  Endpoint_SetType(v18);
  v28 = *(_BYTE *)(v18 + 98);
  if ( (unsigned int)(*(_DWORD *)(v18 + 120) - 1) > 2 )
    v29 = 2 * (v28 & 0xF) + 1;
  else
    v29 = 2 * (v28 & 0xF);
  *(_DWORD *)(v18 + 144) = v29;
  ClearStallContext = XilEndpoint_Create(v25, v24, v26, v27);
  if ( ClearStallContext < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v38 = *(unsigned __int8 *)(a4 + 2);
    v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00612C0);
    v37 = 19;
LABEL_30:
    LODWORD(v48) = ClearStallContext;
    LODWORD(v47) = (v38 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v46) = *(unsigned __int8 *)(v39 + 135);
    goto LABEL_31;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 16) + 20LL) == 3
    && (*(_BYTE *)(v18 + 99) & 3) == 2
    && (*(_BYTE *)(v18 + 106) & 0x1F) != 0 )
  {
    v43 = *(_QWORD *)v18;
    *(_BYTE *)(v18 + 37) = 1;
    if ( (*(_QWORD *)(v43 + 336) & 0x200000LL) != 0 )
    {
      ClearStallContext = Endpoint_CreateClearStallContext(v18);
      if ( ClearStallContext < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)ClearStallContext;
        v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                a2,
                off_1C00612C0);
        v37 = 20;
        goto LABEL_45;
      }
    }
    v30 = *(_BYTE *)(v18 + 37);
  }
  else
  {
    *(_BYTE *)(v18 + 37) = 0;
    v30 = 0;
  }
  ClearStallContext = TR_Create((_DWORD)v8, v18, v49, v30 != 0, v18 + 88);
  if ( ClearStallContext < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00612C0);
    v37 = 21;
LABEL_45:
    LODWORD(v48) = ClearStallContext;
    LODWORD(v47) = *(_DWORD *)(v18 + 144);
    LODWORD(v46) = *(unsigned __int8 *)(v44 + 135);
    goto LABEL_31;
  }
  WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v18 + 88));
  ((void (__fastcall *)(__int64, __int64, __int64))qword_1C0062818)(UcxDriverGlobals, v49, WdfQueue);
  if ( *(_DWORD *)(v18 + 144) == 1 )
    *(_QWORD *)(*(_QWORD *)(v18 + 16) + 176LL) = v18;
  v32 = *(_QWORD *)(v18 + 16);
  *(_QWORD *)(v18 + 24) = v49;
  UsbDevice_AddEndpointToDeviceEndpointList(v32, v49, (_QWORD *)(v18 + 64));
  Etw_EndpointCreate(v33, (_QWORD *)v18);
  return (unsigned int)ClearStallContext;
}
