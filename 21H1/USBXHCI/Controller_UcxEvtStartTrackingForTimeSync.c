/*
 * XREFs of Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0033870
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Release @ 0x1C0006998 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0006DD0 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0012E40 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C001825C (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ptqqp_EtwWriteTransfer @ 0x1C0034C8C (McTemplateK0ptqqp_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_II @ 0x1C0034D38 (WPP_RECORDER_SF_II.c)
 *     Interrupter_QueryBusEdgeInformation @ 0x1C003B580 (Interrupter_QueryBusEdgeInformation.c)
 */

PDEVICE_OBJECT __fastcall Controller_UcxEvtStartTrackingForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 v7; // r13
  char v8; // r12
  int v9; // edx
  __int64 v10; // rsi
  int v11; // r8d
  _BYTE *v12; // rdi
  int v13; // ebx
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  int v16; // edx
  PDEVICE_OBJECT result; // rax
  unsigned __int64 v18; // r8
  int v19; // edx
  int v20; // edx
  int v21; // r9d
  __int64 v22; // r14
  int v23; // edx
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rcx
  unsigned int *v28; // rbx
  int Ulong; // eax
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // r8d
  int v35; // r9d
  __int64 *v36; // rcx
  __int64 v37; // rdx
  int v38; // edx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v42; // [rsp+50h] [rbp-29h] BYREF
  __int64 v43; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v44[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v45; // [rsp+80h] [rbp+7h]
  void *v46; // [rsp+90h] [rbp+17h]
  char v48; // [rsp+F8h] [rbp+7Fh] BYREF

  v46 = 0LL;
  v48 = 0;
  v43 = 0LL;
  v7 = 1;
  v42 = 0LL;
  v41 = 0LL;
  memset(v44, 0, sizeof(v44));
  v45 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2240))(WdfDriverGlobals);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C0060428);
  v12 = (_BYTE *)(v10 + 592);
  if ( a4 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v10 + 72), v9, v11, 280);
    v13 = -1073741811;
    goto LABEL_5;
  }
  v18 = a4;
  v14 = a2;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 *, _QWORD))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          v18,
          &v43,
          0LL);
  if ( v13 < 0 )
    goto LABEL_6;
  if ( *(_QWORD *)v43 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), v19, 4, 281, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
LABEL_23:
    v13 = -1073741811;
    goto LABEL_6;
  }
  v7 = *(_BYTE *)(v43 + 8);
  if ( a3 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v10 + 72), v19, v11, 282);
    goto LABEL_23;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v42,
          0LL);
  if ( v13 < 0 )
    goto LABEL_6;
  if ( v8 == 1 )
  {
    v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v41,
            off_1C00603B0);
    if ( *(_BYTE *)(v22 + 40) )
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_i(
          *(_QWORD *)(v10 + 72),
          v20,
          4,
          283,
          (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
          v41);
      }
      goto LABEL_5;
    }
  }
  else
  {
    *(_QWORD *)((char *)&v44[1] + 4) = 0x100000000LL;
    *((_QWORD *)&v45 + 1) = 0LL;
    HIDWORD(v44[1]) = 1;
    v46 = off_1C00603B0;
    *(_OWORD *)((char *)v44 + 4) = 0LL;
    LODWORD(v44[0]) = 56;
    *(_QWORD *)&v45 = *(_QWORD *)(v10 + 616);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _OWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
            WdfDriverGlobals,
            v44,
            &v41);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v10 + 72),
          v23,
          4,
          284,
          (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
          v13);
      }
      goto LABEL_6;
    }
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v41,
            off_1C00603B0);
    *(_BYTE *)(v22 + 52) = 0;
    *(_QWORD *)(v22 + 16) = v41;
  }
  if ( *(_DWORD *)(v10 + 392) != 1 )
  {
    v13 = -1073741436;
LABEL_5:
    v14 = a2;
LABEL_6:
    v15 = 0LL;
    goto LABEL_7;
  }
  DynamicLock_Acquire(*(_QWORD *)(v10 + 600), v20, v11, v21);
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 616)) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), _BYTE *))(WdfFunctions_01023 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(v10 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      v12);
    v27 = *(_QWORD *)(v10 + 88);
    v28 = *(unsigned int **)(v27 + 32);
    Ulong = XilRegister_ReadUlong(v27, v28);
    XilRegister_WriteUlong(*(_QWORD *)(v10 + 88), v28, Ulong | 0x400);
    *v12 = 1;
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 600), v24, v25, v26);
  Interrupter_QueryBusEdgeInformation(*(_QWORD *)(v10 + 128), (_DWORD)v12, (unsigned int)&v48, 0, 0LL, 0LL, 0LL);
  DynamicLock_Acquire(*(_QWORD *)(v10 + 600), v30, v31, v32);
  if ( !v48 )
  {
    if ( !v7 )
    {
      v33 = a2;
      *(_QWORD *)(v22 + 24) = a2;
      v36 = *(__int64 **)(v10 + 632);
      if ( *v36 != v10 + 624 )
        __fastfail(3u);
      *(_QWORD *)v22 = v10 + 624;
      *(_QWORD *)(v22 + 8) = v36;
      *v36 = v22;
      *(_QWORD *)(v10 + 632) = v22;
    }
    if ( !*(_BYTE *)(v10 + 648) )
    {
      v37 = *(_QWORD *)(v10 + 640);
      *(_BYTE *)(v10 + 648) = 1;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v37);
    }
    if ( !v7 )
    {
      v13 = 259;
      *v42 = v41;
LABEL_49:
      DynamicLock_Release(*(_QWORD *)(v10 + 600), v33, v34, v35);
      goto LABEL_5;
    }
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 600), v33, v34, v35);
  DynamicLock_Acquire(*(_QWORD *)(v10 + 600), v38, v39, v40);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 120))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 616),
          v41);
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v33) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v10 + 72),
        v33,
        4,
        285,
        (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
        v13);
    }
    goto LABEL_49;
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 600), v33, v34, v35);
  *(_BYTE *)(v22 + 40) = 1;
  v15 = a3;
  v13 = 0;
  v14 = a2;
  *v42 = v41;
LABEL_7:
  v16 = v41;
  ++*(_DWORD *)(v10 + 744);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0ptqqp_EtwWriteTransfer(v7, v16, v11, *(_QWORD *)(v10 + 8), v7, v8, v13, v16);
  result = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v16) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                                 *(_QWORD *)(v10 + 72),
                                 v16,
                                 4,
                                 286,
                                 (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
                                 v13,
                                 v41,
                                 v8);
    }
  }
  if ( v13 < 0 && !v8 && v41 )
    result = (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  if ( v13 != 259 )
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
                             WdfDriverGlobals,
                             v14,
                             (unsigned int)v13,
                             v15);
  return result;
}
