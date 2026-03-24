/*
 * XREFs of DpiKsrStopAdapters @ 0x1C02D30D0
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C017695C (DpiFdoHandleSystemPower.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4B0 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00E28DC (DpiEnableD3Requests.c)
 *     DpiFdoStopAdapter @ 0x1C02CBE84 (DpiFdoStopAdapter.c)
 *     DpiDestroyIoMmuContext @ 0x1C02D1CE8 (DpiDestroyIoMmuContext.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02D83D4 (DpiLdaStopAllAdaptersInChain.c)
 */

NTSTATUS __fastcall DpiKsrStopAdapters(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  PVOID DeviceExtension; // rbx
  struct _DRIVER_OBJECT *DriverObject; // rdx
  __int64 v6; // rdx
  UNICODE_STRING String1; // [rsp+20h] [rbp-89h] BYREF
  UNICODE_STRING v9; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v10[10]; // [rsp+40h] [rbp-69h] BYREF
  _OWORD v11[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+7h]
  wchar_t v13; // [rsp+B8h] [rbp+Fh]
  _OWORD v14[2]; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v15; // [rsp+E0h] [rbp+37h]

  DeviceExtension = a1->DeviceExtension;
  if ( *((_BYTE *)DeviceExtension + 1158) )
    return -1073741637;
  if ( *((_BYTE *)DeviceExtension + 2692) )
    return -1073741637;
  if ( *((_BYTE *)DeviceExtension + 2694) )
    return -1073741637;
  if ( *((_BYTE *)DeviceExtension + 2695) )
    return -1073741637;
  memset(v10, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v10[1]);
  DriverObject = a1->DriverObject;
  v10[8] = MEMORY[0xFFFFF78000000014];
  v11[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v13 = aDriverBasicdis[20];
  v12 = *(_QWORD *)L"play";
  String1.Buffer = (wchar_t *)v11;
  v11[1] = *(_OWORD *)L"BasicDisplay";
  LODWORD(v10[3]) = 5;
  LOBYTE(v10[6]) = -1;
  v14[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  *(_QWORD *)&String1.Length = 2752552LL;
  v15 = *(_QWORD *)L"der";
  v14[1] = *(_OWORD *)L"BasicRender";
  *(_QWORD *)&v9.Length = 2621478LL;
  v9.Buffer = (wchar_t *)v14;
  if ( !RtlCompareUnicodeString(&String1, &DriverObject->DriverName, 1u)
    || !RtlCompareUnicodeString(&v9, &a1->DriverObject->DriverName, 1u) )
  {
    return -1073741637;
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( *((_DWORD *)DeviceExtension + 126) )
    DpiLdaStopAllAdaptersInChain(a1);
  else
    DpiFdoStopAdapter(a1, (__int64)v10);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiDestroyIoMmuContext((__int64)DeviceExtension, v6);
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
}
