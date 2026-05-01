/*
 * XREFs of ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18001F7C0
 * Callers:
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001E2E4 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801495D0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18001FB10 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x18001FC84 (--$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18004976C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Add@$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@PEA_K@Z @ 0x18007BFD4 (--$_Add@$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@@-$CTSimpleArray@VCGlomColle.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18007CF38 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800838D4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x18014FBD8 (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
        CActivationBasedAppAndGlomCollection *this,
        _QWORD *a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, unsigned __int64 *))
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **); // rcx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v6; // rdi
  unsigned __int64 v7; // r15
  int GlomCollection; // ebx
  __int64 v9; // rax
  int v10; // ebx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **); // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // eax
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v22; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-38h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h]
  int v26; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned __int64 v28; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, unsigned __int64 *); // [rsp+B0h] [rbp+50h]
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v30; // [rsp+B8h] [rbp+58h] BYREF

  v29 = a3;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **))*a2;
  v6 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  GlomCollection = (**v5)(v5, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v30);
  if ( GlomCollection >= 0 )
  {
    pv[0] = 0LL;
    pv[1] = 0LL;
    *(_QWORD *)&v25 = 0LL;
    v9 = *(_QWORD *)v30;
    pv[1] = (LPVOID)-1LL;
    *(_QWORD *)&v25 = -1LL;
    GlomCollection = (*(__int64 (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *, LPVOID *))(v9 + 32))(
                       v30,
                       pv);
    if ( GlomCollection >= 0 )
    {
      GlomCollection = CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                         this,
                         (const unsigned __int16 *)pv[0],
                         &v22,
                         &v28);
      v7 = v28;
      v6 = v22;
    }
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *(_QWORD *)&v25 = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  if ( GlomCollection < 0 )
  {
    *(_OWORD *)pv = 0LL;
    v25 = 0LL;
    v26 = 2;
    v10 = CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::_Add<CActivationBasedAppAndGlomCollection::CGlomCollection &&>(
            (char *)this + 40,
            pv,
            &v28);
    v7 = v28;
    if ( v10 >= 0 )
      v6 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v28);
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll(pv);
    if ( v10 < 0 )
      goto LABEL_49;
  }
  v11 = *((_QWORD *)v6 + 1);
  v10 = 0;
  if ( v11 + 1 <= *((_QWORD *)v6 + 3)
    || (v10 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                v6,
                v11 + 1),
        v10 >= 0) )
  {
    v12 = *((_QWORD *)v6 + 1);
    if ( v11 < v12 )
      memmove_0((void *)(*(_QWORD *)v6 + 8 * v11 + 8), (const void *)(*(_QWORD *)v6 + 8 * v11), 8 * (v12 - v11));
    *((_QWORD *)v6 + 1) = v11 + 1;
    v13 = (_QWORD *)(*(_QWORD *)v6 + 8 * v11);
    if ( v13 )
    {
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **))*a2;
      *v13 = *a2;
      if ( v14 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **)))(*v14)[1])(v14);
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 160LL))(*a2);
    if ( v15 >= *((_DWORD *)v6 + 8) )
      *((_DWORD *)v6 + 8) = v15 + 1;
  }
  if ( v10 < 0 )
    goto LABEL_49;
  v10 = 0;
  v16 = *((_QWORD *)this + 2);
  if ( v16 != *((_QWORD *)this + 4)
    || (v10 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                (char *)this + 8,
                v16 + 1),
        v10 >= 0) )
  {
    v17 = (_QWORD *)(*((_QWORD *)this + 1) + 8 * (*((_QWORD *)this + 2))++);
    if ( v17 )
    {
      v18 = *a2;
      *v17 = *a2;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  if ( v10 < 0 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      v6,
      *((_QWORD *)v6 + 1) - 1LL);
  }
  else
  {
    v30 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **))*a2)(
            *a2,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            &v30);
    if ( v10 >= 0 )
    {
      v19 = 0LL;
      v28 = 0LL;
      if ( v29 )
      {
        v20 = (**v29)(v29, &GUID_00000000_0000_0000_c000_000000000046, &v28);
        v10 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A8,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v20,
            (int)v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          return (unsigned int)v10;
        }
        v19 = v28;
      }
      v22 = v30;
      if ( v30 )
      {
        (*(void (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *))(*(_QWORD *)v30 + 8LL))(v30);
        v19 = v28;
      }
      v23 = v19;
      if ( v19 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 8LL))(v19);
      v10 = CIAMGlobals::QueueViewManagementTask<_lambda_e3476b40c3599fe2d8be82ea48422b91_>(v19, &v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  }
  if ( v10 < 0 )
  {
LABEL_49:
    if ( v6 && !*((_QWORD *)v6 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        v7);
  }
  return (unsigned int)v10;
}
