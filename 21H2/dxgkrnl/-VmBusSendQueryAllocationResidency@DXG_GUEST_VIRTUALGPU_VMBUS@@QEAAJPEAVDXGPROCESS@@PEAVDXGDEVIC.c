/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C037B15C
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C02D6B7C (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C002B798 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B9D0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  unsigned int v7; // r8d
  __int64 AllocationCount; // rdx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rbx
  UINT v15; // eax
  int Count; // esi
  struct _EX_RUNDOWN_REF *v17; // r15
  D3DKMT_HANDLE hResource; // r8d
  D3DKMT_HANDLE Ptr_high; // ecx
  UINT i; // r12d
  const D3DKMT_HANDLE *phAllocationList; // rax
  unsigned int *v22; // rdx
  unsigned int v23; // r8d
  UINT v24; // r8d
  UINT v25; // r10d
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v27; // rdx
  unsigned int v29; // [rsp+54h] [rbp-1B4h] BYREF
  UINT v30; // [rsp+58h] [rbp-1B0h]
  struct _EX_RUNDOWN_REF *v31; // [rsp+60h] [rbp-1A8h] BYREF
  int v32; // [rsp+68h] [rbp-1A0h]
  unsigned int v33; // [rsp+6Ch] [rbp-19Ch]
  struct _EX_RUNDOWN_REF *v34[2]; // [rsp+70h] [rbp-198h] BYREF
  struct DXGPROCESS *v35; // [rsp+80h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v36; // [rsp+88h] [rbp-180h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v37; // [rsp+90h] [rbp-178h]
  _BYTE v38[24]; // [rsp+98h] [rbp-170h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-158h] BYREF
  int v40; // [rsp+C0h] [rbp-148h]

  v35 = a2;
  v36 = this;
  v37 = this;
  v7 = 56;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    v9 = 10932LL;
    WdLogSingleEntry1(2LL, 10932LL);
    v10 = L"Invalid resource and allocation count";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    v12 = 4 * AllocationCount;
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      v9 = 10939LL;
      WdLogSingleEntry1(2LL, 10939LL);
    }
    else
    {
      if ( (unsigned int)(v12 + 56) >= 0x38 )
      {
        v7 = v12 + 56;
        goto LABEL_8;
      }
      v9 = 10944LL;
      WdLogSingleEntry1(2LL, 10944LL);
    }
    v10 = L"Math overflow";
    goto LABEL_3;
  }
LABEL_8:
  v39 = 0LL;
  v40 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v39, this, v7, 0LL, 0LL, 0LL);
  v14 = v39;
  if ( !(_QWORD)v39 )
  {
    WdLogSingleEntry1(6LL, 10953LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGKVMB_COMMAND_QUERYALLOCATIONRESIDENCY",
      10953LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v39);
    return 3221225495LL;
  }
  *(_QWORD *)v39 = 0LL;
  *(_DWORD *)(v14 + 8) = 0;
  *(_BYTE *)(v14 + 12) = 0;
  *(_DWORD *)(v14 + 12) &= 0x1FFu;
  *(_QWORD *)(v14 + 16) = 41LL;
  *(_DWORD *)(v14 + 8) = *((_DWORD *)a2 + 126);
  *(_DWORD *)(v14 + 24) = *((_DWORD *)a3 + 110);
  *(_DWORD *)(v14 + 40) = a5->AllocationCount;
  v15 = 1;
  if ( !a5->hResource )
    v15 = a5->AllocationCount;
  v30 = v15;
  Count = -1073741811;
  v32 = -1073741811;
  v33 = 4 * v15 + 4;
  v29 = (4 * v15 + 11) & 0xFFFFFFF8;
  v17 = (struct _EX_RUNDOWN_REF *)operator new[](v29, 0x4B677844u, 64LL, v13);
  v34[1] = v17;
  if ( v17 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v38, a2);
    hResource = a5->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v31, hResource);
      if ( !v31 || (Ptr_high = HIDWORD(v31[2].Ptr)) == 0 )
      {
        WdLogSingleEntry1(2LL, 10984LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid resource handle", 10984LL, 0LL, 0LL, 0LL, 0LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
LABEL_22:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
        goto LABEL_45;
      }
      a5->hResource = Ptr_high;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
    }
    else
    {
      for ( i = 0; i < a5->AllocationCount; ++i )
      {
        phAllocationList = a5->phAllocationList;
        if ( a4 )
        {
          v22 = (unsigned int *)&phAllocationList[i];
          if ( (unsigned __int64)v22 >= MmUserProbeAddress )
            v22 = (unsigned int *)MmUserProbeAddress;
          v23 = *v22;
        }
        else
        {
          v23 = phAllocationList[i];
          LODWORD(v31) = v23;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v35, (DXGALLOCATIONREFERENCE *)v34, v23);
        if ( !v34[0] || (v34[0][16].Count & 4) == 0 )
        {
          WdLogSingleEntry1(2LL, 11017LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle",
            11017LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v34);
          goto LABEL_22;
        }
        *(_DWORD *)(v14 + 4LL * i + 56) = HIDWORD(v34[0][2].Ptr);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v34);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    Count = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v36, (struct DXGVMBUSMESSAGE *)&v39, v17, &v29);
    if ( Count >= 0 )
    {
      Count = -1073741823;
      if ( v29 >= v33 )
      {
        Count = v17->Count;
        if ( SLODWORD(v17->Count) >= 0 )
        {
          v24 = 0;
          v25 = v30;
          while ( v24 < v25 )
          {
            pResidencyStatus = a5->pResidencyStatus;
            if ( a4 )
            {
              v27 = &pResidencyStatus[v24];
              if ( (unsigned __int64)v27 >= MmUserProbeAddress )
                v27 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
              *v27 = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v17->Ptr + v24 + 1);
            }
            else
            {
              pResidencyStatus[v24] = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v17->Ptr + v24 + 1);
            }
            ++v24;
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 10972LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate D3DKMT_ALLOCATIONRESIDENCYSTATUS",
      10972LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Count = -1073741801;
  }
LABEL_45:
  operator delete[](v17);
  if ( Count < 0 )
  {
    WdLogSingleEntry1(2LL, Count);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendQueryAllocationResidency failed: 0x%I64x",
      Count,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v39);
  return (unsigned int)Count;
}
