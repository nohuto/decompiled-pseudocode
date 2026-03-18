/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x1408954AC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403C58E8 (IopInitializeOfflineCrashDump.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094BE84 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x14094C7D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094CFC4 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x14094E6C0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14094E850 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x14094F6F0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x14094F810 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14094FA90 (NtQueryBootOptions.c)
 *     IopCachePreviousBootData @ 0x140A8D7C8 (IopCachePreviousBootData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14033DA64 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x1408964CC (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoGetEnvironmentVariableEx(const size_t *a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  int v9; // edi
  struct _DMA_ADAPTER *v10; // rbx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-A1h]
  int v14; // [rsp+40h] [rbp-81h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-79h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-71h] BYREF
  __int64 (__fastcall **v17)(PADAPTER_OBJECT, PDEVICE_OBJECT, const size_t *, __int64, __int64, int *, int *); // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-61h] BYREF
  char v19[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v20; // [rsp+90h] [rbp-31h]
  int v21; // [rsp+98h] [rbp-29h]
  int v22; // [rsp+9Ch] [rbp-25h]
  PADAPTER_OBJECT *p_DmaAdapter; // [rsp+A0h] [rbp-21h]
  int v24; // [rsp+A8h] [rbp-19h]
  int v25; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v27; // [rsp+B8h] [rbp-9h]
  int v28; // [rsp+BCh] [rbp-5h]
  __int64 (__fastcall ***v29)(PADAPTER_OBJECT, PDEVICE_OBJECT, const size_t *, __int64, __int64, int *, int *); // [rsp+C0h] [rbp-1h]
  int v30; // [rsp+C8h] [rbp+7h]
  int v31; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  DmaAdapter = 0LL;
  v17 = 0LL;
  v14 = -559038737;
  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&DmaAdapter, &DeviceObject);
  if ( v9 >= 0 )
  {
    v13 = a3;
    v10 = DmaAdapter;
    v9 = (*v17)(DmaAdapter, DeviceObject, a1, a2, v13, a4, &v14);
    if ( a5 )
      *a5 = v14;
    if ( v10 )
      HalPutDmaAdapter(v10);
  }
  if ( (unsigned int)dword_140C04490 > 5 && tlgKeywordOn((__int64)&dword_140C04490, 0x200000000000LL) )
  {
    tlgCreate1Sz_wchar_t((__int64)v19, a1);
    v11 = *a4;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    LODWORD(DmaAdapter) = v11;
    p_DmaAdapter = &DmaAdapter;
    LODWORD(DeviceObject) = v14;
    p_DeviceObject = &DeviceObject;
    v29 = &v17;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v20 = a2;
    v21 = 16;
    LODWORD(v17) = v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04490, (unsigned __int8 *)byte_140023E33, 0LL, 0LL, 7u, &v18);
  }
  return (unsigned int)v9;
}
