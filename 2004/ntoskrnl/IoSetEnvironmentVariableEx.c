/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x140896ADC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403C6858 (IopInitializeOfflineCrashDump.c)
 *     IopInitializeInMemoryDumpData @ 0x1404FEE80 (IopInitializeInMemoryDumpData.c)
 *     ExpSetBootEntry @ 0x14094DB70 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094E364 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14094E93C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14094FA60 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14094FBF0 (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x140951780 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x140951990 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140951BA0 (NtSetDriverEntryOrder.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140276BC8 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x1408977EC (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoSetEnvironmentVariableEx(const size_t *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v9; // ebx
  struct _DMA_ADAPTER *v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-A1h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-79h] BYREF
  __int64 v15; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v17[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v18; // [rsp+90h] [rbp-31h]
  int v19; // [rsp+98h] [rbp-29h]
  int v20; // [rsp+9Ch] [rbp-25h]
  PADAPTER_OBJECT *p_DmaAdapter; // [rsp+A0h] [rbp-21h]
  int v22; // [rsp+A8h] [rbp-19h]
  int v23; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v25; // [rsp+B8h] [rbp-9h]
  int v26; // [rsp+BCh] [rbp-5h]
  __int64 *v27; // [rsp+C0h] [rbp-1h]
  int v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  DmaAdapter = 0LL;
  v15 = 0LL;
  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&DmaAdapter, &DeviceObject);
  if ( v9 >= 0 )
  {
    v12 = a3;
    v10 = DmaAdapter;
    v9 = (*(__int64 (__fastcall **)(PADAPTER_OBJECT, PDEVICE_OBJECT, const size_t *, __int64, __int64, int, int))(v15 + 8))(
           DmaAdapter,
           DeviceObject,
           a1,
           a2,
           v12,
           a4,
           a5);
    if ( v10 )
      HalPutDmaAdapter(v10);
  }
  if ( (unsigned int)dword_140C044D0 > 5 && tlgKeywordOn((__int64)&dword_140C044D0, 0x200000000000LL) )
  {
    tlgCreate1Sz_wchar_t((__int64)v17, a1);
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    p_DmaAdapter = &DmaAdapter;
    v22 = 4;
    p_DeviceObject = &DeviceObject;
    v27 = &v15;
    v25 = 4;
    v28 = 4;
    v18 = a2;
    v19 = 16;
    LODWORD(DmaAdapter) = a4;
    LODWORD(DeviceObject) = a5;
    LODWORD(v15) = v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C044D0, (unsigned __int8 *)byte_140023F33, 0LL, 0LL, 7u, &v16);
  }
  return (unsigned int)v9;
}
