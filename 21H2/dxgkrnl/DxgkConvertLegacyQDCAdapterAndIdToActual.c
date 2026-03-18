/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01658E0
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0165640 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01E63E0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F208 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F2B0 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C015C678 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D7DA0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C030A218 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  struct DXGGLOBAL *Global; // rax
  DXGADAPTERSOURCEHASH *v9; // rdi
  unsigned int v10; // ebx
  __int64 result; // rax
  struct _LUID v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // esi
  int AdapterAndSourceForHash; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int HashBitMask; // eax
  struct _LUID v19; // rbx
  __int64 v20; // rax
  DXGFASTMUTEX *v21; // [rsp+50h] [rbp-10h]
  char v22; // [rsp+58h] [rbp-8h]
  unsigned int v23; // [rsp+A8h] [rbp+48h] BYREF
  struct _LUID v24; // [rsp+B0h] [rbp+50h] BYREF

  *a3 = *a1;
  *a4 = a2;
  Global = DXGGLOBAL_GetGlobal();
  v22 = 0;
  v9 = (struct DXGGLOBAL *)((char *)Global + 1416);
  v21 = (struct DXGGLOBAL *)((char *)Global + 1416);
  if ( Global == (struct DXGGLOBAL *)-1416LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v21 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v21);
  v22 = 0;
  v10 = 0xFFFFFFFF >> (32 - *((_BYTE *)v9 + 68)) << (32 - *((_BYTE *)v9 + 68));
  DXGFASTMUTEX::Release((struct _KTHREAD **)v21);
  if ( (v10 & a2) == 0 )
    return 0LL;
  v12 = *a1;
  v23 = 0;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(v12, &v23);
  v13 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v23 )
    return 0LL;
  v24 = 0LL;
  v14 = a2 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v9);
  AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v9, v14, &v24, &v23);
  if ( AdapterAndSourceForHash < 0 )
  {
    v20 = WdLogNewEntry5_WdTrace(v17, v16);
    *(_QWORD *)(v20 + 24) = v14;
    *(_QWORD *)(v20 + 32) = v13;
    return 0LL;
  }
  LOBYTE(v23) = 0;
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v9);
  v19 = v24;
  result = DxgkIsVirtualizationDisabledForTarget(v24, a2 & ~HashBitMask, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v23 )
    {
      *a3 = v19;
      *a4 = a2 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v9);
    }
    return 0LL;
  }
  return result;
}
