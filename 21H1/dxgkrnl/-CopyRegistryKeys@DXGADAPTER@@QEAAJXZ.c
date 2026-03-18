/*
 * XREFs of ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1C0207818
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02098EC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009634 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C0244C28 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 */

__int64 __fastcall DXGADAPTER::CopyRegistryKeys(DXGADAPTER *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 result; // rax
  unsigned __int16 v6[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 210) )
  {
    v4 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v4 + 24) = 11590LL;
    WdLogEvent5_WdEvent(v4);
    return 0LL;
  }
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 380) >= 0x16u )
  {
    RtlStringCbCopyW(v6, 0x208uLL, (size_t *)L"Classes");
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys((DXGADAPTER *)((char *)this + 4208), v6);
    if ( (int)result < 0 )
      return result;
    RtlStringCbCopyW(v6, 0x208uLL, (size_t *)L"MediaFoundation\\Transforms");
    return (unsigned int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys((DXGADAPTER *)((char *)this + 4208), v6);
  }
  return v2;
}
