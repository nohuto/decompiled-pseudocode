/*
 * XREFs of DpiKsrStopAdapter @ 0x1C03945BC
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C01F02DC (DpiFdoHandleSystemPower.c)
 *     DxgkStopAdapters @ 0x1C030D840 (DxgkStopAdapters.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C0396A78 (DpiLdaStopAllAdaptersInChain.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C0EA4 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall DpiKsrStopAdapter(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  PVOID DeviceExtension; // rbx
  unsigned int v3; // edi
  _QWORD v7[10]; // [rsp+20h] [rbp-78h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v3 = 0;
  if ( *((_BYTE *)DeviceExtension + 1159)
    || *((_BYTE *)DeviceExtension + 2692)
    || *((_BYTE *)DeviceExtension + 2694)
    || *((_BYTE *)DeviceExtension + 2695)
    || *((_BYTE *)DeviceExtension + 1154)
    || *((_BYTE *)DeviceExtension + 1155) )
  {
    return 3221225659LL;
  }
  memset(v7, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v7[1]);
  v7[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v7[3]) = 5;
  LOBYTE(v7[6]) = -1;
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( *((_DWORD *)DeviceExtension + 126) )
    DpiLdaStopAllAdaptersInChain(a1);
  else
    DpiFdoStopAdapter(a1, (__int64)v7);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    SysMmDestroyAdapter(*((struct SYSMM_ADAPTER **)DeviceExtension + 709));
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( Irp )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  }
  return v3;
}
