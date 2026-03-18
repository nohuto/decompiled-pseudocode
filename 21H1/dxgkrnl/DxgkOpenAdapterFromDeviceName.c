/*
 * XREFs of DxgkOpenAdapterFromDeviceName @ 0x1C00E3D00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009634 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C010F760 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     DxgkCloseAdapterImpl @ 0x1C0116740 (DxgkCloseAdapterImpl.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiValidateDeviceName @ 0x1C014BE38 (DpiValidateDeviceName.c)
 */

__int64 __fastcall DxgkOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rax
  __int128 v3; // xmm1
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGPROCESS *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // edi
  _DWORD *v14; // rdx
  _QWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-270h] BYREF
  PFILE_OBJECT FileObject; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v26[24]; // [rsp+38h] [rbp-260h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-248h] BYREF
  __int128 v28; // [rsp+60h] [rbp-238h]
  __int64 v29; // [rsp+70h] [rbp-228h]
  WCHAR SourceString[256]; // [rsp+80h] [rbp-218h] BYREF

  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  v28 = v3;
  v29 = *(_QWORD *)(v2 + 16);
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (int)RtlStringCbCopyW(SourceString, 0x200uLL, (size_t *)v3) < 0 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( !Current )
  {
    v20 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)DpiValidateDeviceName(&DestinationString) < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
  FileObject = 0LL;
  DeviceObject = 0LL;
  LODWORD(v12) = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  memset(v26, 0, sizeof(v26));
  v13 = 0;
  v23 = 0;
  if ( (int)v12 < 0 )
    goto LABEL_29;
  *(_QWORD *)v26 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  LODWORD(v12) = DxgkOpenAdapter((struct _D3DKMT_OPENADAPTER *)v26);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( (int)v12 < 0 )
    goto LABEL_29;
  v13 = *(_DWORD *)&v26[8];
  v23 = *(_DWORD *)&v26[8];
  if ( DXGPROCESS::IsRemoteConnection(v8) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v8 + 11) + 448LL))(*(_QWORD *)&v26[12]);
    v12 = v16;
    if ( v16 < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v22 + 24) = v12;
      WdLogEvent5_WdWarning(v22);
    }
  }
  if ( (int)v12 < 0 )
  {
LABEL_29:
    *(_QWORD *)&v26[8] = 0LL;
    *(_DWORD *)&v26[16] = 0;
  }
  v14 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = *(_DWORD *)&v26[8];
  v15 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v15 = (_QWORD *)MmUserProbeAddress;
  *v15 = *(_QWORD *)&v26[12];
  if ( (int)v12 < 0 )
  {
    if ( v13 )
    {
      v23 = v13;
      DxgkCloseAdapterImpl(&v23, 0LL);
    }
  }
  return (unsigned int)v12;
}
