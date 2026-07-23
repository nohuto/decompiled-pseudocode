/*
 * XREFs of IoEnumerateEnvironmentVariablesEx @ 0x140899A4C
 * Callers:
 *     NtEnumerateBootEntries @ 0x1409534E0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140953B30 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140953FF0 (NtEnumerateSystemEnvironmentValuesEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x14089ABCC (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoEnumerateEnvironmentVariablesEx(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v8; // ebx
  struct _DMA_ADAPTER *v9; // rdi
  __int64 v11; // [rsp+20h] [rbp-89h]
  bool v12; // [rsp+40h] [rbp-69h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-61h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-59h] BYREF
  __int64 v15; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-49h] BYREF
  PADAPTER_OBJECT *p_DmaAdapter; // [rsp+80h] [rbp-29h]
  int v18; // [rsp+88h] [rbp-21h]
  int v19; // [rsp+8Ch] [rbp-1Dh]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+90h] [rbp-19h]
  int v21; // [rsp+98h] [rbp-11h]
  int v22; // [rsp+9Ch] [rbp-Dh]
  __int64 *v23; // [rsp+A0h] [rbp-9h]
  int v24; // [rsp+A8h] [rbp-1h]
  int v25; // [rsp+ACh] [rbp+3h]
  bool *v26; // [rsp+B0h] [rbp+7h]
  int v27; // [rsp+B8h] [rbp+Fh]
  int v28; // [rsp+BCh] [rbp+13h]

  DeviceObject = 0LL;
  DmaAdapter = 0LL;
  v15 = 0LL;
  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&DmaAdapter, &DeviceObject);
  if ( v8 >= 0 )
  {
    v11 = a3;
    v9 = DmaAdapter;
    v8 = (*(__int64 (__fastcall **)(PADAPTER_OBJECT, PDEVICE_OBJECT, _QWORD, __int64, __int64, _DWORD *))(v15 + 16))(
           DmaAdapter,
           DeviceObject,
           a1,
           a2,
           v11,
           a4);
    if ( v9 )
      HalPutDmaAdapter(v9);
  }
  if ( (unsigned int)dword_140C04510 > 5 && tlgKeywordOn((__int64)&dword_140C04510, 0x200000000000LL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    p_DmaAdapter = &DmaAdapter;
    LODWORD(DeviceObject) = *a4;
    v12 = a2 != 0;
    v28 = 0;
    p_DeviceObject = &DeviceObject;
    v18 = 4;
    v23 = &v15;
    v21 = 4;
    v26 = &v12;
    v24 = 4;
    LODWORD(DmaAdapter) = a1;
    LODWORD(v15) = v8;
    v27 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04510, (unsigned __int8 *)byte_140024FF0, 0LL, 0LL, 6u, &v16);
  }
  return (unsigned int)v8;
}
