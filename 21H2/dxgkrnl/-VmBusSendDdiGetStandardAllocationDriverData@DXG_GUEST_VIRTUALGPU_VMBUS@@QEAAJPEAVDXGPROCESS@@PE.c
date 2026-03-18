/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C03760E8
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01CFE2C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3)
{
  __int64 v6; // r9
  __int64 v7; // r15
  int v8; // eax
  int v9; // esi
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v11; // rax
  UINT v12; // ebp
  int *v13; // rax
  int *v14; // r14
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v15; // rax
  UINT v16; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v17; // rcx
  UINT v18; // eax
  unsigned int v20[4]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v21; // [rsp+60h] [rbp-158h] BYREF
  int v22; // [rsp+70h] [rbp-148h]

  if ( a3->AllocationPrivateDriverDataSize <= 0x20000 && a3->ResourcePrivateDriverDataSize <= 0x20000 )
  {
    v21 = 0LL;
    v22 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v21, this, 0x40u, 0LL, 0LL, 0LL);
    v7 = v21;
    if ( !(_QWORD)v21 )
    {
LABEL_13:
      v9 = -1073741801;
      goto LABEL_32;
    }
    v8 = *((_DWORD *)a2 + 126);
    *(_BYTE *)(v21 + 12) = 0;
    *(_DWORD *)(v7 + 12) &= 0x1FFu;
    *(_QWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v7 + 16) = 39LL;
    *(_DWORD *)(v7 + 24) = a3->StandardAllocationType;
    *(_DWORD *)(v7 + 36) = a3->PhysicalAdapterIndex;
    *(_DWORD *)(v7 + 32) = a3->ResourcePrivateDriverDataSize;
    *(_DWORD *)(v7 + 28) = a3->AllocationPrivateDriverDataSize;
    switch ( a3->StandardAllocationType )
    {
      case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
        goto LABEL_11;
      case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
        *(_OWORD *)(v7 + 40) = *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width;
        break;
      case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
        pCreateSharedPrimarySurfaceData = a3->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)(v7 + 40) = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
        *(_DWORD *)(v7 + 48) = pCreateSharedPrimarySurfaceData->Format;
        break;
      case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_11:
        v11 = a3->pCreateSharedPrimarySurfaceData;
        *(_OWORD *)(v7 + 40) = *(_OWORD *)&v11->Width;
        *(_QWORD *)(v7 + 56) = *(_QWORD *)&v11->RefreshRate.Denominator;
        break;
      default:
        WdLogSingleEntry1(2LL, 11114LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid standard allocation type",
          11114LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v9 = -1073741811;
LABEL_32:
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v21);
        return (unsigned int)v9;
    }
    v12 = (a3->ResourcePrivateDriverDataSize + 43 + a3->AllocationPrivateDriverDataSize) & 0xFFFFFFF8;
    v13 = (int *)operator new[](v12, 0x4B677844u, 64LL, v6);
    v14 = v13;
    if ( !v13 )
      goto LABEL_13;
    v20[0] = v12;
    v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v21, v13, v20);
    if ( v9 < 0 || (v9 = -1073741823, v20[0] < v12) || (v9 = *v14, *v14 < 0) )
    {
      WdLogSingleEntry1(2LL, v9);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendDdiGetStandardAllocationDriverData failed: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_31:
      operator delete[](v14);
      goto LABEL_32;
    }
    switch ( a3->StandardAllocationType )
    {
      case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
        goto LABEL_21;
      case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
        *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v14 + 3);
        break;
      case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
        v17 = a3->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)&v17->Width = *(_QWORD *)(v14 + 3);
        v17->Format = v14[5];
        break;
      case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_21:
        v15 = a3->pCreateSharedPrimarySurfaceData;
        *(_OWORD *)&v15->Width = *(_OWORD *)(v14 + 3);
        *(_QWORD *)&v15->RefreshRate.Denominator = *(_QWORD *)(v14 + 7);
        break;
    }
    v16 = v14[1];
    if ( *(_DWORD *)(v7 + 28) )
      memmove(a3->pAllocationPrivateDriverData, v14 + 9, v16);
    else
      a3->AllocationPrivateDriverDataSize = v16;
    v18 = v14[2];
    if ( *(_DWORD *)(v7 + 32) )
      memmove(a3->pResourcePrivateDriverData, (char *)v14 + (unsigned int)v14[1] + 36, v18);
    else
      a3->ResourcePrivateDriverDataSize = v18;
    goto LABEL_31;
  }
  WdLogSingleEntry1(2LL, 11084LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"AllocationPrivateDriverDataSize or ResourcePrivateDriverDataSize is invalid",
    11084LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
