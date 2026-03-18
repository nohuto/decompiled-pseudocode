/*
 * XREFs of TR_Create @ 0x1C006BCD8
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C003ACD0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x1C006B6C8 (Endpoint_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     TR_AcquireSegment @ 0x1C0005AE0 (TR_AcquireSegment.c)
 *     Endpoint_IsProxyEndpoint @ 0x1C0005C10 (Endpoint_IsProxyEndpoint.c)
 *     TR_EnsureSegments @ 0x1C0008D50 (TR_EnsureSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     TR_CreateSecureObject @ 0x1C003F59C (TR_CreateSecureObject.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C00400A0 (WPP_RECORDER_SF_DDDd.c)
 *     XilUsbDevice_IsSecureUsbDevice @ 0x1C0045BF8 (XilUsbDevice_IsSecureUsbDevice.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006BBC4 (Counter_CreateTransferRingInstance.c)
 *     Bulk_GetConfiguration @ 0x1C007285C (Bulk_GetConfiguration.c)
 */

__int64 __fastcall TR_Create(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  char IsProxyEndpoint; // al
  int v9; // edx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ebx
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 (__fastcall **v16)(); // r12
  int v17; // eax
  __int64 (__fastcall *v18)(); // rax
  char v19; // al
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rdx
  int SecureObject; // edi
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // rbx
  __int128 v27; // xmm1
  char IsSecureUsbDevice; // al
  __int64 v29; // r8
  __int64 (__fastcall *v30)(); // r8
  __int64 (__fastcall *v31)(); // rax
  char IsSecureDevice; // al
  int v34; // ecx
  __int64 v35; // rax
  unsigned __int16 v36; // r9
  __int64 v37; // rax
  int v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+38h] [rbp-C8h]
  int v41; // [rsp+40h] [rbp-C0h]
  _BYTE v42[40]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+98h] [rbp-68h]
  void *v47; // [rsp+A8h] [rbp-58h]
  __int128 v48; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h] BYREF
  int v51; // [rsp+CCh] [rbp-34h]
  __int64 (__fastcall *v52)(); // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  _QWORD v54[18]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v55; // [rsp+188h] [rbp+88h] BYREF
  __int64 v56; // [rsp+190h] [rbp+90h]

  v56 = a3;
  v51 = 0;
  LODWORD(v49) = 0;
  DWORD1(v43) = 0;
  v48 = 0LL;
  v44 = 0LL;
  v55 = 0LL;
  memset(&v42[12], 0, 28);
  IsProxyEndpoint = Endpoint_IsProxyEndpoint(a2);
  v9 = -1;
  if ( IsProxyEndpoint )
  {
    v11 = 16776704;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 96);
    v11 = *(_DWORD *)(v10 + 16);
    v9 = *(_DWORD *)(v10 + 20);
  }
  *(_DWORD *)&v42[8] = v9;
  *(_DWORD *)&v42[4] = v11 - 4096;
  v12 = 3;
  v13 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v14 = *(_BYTE *)(a2 + 99) & 3;
  *(_DWORD *)v42 = v14;
  if ( v13 )
  {
    v12 = 1;
    v16 = ControlFunctionTable;
    v15 = 384;
    *(_DWORD *)&v42[12] = 1;
    *(_DWORD *)&v42[16] = 384;
    *(_QWORD *)&v42[32] = ControlFunctionTable;
    IsSecureDevice = Controller_IsSecureDevice(a1);
    v34 = *(_DWORD *)&v42[24];
    v13 = IsSecureDevice == 0;
    v35 = *(_QWORD *)(a1 + 336);
    if ( v13 )
      v34 = 512;
    *(_DWORD *)&v42[24] = v34;
    *(_DWORD *)&v42[20] = (v35 & 8) != 0 ? 4096 : 512;
  }
  else if ( v14 == 1 )
  {
    v15 = 440;
    *(_DWORD *)&v42[12] = 3;
    v16 = IsochFunctionTable;
    *(_DWORD *)&v42[16] = 440;
    *(_QWORD *)&v42[32] = IsochFunctionTable;
    *(_DWORD *)&v42[20] = 512;
  }
  else
  {
    if ( v14 <= 1 )
      return (unsigned int)-1073741823;
    Bulk_GetConfiguration(a1, v42);
    v16 = *(__int64 (__fastcall ***)())&v42[32];
    v15 = *(_DWORD *)&v42[16];
    v12 = *(_DWORD *)&v42[12];
  }
  memset(v54, 0, 0x60uLL);
  v17 = v54[10];
  LODWORD(v54[0]) = 96;
  LODWORD(v54[1]) = 2;
  HIDWORD(v54[0]) = v12;
  if ( v12 == 2 )
    v17 = -1;
  LODWORD(v54[10]) = v17;
  v54[2] = v16[20];
  v18 = v16[21];
  v44 = 0LL;
  v54[9] = v18;
  v47 = off_1C0061388;
  *((_QWORD *)&v46 + 1) = v15;
  *((_QWORD *)&v43 + 1) = TR_WdfEvtCleanupCallback;
  *(_QWORD *)&v46 = v56;
  *(_QWORD *)&v43 = 56LL;
  v45 = 0x100000001LL;
  v19 = Endpoint_IsProxyEndpoint(a2);
  v21 = 1;
  if ( v19 )
    v21 = v20;
  v22 = *(_QWORD *)a1;
  LODWORD(v45) = v21;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, unsigned __int64 *))(WdfFunctions_01023 + 1216))(
                   WdfDriverGlobals,
                   v22,
                   v54,
                   &v43,
                   &v55);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v36 = 10;
    v41 = SecureObject;
    v40 = a4;
    v29 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
    v39 = *(_DWORD *)(a2 + 144);
    v38 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
LABEL_32:
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(a1 + 72),
      2u,
      v29,
      v36,
      (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
      v38,
      v39,
      v40,
      v41);
    return (unsigned int)SecureObject;
  }
  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v55,
          off_1C0061388);
  v25 = *(_OWORD *)v42;
  v26 = v24;
  v27 = *(_OWORD *)&v42[16];
  *(_QWORD *)(v24 + 40) = a1;
  *(_OWORD *)v24 = v25;
  *(_QWORD *)&v25 = *(_QWORD *)&v42[32];
  *(_OWORD *)(v24 + 16) = v27;
  *(_QWORD *)(v24 + 32) = v25;
  *(_QWORD *)(v24 + 48) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v24 + 56) = a2;
  *(_DWORD *)(v24 + 64) = a4;
  *(_QWORD *)(v24 + 72) = v55;
  *(_QWORD *)(v24 + 304) = 0LL;
  *(_DWORD *)(v24 + 312) = 0;
  if ( Controller_IsSecureDevice(a1) )
  {
    if ( *(_DWORD *)(a1 + 556) == 2 )
      IsSecureUsbDevice = XilUsbDevice_IsSecureUsbDevice(*(_QWORD *)(a2 + 16));
    else
      IsSecureUsbDevice = 1;
  }
  else
  {
    IsSecureUsbDevice = 0;
  }
  *(_BYTE *)(v26 + 280) = IsSecureUsbDevice;
  KeInitializeSpinLock((PKSPIN_LOCK)(v26 + 96));
  *(_QWORD *)(v26 + 216) = v26 + 208;
  *(_QWORD *)(v26 + 208) = v26 + 208;
  *(_QWORD *)(v26 + 232) = v26 + 224;
  *(_QWORD *)(v26 + 224) = v26 + 224;
  if ( *(_BYTE *)(v26 + 280) )
  {
    SecureObject = TR_CreateSecureObject(v26);
    if ( SecureObject < 0 )
      return (unsigned int)SecureObject;
    *((_QWORD *)&v48 + 1) = v16[24];
    *(_QWORD *)&v48 = 24LL;
    v47 = 0LL;
    v44 = 0LL;
    v49 = 1LL;
    v46 = v55;
    v43 = 0LL;
    LODWORD(v43) = 56;
    v45 = 0x100000001LL;
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01023 + 3032))(
                     WdfDriverGlobals,
                     &v48,
                     &v43,
                     v26 + 88);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v36 = 11;
      goto LABEL_30;
    }
  }
  else
  {
    SecureObject = TR_EnsureSegments(v26, 1u, 0);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v37 = *(_QWORD *)(v26 + 48);
      v36 = 12;
      goto LABEL_31;
    }
  }
  v30 = v16[22];
  if ( v30 )
  {
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1328))(
                     WdfDriverGlobals,
                     v55,
                     v30,
                     v26);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v36 = 13;
      goto LABEL_30;
    }
  }
  v31 = v16[23];
  v51 = 0;
  v52 = v31;
  v50 = 24;
  v47 = 0LL;
  v44 = 0LL;
  v53 = 1LL;
  v46 = v55;
  v43 = 0LL;
  LODWORD(v43) = 56;
  v45 = 0x100000001LL;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int128 *, __int64))(WdfFunctions_01023 + 888))(
                   WdfDriverGlobals,
                   &v50,
                   &v43,
                   v26 + 80);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v36 = 14;
    goto LABEL_30;
  }
  *(_QWORD *)(v26 + 176) = TR_AcquireSegment(v26);
  SecureObject = ((__int64 (__fastcall *)(__int64))*v16)(v26);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v36 = 15;
LABEL_30:
    v37 = *(_QWORD *)(a2 + 16);
LABEL_31:
    v41 = SecureObject;
    v40 = a4;
    v39 = *(_DWORD *)(a2 + 144);
    v38 = *(unsigned __int8 *)(v37 + 135);
    goto LABEL_32;
  }
  Counter_CreateTransferRingInstance(*(__int64 **)(v26 + 56), *(_DWORD *)(v26 + 64), (PPCW_INSTANCE *)(v26 + 240));
  *a5 = v26;
  return (unsigned int)SecureObject;
}
