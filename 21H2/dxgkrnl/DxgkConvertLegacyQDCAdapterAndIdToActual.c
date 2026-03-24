/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C012D920
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C011B670 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C012BEC0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C016BD20 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009E30 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009E84 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C011C1AC (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0149470 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C02696B0 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        __int64 a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int v6; // esi
  DXGADAPTERSOURCEHASH *v8; // rdi
  __int64 v9; // rdx
  __int64 result; // rax
  struct _LUID v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // ebp
  int AdapterAndSourceForHash; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int HashBitMask; // eax
  struct _LUID v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF
  struct _LUID v24; // [rsp+80h] [rbp+18h] BYREF

  *a3 = *a1;
  *a4 = a2;
  v6 = a2;
  v8 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 1272);
  if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v9) & v6) == 0 )
    return 0LL;
  v11 = *a1;
  v23 = 0;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(v11, &v23);
  v12 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v23 )
    return 0LL;
  v24 = 0LL;
  v13 = v6 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v8);
  AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v8, v13, &v24, &v23);
  if ( AdapterAndSourceForHash < 0 )
  {
    v22 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
    *(_QWORD *)(v22 + 24) = v13;
    *(_QWORD *)(v22 + 32) = v12;
    return 0LL;
  }
  LOBYTE(v23) = 0;
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v15);
  v20 = v24;
  result = DxgkIsVirtualizationDisabledForTarget(v24, v6 & ~HashBitMask, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v23 )
    {
      *a3 = v20;
      *a4 = v6 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v21);
    }
    return 0LL;
  }
  return result;
}
