/*
 * XREFs of ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x18014F850
 * Callers:
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180158E20 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007ACFC (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18007AD88 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$?0V_lambda_edcf8a708a912462aa4ae38346069636_@@@?$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_edcf8a708a912462aa4ae38346069636_@@@Z @ 0x18014273C (--$-0V_lambda_edcf8a708a912462aa4ae38346069636_@@@-$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae3.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x18014FA28 (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180155AC0 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CActivationBasedAppAndGlomCollection::RemoveApplication(
        CActivationBasedAppAndGlomCollection *this,
        unsigned __int64 a2)
{
  __int64 *v4; // rsi
  struct IUnknown *v5; // rbx
  __int64 *v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  struct IUnknown *v9; // rdi
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v10; // rbx
  PSRWLOCK v11; // rdi
  unsigned int v12; // edi
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  unsigned __int64 Ptr; // [rsp+30h] [rbp-18h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v16; // [rsp+38h] [rbp-10h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v17; // [rsp+90h] [rbp+48h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v18; // [rsp+98h] [rbp+50h] BYREF
  struct IUnknown *v19; // [rsp+A0h] [rbp+58h] BYREF
  __int64 *v20; // [rsp+A8h] [rbp+60h]

  v4 = (__int64 *)((char *)this + 8);
  v20 = (__int64 *)((char *)this + 8);
  v19 = *(struct IUnknown **)(*((_QWORD *)this + 1) + 8 * a2);
  v5 = v19;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
              this,
              (struct IImmersiveApplicationInternal *)v5,
              &v17,
              &Ptr) >= 0 )
  {
    v6 = (__int64 *)v17;
    v7 = *((_QWORD *)v17 + 1);
    v8 = 0LL;
    if ( v7 )
    {
      while ( 1 )
      {
        v17 = *(struct CActivationBasedAppAndGlomCollection::CGlomCollection **)(*v6 + 8 * v8);
        v9 = (struct IUnknown *)v17;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
        LODWORD(v9) = SHIsSameObject(v9, v5);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        if ( (_DWORD)v9 )
          break;
        if ( ++v8 >= v7 )
          goto LABEL_7;
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        v6,
        v8);
    }
LABEL_7:
    if ( !v6[1] )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        Ptr);
    v4 = v20;
  }
  v18 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v19,
              (__int64 *)&v18) >= 0 )
  {
    v10 = v18;
    v17 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    {
      Ptr = (unsigned __int64)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
      v16 = v10;
      v17 = 0LL;
      v12 = (unsigned int)v11[15].Ptr;
      v13 = 0LL;
      v14 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v14 )
        v13 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_edcf8a708a912462aa4ae38346069636_>::CTaskWrapper<_lambda_edcf8a708a912462aa4ae38346069636_>(
                v14,
                &Ptr);
      SHTaskPoolQueueTask(3LL, 2LL, v12);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
    v4,
    a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
}
