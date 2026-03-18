/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x1C0015720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0015FAC (WPP_RECORDER_SF__guid_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x1C0034830 (McTemplateK0pjqq_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  int v20; // [rsp+80h] [rbp+8h]

  v20 = a1;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060428);
  *a5 = 0;
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CHAINED_MDLS, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 336) & 0x80u) != 0LL )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v16 = 185;
      goto LABEL_22;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v17 = 186;
    goto LABEL_26;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SECURE_TRANSFERS, 0x10uLL) == 16 )
  {
    if ( !*(_BYTE *)(v9 + 537) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v16 = 187;
      goto LABEL_22;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v17 = 188;
LABEL_26:
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v17, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    goto LABEL_13;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 189, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
    *a5 = 2;
    if ( a3 >= 2 )
    {
      if ( a4 )
      {
        v14 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 112LL);
        *a4 = v14;
        goto LABEL_14;
      }
      goto LABEL_52;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_57:
      v8 = -1073741789;
      goto LABEL_13;
    }
    v19 = 190;
    LOBYTE(v10) = 4;
LABEL_56:
    WPP_RECORDER_SF_d(*(_QWORD *)(v9 + 72), v10, 4, v19, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, a3);
    goto LABEL_57;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v17 = 191;
    goto LABEL_26;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v17 = 192;
    goto LABEL_26;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_TIME_SYNC, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v17 = 193;
    goto LABEL_26;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    v11 = 0;
    if ( (*(_QWORD *)(v9 + 336) & 0x100000000LL) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v16 = 195;
LABEL_22:
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v16, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
LABEL_23:
      v8 = -1073741637;
LABEL_13:
      LOBYTE(v14) = 0;
      goto LABEL_14;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v17 = 194;
    goto LABEL_26;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    *a5 = 4;
    if ( a3 < 4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      v19 = 199;
      goto LABEL_55;
    }
    if ( !a4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      v18 = 198;
LABEL_51:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v18, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
LABEL_52:
      v8 = -1073741811;
      goto LABEL_13;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 104LL);
    if ( (v11 & 0x10) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 196, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
      }
      v11 = *(_BYTE *)(v9 + 538) != 0 ? 32 : 4;
      *(_DWORD *)a4 = v11;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v16 = 197;
    goto LABEL_22;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, 0x10uLL) != 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(*(_QWORD *)(v9 + 72), v10, v12, v13);
    v8 = -1073741822;
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 200, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
  }
  *a5 = 4;
  if ( a3 < 4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_57;
    v19 = 202;
LABEL_55:
    LOBYTE(v10) = 2;
    goto LABEL_56;
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_52;
    v18 = 201;
    goto LABEL_51;
  }
  v11 = *(_DWORD *)(v9 + 572);
  if ( !v11 )
    goto LABEL_23;
  if ( !--v11 )
  {
    *(_DWORD *)a4 = 1;
    goto LABEL_13;
  }
  LOBYTE(v14) = 0;
  if ( v11 == 1 )
    *(_DWORD *)a4 = 2;
  else
    v8 = -1073741637;
LABEL_14:
  LOBYTE(v11) = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
    McTemplateK0pjqq_EtwWriteTransfer(v11, v10, v12, v20, (__int64)a2, v8, v14);
  return v8;
}
