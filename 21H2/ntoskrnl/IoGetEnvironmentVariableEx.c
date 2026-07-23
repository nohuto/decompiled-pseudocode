/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x140899BAC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403CA028 (IopInitializeOfflineCrashDump.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140950984 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1409512D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951AC4 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1409531C0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140953350 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x1409541F0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140954310 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140954590 (NtQueryBootOptions.c)
 *     IopCachePreviousBootData @ 0x140A90918 (IopCachePreviousBootData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x14089ABCC (IopOpenSystemVariableDevice.c)
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
  if ( (unsigned int)dword_140C04510 > 5 && tlgKeywordOn((__int64)&dword_140C04510, 0x200000000000LL) )
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04510, (unsigned __int8 *)&byte_1400250A7, 0LL, 0LL, 7u, &v18);
  }
  return (unsigned int)v9;
}
