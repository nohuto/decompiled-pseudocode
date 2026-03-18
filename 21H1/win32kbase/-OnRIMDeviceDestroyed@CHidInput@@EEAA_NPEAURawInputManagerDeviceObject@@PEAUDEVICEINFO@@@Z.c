/*
 * XREFs of ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0051C70
 * Callers:
 *     <none>
 * Callees:
 *     HMRemoveHandleForObject @ 0x1C005AAB0 (HMRemoveHandleForObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C005ADEC (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AA0B4 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01C045C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v3; // di
  __int64 v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v5 = *((_QWORD *)a2 + 71);
    CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(this, a3, 0);
    if ( *(_QWORD *)(v5 + 1000) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v5);
    HMUnlockObject(v5);
    if ( *(_DWORD *)(v5 + 8) )
    {
      return 0;
    }
    else
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v6);
      HMMarkObjectDestroyWorker((void *)v5);
      HMRemoveHandleForObject();
    }
  }
  return v3;
}
