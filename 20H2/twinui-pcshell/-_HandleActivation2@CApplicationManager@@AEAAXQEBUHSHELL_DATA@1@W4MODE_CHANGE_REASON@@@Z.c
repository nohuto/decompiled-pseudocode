/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180037410
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18002EB10 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1800803CC (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18008083C (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180155FB0 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180157038 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18000B820 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x18000B898 (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180035300 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180066DD4 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x1800670C4 (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18007AD88 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x180086494 (-_IsMultimon@CApplicationManager@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800F03F3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180150D2C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180155E78 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall CApplicationManager::_HandleActivation2(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // r15
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // eax
  int ApartmentId; // ebx
  HWND v10; // r14
  bool v11; // r13
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, IUnknown **); // rcx
  int v21; // eax
  void *v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  IUnknown *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned __int128 v30; // rax
  IUnknown *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r15
  char *v39; // r14
  unsigned __int64 v40; // r13
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // rcx
  struct IObjectArray *v44; // rcx
  char v45; // r14
  int v46; // eax
  __int64 v47; // rbx
  int SingleMonitorObjectArray; // eax
  void *v49; // rcx
  unsigned __int64 i; // rbx
  __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // r15
  PSRWLOCK v54; // rbx
  PVOID Ptr; // r14
  __int64 v56; // r12
  _QWORD *v57; // rbx
  _QWORD *v58; // rax
  _QWORD *v59; // rdi
  void *v60; // rbx
  __int64 v61; // rdx
  HRESULT v62; // edi
  IUnknown *v63; // rcx
  void *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rcx
  struct IObjectArray *v69; // rcx
  IUnknown *v70; // rcx
  void *v71; // rcx
  const void **v72; // rbx
  __int64 v73; // rcx
  unsigned __int64 v74; // rdi
  __int64 v75; // r8
  IUnknown *v76; // rcx
  __int64 v77; // rax
  __int64 v78; // r8
  int v79; // eax
  unsigned __int8 v80; // bl
  __int64 v81; // rdi
  int (__fastcall *v82)(__int64, HWND, GUID *, GUID *, __int64 *); // rbx
  __int64 v83; // rbx
  unsigned __int64 v84; // rcx
  __int64 *v85; // rdx
  int cchValue[2]; // [rsp+20h] [rbp-E0h]
  BOOL bIgnoreCase[2]; // [rsp+28h] [rbp-D8h]
  char v88; // [rsp+40h] [rbp-C0h]
  char v89; // [rsp+40h] [rbp-C0h]
  IUnknown *punk; // [rsp+48h] [rbp-B8h] BYREF
  void *ppv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v92; // [rsp+58h] [rbp-A8h] BYREF
  struct IObjectArray *v93; // [rsp+60h] [rbp-A0h] BYREF
  int v94; // [rsp+68h] [rbp-98h]
  int v95; // [rsp+6Ch] [rbp-94h]
  HWND v96; // [rsp+70h] [rbp-90h]
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v98; // [rsp+80h] [rbp-80h]
  __int64 v99; // [rsp+88h] [rbp-78h]
  unsigned __int64 v100; // [rsp+90h] [rbp-70h]
  void *v101; // [rsp+98h] [rbp-68h] BYREF
  int v102; // [rsp+A0h] [rbp-60h]
  void *ppvOut; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v104; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v106; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-38h] BYREF
  IUnknown *v108; // [rsp+D0h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v109; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v110; // [rsp+E0h] [rbp-20h] BYREF
  int v111; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned int v112; // [rsp+E8h] [rbp-18h]
  int v113; // [rsp+ECh] [rbp-14h]
  int v114; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v115; // [rsp+F8h] [rbp-8h] BYREF
  int v116; // [rsp+100h] [rbp+0h] BYREF
  LPMALLOC ppMalloc; // [rsp+108h] [rbp+8h] BYREF
  __int64 v118; // [rsp+110h] [rbp+10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+118h] [rbp+18h]
  __int64 v120; // [rsp+120h] [rbp+20h]
  __int64 v121; // [rsp+128h] [rbp+28h]
  void *v122; // [rsp+130h] [rbp+30h]
  HWND v123; // [rsp+138h] [rbp+38h] BYREF
  __int64 v124; // [rsp+140h] [rbp+40h]
  char v125; // [rsp+148h] [rbp+48h]
  PVOID v126; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v127[9]; // [rsp+158h] [rbp+58h] BYREF
  int v128; // [rsp+1A0h] [rbp+A0h]
  __int64 v129; // [rsp+1A8h] [rbp+A8h]
  __int64 v130; // [rsp+1B0h] [rbp+B0h]
  WCHAR Filename[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+418h] [rbp+318h]

  v94 = a3;
  v3 = a2;
  v118 = a2;
  v5 = 0LL;
  v113 = 0;
  if ( a1 )
    v6 = a1 + 392;
  else
    v6 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v127[8] = v6;
  v7 = *(_DWORD *)(v6 + 44);
  if ( v7 != 2 )
  {
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_220;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v7 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v8 != 1 )
          goto LABEL_6;
        goto LABEL_213;
      }
LABEL_220:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_213:
  if ( *(_DWORD *)(v6 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v110);
    v95 = ApartmentId;
    if ( ApartmentId >= 0 )
    {
      if ( v110 != *(_DWORD *)(v6 + 40) )
        ApartmentId = -2147417842;
      v95 = ApartmentId;
    }
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue[0]);
      goto LABEL_9;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v6) )
    ApartmentId = 0;
  v95 = ApartmentId;
LABEL_9:
  v128 = ApartmentId;
  v10 = *(HWND *)(v3 + 8);
  v96 = v10;
  v11 = 1;
  v88 = 1;
  if ( *(_DWORD *)(v3 + 16) == 1 )
  {
    v109 = 0LL;
    if ( *(_BYTE *)(v3 + 20) || *(_BYTE *)(v3 + 21) )
    {
      v80 = 0;
    }
    else
    {
      v80 = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v109);
      CApplicationManager::_MonitorFromWindow((CApplicationManager *)a1, v10, &v109);
    }
    if ( v10 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752))
      && v10 != (HWND)1
      && (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), v10, v80) >= 0
      && (!v109
       || (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536), v10))
      && CApplicationManager::_IsMultimon((CApplicationManager *)a1)
      && *(_DWORD *)(v3 + 24) == 1 )
    {
      v11 = CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v10) == 0;
      v88 = v11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v109);
  }
  ppv = 0LL;
  punk = 0LL;
  v121 = 0LL;
  if ( *(_DWORD *)(v3 + 16) == 2 )
  {
    punk = 0LL;
    v127[2] = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 640) )
    {
      v127[3] = 0LL;
      while ( 1 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * v13);
        v120 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = -1;
        v104 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v14)(
               v14,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v104) >= 0 )
        {
          v16 = *v104;
          v123 = v96;
          v124 = 0LL;
          v125 = 0;
          v15 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v16 + 296))(v104, &v123, 2LL) != 0) - 1;
          v17 = v124;
          if ( v124 )
          {
            v124 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
        v18 = v104;
        if ( v104 )
        {
          v104 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        }
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( !v15 )
          break;
        if ( (unsigned __int64)++v13 >= *(_QWORD *)(a1 + 640) )
          goto LABEL_223;
      }
      v12 = v13;
      v19 = 0;
    }
    else
    {
LABEL_223:
      v19 = -2147319765;
    }
    if ( v19 < 0
      || (v20 = *(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*(_QWORD *)(a1 + 632) + 8 * v12),
          v21 = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &punk),
          v5 = v12,
          v121 = v12,
          v21 < 0) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppv);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
        *(_QWORD *)(a1 + 576),
        0LL,
        &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
        &ppv);
    }
    else
    {
      v22 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
      }
      IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    }
    v11 = v88;
    v10 = v96;
  }
  v23 = *(__int64 **)(a1 + 592);
  v24 = *v23;
  if ( *(_DWORD *)(v3 + 16) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v24 + 40))(v23, *(_QWORD *)(v3 + 8));
  else
    (*(void (**)(void))(v24 + 48))();
  v25 = punk;
  *(_QWORD *)(a1 + 488) = v10;
  *(_DWORD *)(a1 + 504) = v94;
  if ( v25 && *(IUnknown **)(a1 + 512) != v25 )
  {
    ((void (__fastcall *)(IUnknown *))v25->lpVtbl->AddRef)(v25);
    v26 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = v25;
    if ( v26 )
    {
      v127[4] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v25 = punk;
  }
  if ( *(_DWORD *)(v3 + 16) == 2 && !v25 )
  {
    v27 = 2LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 40LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(v3 + 24));
    (*(void (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 528) + 88LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(v3 + 24),
      v11);
    v27 = *(unsigned int *)(v3 + 16);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 520) + 24LL))(
    *(_QWORD *)(a1 + 520),
    *(unsigned int *)(v3 + 24),
    v27,
    *(unsigned __int8 *)(v3 + 28));
  v28 = (__int64 *)ppv;
  if ( ppv && punk )
  {
    if ( (*(int (__fastcall **)(void *, IUnknown *, HWND, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
           ppv,
           punk,
           v10,
           0LL,
           2,
           0LL) >= 0
      && v5 )
    {
      v72 = (const void **)(a1 + 632);
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        a1 + 632,
        v5);
      v73 = *(_QWORD *)(a1 + 640);
      v74 = 1LL;
      if ( v73 )
        v74 = v73 + 1;
      if ( v74 <= *(_QWORD *)(a1 + 656)
        || (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                  a1 + 632,
                  v74) >= 0 )
      {
        v75 = *(_QWORD *)(a1 + 640);
        if ( v75 )
          memmove_0((char *)*v72 + 8, *v72, 8 * v75);
        *(_QWORD *)(a1 + 640) = v74;
        if ( *v72 )
        {
          v76 = punk;
          *(_QWORD *)*v72 = punk;
          if ( v76 )
            ((void (__fastcall *)(IUnknown *))v76->lpVtbl->AddRef)(v76);
        }
      }
    }
    v28 = (__int64 *)ppv;
  }
  if ( *(_DWORD *)(v3 + 16) != 2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppv);
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
           *(_QWORD *)(a1 + 576),
           0LL,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           &ppv) < 0 )
      goto LABEL_45;
    v28 = (__int64 *)ppv;
    v77 = *(_QWORD *)ppv;
    if ( v11 )
    {
      v78 = *(unsigned int *)(v3 + 24);
LABEL_168:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v77 + 40))(v28, 4LL, v78);
      goto LABEL_45;
    }
LABEL_227:
    v78 = 0LL;
    goto LABEL_168;
  }
  if ( !punk )
  {
    v77 = *v28;
    goto LABEL_227;
  }
LABEL_45:
  v29 = 0LL;
  v93 = 0LL;
  v92 = 0LL;
  v102 = 0xFFFF;
  v89 = 1;
  if ( GetShellWindow() != v10
    && !(unsigned int)GetPropW(v10, L"MultimonitorActivationException")
    && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) != v10 )
  {
    pv = 0LL;
    v98 = 0LL;
    v99 = 0LL;
    v100 = 0LL;
    v31 = punk;
    if ( punk )
    {
      v32 = v92;
      if ( v92 )
      {
        v92 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v31 = punk;
      }
      ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))v31->lpVtbl->QueryInterface)(
        v31,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        &v92);
      v107 = 0LL;
      ((void (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[19].AddRef)(punk, &v107);
      v33 = v107;
      v115 = v107;
      if ( v107 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 8LL))(v107);
      v34 = v98;
      if ( v98 != v100 )
        goto LABEL_71;
      v35 = v98 + 1;
      if ( v98 + 1 > 0xFFFFFFFE )
        goto LABEL_74;
      if ( v35 <= v100 )
        goto LABEL_71;
      v30 = v100 * (unsigned __int128)2uLL;
      v127[5] = *((_QWORD *)&v30 + 1);
      v36 = 2 * v100;
      if ( !is_mul_ok(v100, 2uLL) )
        goto LABEL_74;
      if ( (unsigned __int64)v30 - v100 > 0x1000 )
        v36 = v100 + 4096;
      v37 = v35 <= v36 ? v36 : v98 + 1;
      if ( v37 > 0xFFFFFFFE )
      {
        v36 = 4294967294LL;
      }
      else if ( v35 > v36 )
      {
        v36 = v98 + 1;
      }
      v30 = v36 * (unsigned __int128)8uLL;
      v127[6] = *((_QWORD *)&v30 + 1);
      v38 = 8 * v36;
      if ( is_mul_ok(v36, 8uLL) )
      {
        v39 = (char *)CoTaskMemRealloc(pv, v30);
        if ( !v39 )
          goto LABEL_74;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v40 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v39);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          if ( v40 > v38 )
            memset_0(&v39[v38], 0, v40 - v38);
        }
        v41 = 0;
        v100 = v36;
        pv = v39;
        v34 = v98;
      }
      else
      {
        v41 = -2147024362;
      }
      if ( v41 >= 0 )
      {
LABEL_71:
        v98 = v34 + 1;
        v42 = (__int64 *)((char *)pv + 8 * v34);
        if ( v42 )
        {
          *v42 = 0LL;
          if ( v42 != &v115 )
          {
            *v42 = v33;
            v33 = 0LL;
            v115 = 0LL;
          }
        }
      }
LABEL_74:
      if ( v33 )
      {
        v115 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v43 = v107;
      if ( v107 )
      {
        v29 = 0LL;
        v107 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        goto LABEL_78;
      }
LABEL_204:
      v29 = 0LL;
      goto LABEL_78;
    }
    v79 = *(_DWORD *)(v3 + 16);
    if ( v79 == 1 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, LPVOID *))(**(_QWORD **)(a1 + 536) + 48LL))(*(_QWORD *)(a1 + 536), v10, &pv);
      goto LABEL_78;
    }
    if ( v79 == 2 )
      goto LABEL_237;
    if ( *(_DWORD *)(v3 + 24) == 1 || *(_DWORD *)(v3 + 24) == 8 )
    {
LABEL_78:
      v44 = v93;
      if ( v93 )
      {
        v93 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v44->lpVtbl->Release)(v44);
      }
      v45 = 0;
      v93 = 0LL;
      v101 = 0LL;
      v46 = CEnumerableObjectCollection::CreateInstance((__int64)v44, *((const struct _GUID **)&v30 + 1), &v101);
      v47 = v46;
      if ( v46 >= 0 )
      {
        if ( v98 )
        {
          do
          {
            if ( v47 < 0 )
              break;
            (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)pv + v29) + 48LL))(*((_QWORD *)pv + v29), &v116);
            if ( v116 )
              (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v101 + 40LL))(v101, *((_QWORD *)pv + v29));
            ++v29;
          }
          while ( v29 < v98 );
        }
        (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v101 + 24LL))(v101, &v111);
        if ( v111 )
        {
          SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v101)(
                                       v101,
                                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                       &v93);
        }
        else
        {
          v45 = 1;
          SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                       (CApplicationManager *)a1,
                                       0LL,
                                       &v93);
        }
        LODWORD(v47) = SingleMonitorObjectArray;
      }
      v49 = v101;
      if ( v101 )
      {
        v101 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v49 + 16LL))(v49);
      }
      if ( (int)v47 >= 0 )
      {
        if ( v45 && punk )
          v94 = 8;
        v10 = v96;
        goto LABEL_94;
      }
      v10 = v96;
LABEL_237:
      v89 = 0;
LABEL_94:
      if ( pv )
      {
        for ( i = 0LL; i < v98; ++i )
        {
          v51 = *((_QWORD *)pv + i);
          if ( v51 )
          {
            *((_QWORD *)pv + i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v98 = 0LL;
      v100 = 0LL;
      goto LABEL_101;
    }
    v106 = 0LL;
    v81 = *(_QWORD *)(a1 + 560);
    v82 = *(int (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v81 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v106);
    if ( v82(v81, v10, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v106) < 0 )
    {
LABEL_201:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 568) + 64LL))(
             *(_QWORD *)(a1 + 568),
             v10) )
      {
        v102 = 65534;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v106);
      goto LABEL_204;
    }
    v83 = v106;
    v105 = v106;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v105);
    v84 = v98;
    if ( v98 == v100 )
    {
      if ( (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  &pv,
                  v98 + 1) < 0 )
      {
LABEL_200:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v105);
        goto LABEL_201;
      }
      v84 = v98;
    }
    v98 = v84 + 1;
    v85 = (__int64 *)((char *)pv + 8 * v84);
    if ( v85 )
    {
      *v85 = 0LL;
      if ( v85 != &v105 )
      {
        *v85 = v83;
        v105 = 0LL;
      }
    }
    goto LABEL_200;
  }
  if ( v10 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) )
    v89 = 0;
LABEL_101:
  v52 = (__int64)v10;
  v53 = v92;
  if ( !v92 && v10 )
  {
    v52 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 112LL))(*(_QWORD *)(a1 + 536), v10);
    v53 = v92;
  }
  v129 = v53;
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
  v130 = v52;
  v54 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v126 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v56 = v53;
    v127[0] = v53;
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
    v127[1] = v52;
    v112 = (unsigned int)v54[15].Ptr;
    v57 = 0LL;
    v127[7] = 0LL;
    v58 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v59 = v58;
    if ( v58 )
    {
      *((_DWORD *)v58 + 3) = 1;
      *v58 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v59[2] = 0LL;
      if ( v59 + 2 != &v126 )
      {
        v59[2] = Ptr;
        Ptr = 0LL;
      }
      v59[3] = 0LL;
      if ( v59 + 3 != v127 )
      {
        v59[3] = v53;
        v56 = 0LL;
      }
      v59[4] = v52;
      *v59 = off_18048A120;
      v57 = v59;
    }
    bIgnoreCase[1] = 0;
    cchValue[1] = HIDWORD(v57);
    SHTaskPoolQueueTask(3LL, 2LL, v112);
    if ( v57 )
      (*(void (__fastcall **)(_QWORD *))(*v57 + 16LL))(v57);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v3 = v118;
  }
  if ( v89 )
  {
    v60 = 0LL;
    v122 = 0LL;
    ppvOut = 0LL;
    v108 = 0LL;
    v113 = 2;
    (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL))(
      a1 + 48,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v108);
    v62 = IUnknown_QueryService(v108, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
    v63 = v108;
    if ( v108 )
    {
      v108 = 0LL;
      ((void (__fastcall *)(IUnknown *))v63->lpVtbl->Release)(v63);
    }
    v64 = ppvOut;
    if ( v62 >= 0 )
    {
      if ( ppvOut )
      {
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 8LL))(ppvOut, v61);
        v64 = ppvOut;
      }
      v60 = v64;
      v122 = v64;
      v62 = 0;
    }
    if ( v64 )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v64 + 16LL))(v64);
    }
    if ( v62 >= 0 )
    {
      bIgnoreCase[0] = v94;
      cchValue[0] = *(_DWORD *)(v3 + 24);
      (*(void (__fastcall **)(void *, struct IObjectArray *, __int64, __int64, int *, BOOL *, int))(*(_QWORD *)v60 + 24LL))(
        v60,
        v93,
        a1 + 248,
        v92,
        *(int **)cchValue,
        *(BOOL **)bIgnoreCase,
        v102);
    }
    if ( v60 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v60 + 16LL))(v60);
  }
  if ( *(_BYTE *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 48LL))(*(_QWORD *)(a1 + 552));
  v65 = *(_QWORD *)(a1 + 512);
  if ( v65 )
  {
    *(_QWORD *)(a1 + 512) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
  }
  *(_DWORD *)(a1 + 504) = 0;
  v66 = *(_QWORD *)(a1 + 488);
  if ( v66 != 1 )
    *(_QWORD *)(a1 + 496) = v66;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_BYTE *)(a1 + 480) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 48LL))(
    *(_QWORD *)(a1 + 528),
    *(unsigned int *)(v3 + 24));
  *(_QWORD *)(a1 + 768) = v96;
  v114 = 0;
  v67 = RtlPublishWnfStateData(WNF_SHEL_WINDOW_ACTIVATED, 0LL, &v114, 4LL) | 0x10000000;
  if ( v67 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x349,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v67,
      0);
    JUMPOUT(0x180117CC0LL);
  }
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  v68 = v92;
  if ( v92 )
  {
    v92 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
  }
  v69 = v93;
  if ( v93 )
  {
    v93 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v69->lpVtbl->Release)(v69);
  }
  v70 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v70->lpVtbl->Release)(v70);
  }
  v71 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v71 + 16LL))(v71);
  }
  if ( v95 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
