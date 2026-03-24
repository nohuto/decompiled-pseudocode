/*
 * XREFs of DxgkOpenAdapterFromDeviceName @ 0x1C013A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000B1D8 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C010C200 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     DxgkCloseAdapterImpl @ 0x1C0114BC0 (DxgkCloseAdapterImpl.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiValidateDeviceName @ 0x1C015F318 (DpiValidateDeviceName.c)
 */

__int64 __fastcall DxgkOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rax
  __int128 v3; // xmm1
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGPROCESS *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // rdx
  _QWORD *v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-270h] BYREF
  PFILE_OBJECT FileObject; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v30[24]; // [rsp+38h] [rbp-260h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-248h] BYREF
  __int128 v32; // [rsp+60h] [rbp-238h]
  __int64 v33; // [rsp+70h] [rbp-228h]
  WCHAR SourceString[256]; // [rsp+80h] [rbp-218h] BYREF

  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  v32 = v3;
  v33 = *(_QWORD *)(v2 + 16);
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (int)RtlStringCbCopyW(SourceString, 0x200uLL, (size_t *)v3) < 0 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v10 = Current;
  if ( !Current )
  {
    v24 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)DpiValidateDeviceName(&DestinationString) < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  FileObject = 0LL;
  DeviceObject = 0LL;
  LODWORD(v14) = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  memset(v30, 0, sizeof(v30));
  v16 = 0;
  v27 = 0;
  if ( (int)v14 < 0 )
    goto LABEL_29;
  *(_QWORD *)v30 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  LODWORD(v14) = DxgkOpenAdapter((struct _D3DKMT_OPENADAPTER *)v30, v17, v18);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( (int)v14 < 0 )
    goto LABEL_29;
  v16 = *(_DWORD *)&v30[8];
  v27 = *(_DWORD *)&v30[8];
  if ( DXGPROCESS::IsRemoteConnection(v10) )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v10 + 11) + 448LL))(*(_QWORD *)&v30[12]);
    v14 = v21;
    if ( v21 < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v15);
      *(_QWORD *)(v26 + 24) = v14;
      WdLogEvent5_WdWarning(v26);
    }
  }
  if ( (int)v14 < 0 )
  {
LABEL_29:
    *(_QWORD *)&v30[8] = 0LL;
    *(_DWORD *)&v30[16] = 0;
  }
  v19 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v19 = (_DWORD *)MmUserProbeAddress;
  *v19 = *(_DWORD *)&v30[8];
  v20 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v20 = (_QWORD *)MmUserProbeAddress;
  *v20 = *(_QWORD *)&v30[12];
  if ( (int)v14 < 0 )
  {
    if ( v16 )
    {
      v27 = v16;
      DxgkCloseAdapterImpl((__int64)&v27, 0, v15);
    }
  }
  return (unsigned int)v14;
}
