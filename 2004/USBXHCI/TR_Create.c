/*
 * XREFs of TR_Create @ 0x1C006AA48
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C0039F30 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x1C006A2E0 (Endpoint_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0008D84 (Controller_IsSecureDevice.c)
 *     Endpoint_IsProxyEndpoint @ 0x1C0008D94 (Endpoint_IsProxyEndpoint.c)
 *     TR_AcquireSegment @ 0x1C0008E64 (TR_AcquireSegment.c)
 *     TR_EnsureSegments @ 0x1C0008EF0 (TR_EnsureSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     TR_CreateSecureObject @ 0x1C003E52C (TR_CreateSecureObject.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C003F0D0 (WPP_RECORDER_SF_DDDd.c)
 *     XilUsbDevice_IsSecureUsbDevice @ 0x1C0044EAC (XilUsbDevice_IsSecureUsbDevice.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006AE6C (Counter_CreateTransferRingInstance.c)
 *     Bulk_GetConfiguration @ 0x1C00713A4 (Bulk_GetConfiguration.c)
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
  __int64 (__fastcall **v15)(); // r12
  unsigned int v16; // edi
  int v17; // eax
  __int64 (__fastcall *v18)(); // rax
  char v19; // al
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rdx
  int v23; // edx
  int SecureObject; // edi
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int64 v27; // rbx
  __int128 v28; // xmm1
  char IsSecureUsbDevice; // al
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  int v33; // r8d
  __int64 (__fastcall *v34)(); // r8
  char IsSecureDevice; // al
  bool v37; // cf
  int v38; // r9d
  __int64 v39; // rax
  char v40; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+30h] [rbp-D0h]
  char v42; // [rsp+38h] [rbp-C8h]
  char v43; // [rsp+40h] [rbp-C0h]
  _BYTE v44[40]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int128 v48; // [rsp+98h] [rbp-68h]
  void *v49; // [rsp+A8h] [rbp-58h]
  __int128 v50; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-40h]
  _QWORD v52[3]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v53[18]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v54; // [rsp+188h] [rbp+88h] BYREF
  __int64 v55; // [rsp+190h] [rbp+90h]

  v55 = a3;
  DWORD1(v45) = 0;
  v51 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  v54 = 0LL;
  memset(&v44[12], 0, 28);
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
  *(_DWORD *)&v44[8] = v9;
  *(_DWORD *)&v44[4] = v11 - 4096;
  v12 = 3;
  v13 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v14 = *(_BYTE *)(a2 + 99) & 3;
  *(_DWORD *)v44 = v14;
  if ( v13 )
  {
    v12 = 1;
    v15 = ControlFunctionTable;
    v16 = 384;
    *(_DWORD *)&v44[12] = 1;
    *(_DWORD *)&v44[16] = 384;
    *(_QWORD *)&v44[32] = ControlFunctionTable;
    IsSecureDevice = Controller_IsSecureDevice(a1);
    v37 = (*(_QWORD *)(a1 + 336) & 8) != 0;
    *(_DWORD *)&v44[24] = IsSecureDevice != 0 ? 0 : 0x200;
    *(_DWORD *)&v44[20] = v37 ? 4096 : 512;
  }
  else if ( v14 == 1 )
  {
    v16 = 440;
    *(_DWORD *)&v44[12] = 3;
    v15 = IsochFunctionTable;
    *(_DWORD *)&v44[16] = 440;
    *(_QWORD *)&v44[32] = IsochFunctionTable;
    *(_QWORD *)&v44[20] = 512LL;
  }
  else
  {
    if ( v14 <= 1 )
      return (unsigned int)-1073741823;
    Bulk_GetConfiguration(a1, v44);
    v15 = *(__int64 (__fastcall ***)())&v44[32];
    v16 = *(_DWORD *)&v44[16];
    v12 = *(_DWORD *)&v44[12];
  }
  memset(v53, 0, 0x60uLL);
  v17 = v53[10];
  LODWORD(v53[0]) = 96;
  LODWORD(v53[1]) = 2;
  HIDWORD(v53[0]) = v12;
  if ( v12 == 2 )
    v17 = -1;
  LODWORD(v53[10]) = v17;
  v53[2] = v15[20];
  v18 = v15[21];
  v46 = 0LL;
  v53[9] = v18;
  v49 = off_1C0060388;
  *((_QWORD *)&v48 + 1) = v16;
  *((_QWORD *)&v45 + 1) = TR_WdfEvtCleanupCallback;
  *(_QWORD *)&v48 = v55;
  *(_QWORD *)&v45 = 56LL;
  v47 = 0x100000001LL;
  v19 = Endpoint_IsProxyEndpoint(a2);
  v21 = 1;
  if ( v19 )
    v21 = v20;
  v22 = *(_QWORD *)a1;
  LODWORD(v47) = v21;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, unsigned __int64 *))(WdfFunctions_01023 + 1216))(
                   WdfDriverGlobals,
                   v22,
                   v53,
                   &v45,
                   &v54);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v38 = 10;
    v43 = SecureObject;
    v42 = a4;
    v33 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
    v41 = *(_DWORD *)(a2 + 144);
    v40 = *(_BYTE *)(*(_QWORD *)(a2 + 16) + 135LL);
LABEL_30:
    LOBYTE(v23) = 2;
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(a1 + 72),
      v23,
      v33,
      v38,
      (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
      v40,
      v41,
      v42,
      v43);
    return (unsigned int)SecureObject;
  }
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v54,
          off_1C0060388);
  v26 = *(_OWORD *)v44;
  v27 = v25;
  v28 = *(_OWORD *)&v44[16];
  *(_QWORD *)(v25 + 40) = a1;
  *(_OWORD *)v25 = v26;
  *(_QWORD *)&v26 = *(_QWORD *)&v44[32];
  *(_OWORD *)(v25 + 16) = v28;
  *(_QWORD *)(v25 + 32) = v26;
  *(_QWORD *)(v25 + 48) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v25 + 56) = a2;
  *(_DWORD *)(v25 + 64) = a4;
  *(_QWORD *)(v25 + 72) = v54;
  *(_QWORD *)(v25 + 304) = 0LL;
  *(_DWORD *)(v25 + 312) = 0;
  if ( Controller_IsSecureDevice(a1) )
  {
    if ( *(_DWORD *)(a1 + 540) == 2 )
      IsSecureUsbDevice = XilUsbDevice_IsSecureUsbDevice(*(_QWORD *)(a2 + 16));
    else
      IsSecureUsbDevice = 1;
  }
  else
  {
    IsSecureUsbDevice = 0;
  }
  *(_BYTE *)(v27 + 280) = IsSecureUsbDevice;
  KeInitializeSpinLock((PKSPIN_LOCK)(v27 + 96));
  *(_QWORD *)(v27 + 216) = v27 + 208;
  *(_QWORD *)(v27 + 208) = v27 + 208;
  *(_QWORD *)(v27 + 232) = v27 + 224;
  *(_QWORD *)(v27 + 224) = v27 + 224;
  if ( *(_BYTE *)(v27 + 280) )
  {
    SecureObject = TR_CreateSecureObject(v27, v30, v31, v32);
    if ( SecureObject < 0 )
      return (unsigned int)SecureObject;
    *((_QWORD *)&v50 + 1) = v15[24];
    LODWORD(v50) = 24;
    v49 = 0LL;
    v46 = 0LL;
    LOBYTE(v51) = 1;
    v48 = v54;
    v45 = 0LL;
    LODWORD(v45) = 56;
    v47 = 0x100000001LL;
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01023 + 3032))(
                     WdfDriverGlobals,
                     &v50,
                     &v45,
                     v27 + 88);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v38 = 11;
      goto LABEL_28;
    }
  }
  else
  {
    SecureObject = TR_EnsureSegments(v27, 1u, 0);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v39 = *(_QWORD *)(v27 + 48);
      v38 = 12;
      goto LABEL_29;
    }
  }
  v34 = v15[22];
  if ( v34 )
  {
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1328))(
                     WdfDriverGlobals,
                     v54,
                     v34,
                     v27);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v38 = 13;
      goto LABEL_28;
    }
  }
  v52[1] = v15[23];
  v52[0] = 24LL;
  v49 = 0LL;
  v46 = 0LL;
  v52[2] = 1LL;
  v48 = v54;
  v45 = 0LL;
  LODWORD(v45) = 56;
  v47 = 0x100000001LL;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 888))(
                   WdfDriverGlobals,
                   v52,
                   &v45,
                   v27 + 80);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v38 = 14;
    goto LABEL_28;
  }
  *(_QWORD *)(v27 + 176) = TR_AcquireSegment(v27);
  SecureObject = ((__int64 (__fastcall *)(__int64))*v15)(v27);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v38 = 15;
LABEL_28:
    v39 = *(_QWORD *)(a2 + 16);
LABEL_29:
    v43 = SecureObject;
    v42 = a4;
    v41 = *(_DWORD *)(a2 + 144);
    v40 = *(_BYTE *)(v39 + 135);
    goto LABEL_30;
  }
  Counter_CreateTransferRingInstance(*(_QWORD *)(v27 + 56), *(unsigned int *)(v27 + 64), v27 + 240);
  *a5 = v27;
  return (unsigned int)SecureObject;
}
