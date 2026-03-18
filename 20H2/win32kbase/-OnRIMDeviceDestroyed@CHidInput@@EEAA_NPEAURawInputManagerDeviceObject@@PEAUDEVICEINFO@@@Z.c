/*
 * XREFs of ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00BFAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0021884 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMRemoveHandleForObject @ 0x1C00218C0 (HMRemoveHandleForObject.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A1FD4 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01B838C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

char __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v3; // di
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

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
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v10,
        v6,
        v7,
        v8);
      HMMarkObjectDestroyWorker((_DWORD *)v5);
      HMRemoveHandleForObject(v9);
    }
  }
  return v3;
}
