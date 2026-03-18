/*
 * XREFs of ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C013EEC4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0118D44 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        struct DXGADAPTER *a3)
{
  int v3; // r12d
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  UINT v18; // eax
  ADAPTER_RENDER *v19; // rcx
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v20; // [rsp+20h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v21; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v22[24]; // [rsp+80h] [rbp+7h] BYREF

  v3 = a2;
  v5 = *((_QWORD *)this + 14);
  v7 = 3968LL * (unsigned int)a2;
  v8 = *(_QWORD *)(v5 + v7 + 88);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 56LL);
    if ( !*(_DWORD *)(v5 + v7 + 1012) )
      goto LABEL_10;
    if ( !*((_QWORD *)a3 + 335) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v5, a2);
      *(_QWORD *)(v15 + 24) = 7688LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( (*(_DWORD *)(v9 + 12) & 4) == 0 )
    {
      memset(&v21, 0, sizeof(v21));
      v21.hAllocation = *(HANDLE *)(*(_QWORD *)(v8 + 48) + 16LL);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)a3 + 335), &v21) >= 0 )
      {
        v13 = *((_QWORD *)this + 14);
        if ( v21.PrivateDriverFormatAttribute == *(_DWORD *)(v13 + v7 + 1064) )
          return;
        v20.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE;
        *((_DWORD *)&v20.StandardAllocationType + 1) = 0;
        *(&v20.AllocationPrivateDriverDataSize + 1) = 0;
        v20.PhysicalAdapterIndex = 0;
        *(_QWORD *)&v22[16] = 0LL;
        *(_OWORD *)v22 = 0LL;
        v20.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v22;
        *(_QWORD *)v22 = *(_QWORD *)(v13 + v7 + 1012);
        *(_QWORD *)&v22[12] = *(_QWORD *)(v13 + v7 + 1028);
        v16 = *(_DWORD *)(v13 + v7 + 1020);
        v17 = *(_QWORD *)(v8 + 48);
        *(_DWORD *)&v22[8] = v16;
        *(_DWORD *)&v22[20] = v3;
        v20.pAllocationPrivateDriverData = *(void **)(v17 + 32);
        v18 = *(_DWORD *)(v17 + 40);
        v19 = (ADAPTER_RENDER *)*((_QWORD *)a3 + 335);
        v20.AllocationPrivateDriverDataSize = v18;
        v20.pResourcePrivateDriverData = *(void **)(v9 + 120);
        v20.ResourcePrivateDriverDataSize = *(_DWORD *)(v9 + 128);
        if ( (int)ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v19, &v20, v12) >= 0 )
        {
          *(_DWORD *)(*((_QWORD *)this + 14) + v7 + 1064) = v21.PrivateDriverFormatAttribute;
          return;
        }
      }
      v14 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v14 + 24) = v8;
      WdLogEvent5_WdError(v14);
LABEL_10:
      *(_DWORD *)(v9 + 12) |= 4u;
    }
  }
}
