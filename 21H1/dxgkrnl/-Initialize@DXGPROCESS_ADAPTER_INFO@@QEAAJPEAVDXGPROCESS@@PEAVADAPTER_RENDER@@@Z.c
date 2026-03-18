/*
 * XREFs of ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C014D144
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C010F760 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01252F4 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000A0C8 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C014D340 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0156B6C (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C0158678 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C021B3D8 (-DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z.c)
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C0280CE0 (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO::Initialize(
        DXGPROCESS_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  char v13; // cl
  void *v14; // rax
  char IsVmProcessOrVmValidation; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  UINT Value; // r8d
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  HANDLE hKmdProcess; // rdx
  char v24; // al
  unsigned __int64 v25; // r12
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  SIZE_T v31; // rax
  PVOID v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  struct DXGPROCESS *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  _DXGKARG_CREATEPROCESS v51; // [rsp+20h] [rbp-69h] BYREF
  _DXGKARG_SETVIRTUALMACHINEDATA v52; // [rsp+58h] [rbp-31h] BYREF
  __int128 v53; // [rsp+70h] [rbp-19h]
  __int128 v54; // [rsp+80h] [rbp-9h]
  __int128 v55; // [rsp+90h] [rbp+7h]

  LODWORD(v3) = 0;
  if ( !*((_BYTE *)this + 77) )
  {
    v7 = *((_QWORD *)a3 + 2);
    if ( !*(_BYTE *)(v7 + 209) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a3 + 80) + 8LL) + 1184LL))(*((_QWORD *)a3 + 81));
      v3 = v8;
      if ( v8 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v30 + 24) = *((_QWORD *)a3 + 2);
        *(_QWORD *)(v30 + 32) = v3;
        WdLogEvent5_WdError(v30);
        return (unsigned int)v3;
      }
      *((_BYTE *)this + 76) = 1;
      v7 = *((_QWORD *)a3 + 2);
    }
    if ( (*(_DWORD *)(v7 + 2036) & 0x80u) != 0 )
    {
      v25 = *(unsigned int *)(v7 + 280);
      if ( (_DWORD)v25 == 1 )
      {
        *((_QWORD *)this + 1) = this;
      }
      else
      {
        v31 = 4 * v25;
        if ( !is_mul_ok(v25, 4uLL) )
          v31 = -1LL;
        v32 = operator new(v31, 0x4B677844u, 1, PagedPool);
        *((_QWORD *)this + 1) = v32;
        if ( !v32 )
        {
          v37 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
          *(_QWORD *)(v37 + 24) = 6035LL;
          WdLogEvent5_WdLowResource(v37);
          LODWORD(v3) = -1073741801;
          v42 = WdLogNewEntry5_WdLowResource(v39, v38, v40, v41);
          *(_QWORD *)(v42 + 24) = 2253LL;
          WdLogEvent5_WdLowResource(v42);
          goto LABEL_30;
        }
      }
      v26 = *(_DWORD *)(v7 + 348);
      LODWORD(v3) = 0;
      if ( (v26 & 8) != 0 || (v26 & 4) != 0 || (v26 & 0x10) != 0 || (*((_BYTE *)a2 + 347) & 0x10) != 0 )
      {
        v27 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 72LL);
        if ( (_DWORD)v25 )
        {
          v28 = 0LL;
          v29 = v25;
          do
          {
            *(_DWORD *)(v28 + *((_QWORD *)this + 1)) = v27;
            v28 += 4LL;
            --v29;
          }
          while ( v29 );
        }
      }
      else
      {
        v43 = DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(this, v25, (struct DXGADAPTER *)v7);
        v3 = v43;
        if ( v43 < 0 )
        {
          v46 = WdLogNewEntry5_WdError(v45, v44);
          *(_QWORD *)(v46 + 24) = v7;
          *(_QWORD *)(v46 + 32) = v3;
          WdLogEvent5_WdError(v46);
          goto LABEL_9;
        }
      }
    }
    v11 = *(_DWORD *)(v7 + 2036);
    if ( (v11 & 0x80u) == 0 && (v11 & 0x40) == 0 )
    {
LABEL_8:
      *((_BYTE *)this + 77) = 1;
      goto LABEL_9;
    }
    v13 = *((_BYTE *)a2 + 344);
    v14 = (void *)*((_QWORD *)a2 + 8);
    memset(&v51.hKmdProcess, 0, 48);
    v51.hDxgkProcess = v14;
    v51.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFC | *((_BYTE *)a2 + 345) & 1 | (2 * (v13 & 1));
    IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(a2, (struct DXGADAPTER *)v7);
    v17 = *((unsigned __int8 *)a2 + 347);
    Value = v51.Flags.Value & 0xFFFFFFF3 | (4 * (IsVmProcessOrVmValidation & 1)) | (*((unsigned __int8 *)a2 + 347) >> 1) & 8;
    v51.Flags.Value = Value;
    if ( (v17 & 0x20) != 0 )
    {
      v16 = *(unsigned int *)(v7 + 232);
      v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 62) + 48LL) + 8 * v16);
      v51.hKmdVmWorkerProcess = *(HANDLE *)(v17 + 16);
      v51.pProcessName = (WCHAR *)*((_QWORD *)a2 + 66);
      v51.ProcessNameLength = *((_DWORD *)a2 + 134);
    }
    v19 = (*((_BYTE *)a2 + 348) & 4) == 0;
    v51.NumPasid = *(_DWORD *)(v7 + 280);
    v51.pPasid = (ULONG *)*((_QWORD *)this + 1);
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    if ( !v19 )
    {
      if ( !*(_BYTE *)(v7 + 2627) )
      {
        v47 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v47 + 24) = 2305LL;
        WdLogEvent5_WdAssertion(v47);
        Value = v51.Flags.Value;
      }
      v51.Flags.Value = Value | 0x10;
    }
    LODWORD(v3) = ADAPTER_RENDER::DdiCreateProcess(a3, &v51);
    if ( (int)v3 >= 0 )
    {
      hKmdProcess = v51.hKmdProcess;
      *((_QWORD *)this + 2) = v51.hKmdProcess;
      v24 = *((_BYTE *)a2 + 347);
      if ( (v24 & 0x10) != 0 )
      {
        if ( (v24 & 0x20) != 0 )
          v48 = (struct DXGPROCESS *)*((_QWORD *)a2 + 62);
        else
          v48 = a2;
        v49 = *((_QWORD *)v48 + 62);
        *(_QWORD *)&v52.Flags.0 = 0LL;
        v52.hKmdVmWorkerProcess = hKmdProcess;
        v52.pVmGuid = (GUID *)(v49 + 248);
        v52.Flags.Value = *(_BYTE *)(v49 + 296) & 1;
        ADAPTER_RENDER::DdiSetVirtualMachineData(a3, &v52);
      }
      goto LABEL_8;
    }
    v50 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v50 + 24) = 2333LL;
    WdLogEvent5_WdWarning(v50);
LABEL_9:
    if ( (int)v3 >= 0 )
      return (unsigned int)v3;
LABEL_30:
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(this, a2, a3);
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(this);
  }
  return (unsigned int)v3;
}
