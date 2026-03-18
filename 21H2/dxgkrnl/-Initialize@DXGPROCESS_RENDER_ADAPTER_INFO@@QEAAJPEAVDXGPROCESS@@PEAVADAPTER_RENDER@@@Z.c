/*
 * XREFs of ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0168A40
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01688A8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0183ED4 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C000A448 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000A488 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C0166B04 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01E5174 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C01E7E5C (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C02CD268 (-DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z.c)
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C0336680 (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_RENDER_ADAPTER_INFO::Initialize(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        unsigned __int64 a2,
        struct ADAPTER_RENDER *a3,
        __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // eax
  char v11; // cl
  void *v12; // rax
  char IsVmProcessOrVmValidation; // al
  __int64 v14; // r8
  int v15; // edi
  HANDLE hKmdProcess; // rdx
  int v17; // ecx
  unsigned __int64 v19; // r13
  __int64 *v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r10
  unsigned int v24; // eax
  _DWORD *v25; // rdi
  unsigned __int64 i; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  void *v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  _DXGKARG_CREATEPROCESS v36; // [rsp+50h] [rbp-69h] BYREF
  _DXGKARG_SETVIRTUALMACHINEDATA v37; // [rsp+88h] [rbp-31h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-19h]
  __int128 v39; // [rsp+B0h] [rbp-9h]
  __int128 v40; // [rsp+C0h] [rbp+7h]

  LODWORD(v7) = 0;
  if ( !*((_BYTE *)this + 77) )
  {
    v8 = *((_QWORD *)a3 + 2);
    if ( !*(_BYTE *)(v8 + 209) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a3 + 81) + 8LL) + 1192LL))(*((_QWORD *)a3 + 82));
      v7 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)a3 + 2), v9);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open vidmm process adapter info for adapter 0x%I64x. Status: 0x%I64x",
          *((_QWORD *)a3 + 2),
          v7,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v7;
      }
      *((_BYTE *)this + 76) = 1;
      v8 = *((_QWORD *)a3 + 2);
    }
    if ( (*(_DWORD *)(v8 + 2156) & 0x80u) != 0 )
    {
      v19 = *(unsigned int *)(v8 + 288);
      v20 = (__int64 *)((char *)this + 8);
      if ( (_DWORD)v19 == 1 )
      {
        *v20 = (__int64)this;
      }
      else
      {
        v29 = 4 * v19;
        if ( !is_mul_ok(v19, 4uLL) )
          v29 = -1LL;
        v30 = operator new[](v29, 0x4B677844u, 256LL, a4);
        *v20 = v30;
        if ( !v30 )
        {
          WdLogSingleEntry1(6LL, 6355LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate Pasid array",
            6355LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v7) = -1073741801;
          WdLogSingleEntry1(6LL, 2344LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate Pasid array",
            2344LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_50;
        }
      }
      v21 = *(_DWORD *)(v8 + 436);
      LODWORD(v7) = 0;
      if ( (v21 & 8) == 0 && (v21 & 4) == 0 && (v21 & 0x10) == 0 && (*(_DWORD *)(a2 + 424) & 0x80) == 0 )
      {
        v31 = DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(this, v19, (struct DXGADAPTER *)v8);
        v7 = v31;
        if ( v31 < 0 )
        {
          WdLogSingleEntry2(2LL, v8, v31);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to initialize PASIDs for the adapter 0x%I64x. Status: 0x%I64x",
            v8,
            v7,
            0LL,
            0LL,
            0LL);
          goto LABEL_50;
        }
        goto LABEL_6;
      }
      v22 = 0LL;
      v23 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 80LL);
      if ( (_DWORD)v19 )
      {
        if ( (unsigned int)v19 >= 4
          && (*v20 > (unsigned __int64)v20
           || *v20 + 4 * (unsigned __int64)(unsigned int)(v19 - 1) < (unsigned __int64)v20) )
        {
          v24 = v19 & 0xFFFFFFFC;
          do
            v22 = (unsigned int)(v22 + 4);
          while ( (unsigned int)v22 < v24 );
          v25 = (_DWORD *)*v20;
          for ( i = (16 * ((unsigned __int64)v24 >> 2)) >> 2; i; --i )
            *v25++ = v23;
          if ( (unsigned int)v22 >= (unsigned int)v19 )
            goto LABEL_6;
          v20 = (__int64 *)((char *)this + 8);
        }
        v27 = 4 * v22;
        v28 = (unsigned int)(v19 - v22);
        do
        {
          *(_DWORD *)(v27 + *v20) = v23;
          v27 += 4LL;
          --v28;
        }
        while ( v28 );
      }
    }
LABEL_6:
    v10 = *(_DWORD *)(v8 + 2156);
    if ( (v10 & 0x80u) != 0 || (v10 & 0x40) != 0 )
    {
      v11 = *(_BYTE *)(a2 + 424);
      v12 = *(void **)(a2 + 64);
      memset(&v36.hKmdProcess, 0, 48);
      v36.hDxgkProcess = v12;
      v36.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFC | (*(_DWORD *)(a2 + 424) >> 1) & 1 | (2 * (v11 & 1));
      IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation((DXGPROCESS *)a2, (struct DXGADAPTER *)v8);
      v15 = *(_DWORD *)(a2 + 424);
      v36.Flags.Value = v36.Flags.Value & 0xFFFFFFF3 | (4 * (IsVmProcessOrVmValidation & 1 | (2 * ((v15 & 0x80) != 0))));
      if ( (v15 & 0x100) != 0 )
      {
        RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(*(DXGPROCESS **)(a2 + 608), *(_DWORD *)(v8 + 240));
        v15 = *(_DWORD *)(a2 + 424);
        v33 = (void *)*((_QWORD *)RenderAdapterInfo + 2);
        v36.pProcessName = *(WCHAR **)(a2 + 640);
        v36.ProcessNameLength = *(_DWORD *)(a2 + 648);
        v36.hKmdVmWorkerProcess = v33;
      }
      v36.NumPasid = *(_DWORD *)(v8 + 288);
      v36.pPasid = (ULONG *)*((_QWORD *)this + 1);
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      if ( (v15 & 0x200) != 0 )
      {
        if ( !*(_BYTE *)(v8 + 2747) )
        {
          WdLogSingleEntry1(1LL, 2396LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pAdapter->AllowInSessionIsolatedContainer()",
            2396LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v36.Flags.Value |= 0x10u;
      }
      LODWORD(v7) = ADAPTER_RENDER::DdiCreateProcess(a3, &v36, v14);
      if ( (int)v7 < 0 )
      {
        WdLogSingleEntry1(3LL, 2424LL);
        goto LABEL_50;
      }
      hKmdProcess = v36.hKmdProcess;
      *((_QWORD *)this + 2) = v36.hKmdProcess;
      v17 = *(_DWORD *)(a2 + 424);
      if ( (v17 & 0x80) != 0 )
      {
        if ( (v17 & 0x100) != 0 )
          v34 = *(_QWORD *)(a2 + 608);
        else
          v34 = a2 & -(__int64)((v17 & 0x80) != 0);
        v35 = *(_QWORD *)(v34 + 608);
        v37.hKmdVmWorkerProcess = hKmdProcess;
        *(_QWORD *)&v37.Flags.0 = 0LL;
        v37.pVmGuid = (GUID *)(v35 + 288);
        v37.Flags.Value = *(_BYTE *)(v35 + 336) & 1;
        ADAPTER_RENDER::DdiSetVirtualMachineData(a3, &v37);
      }
    }
    *((_BYTE *)this + 77) = 1;
    if ( (int)v7 >= 0 )
      return (unsigned int)v7;
LABEL_50:
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(this, (struct DXGPROCESS *)a2, a3);
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(this);
  }
  return (unsigned int)v7;
}
