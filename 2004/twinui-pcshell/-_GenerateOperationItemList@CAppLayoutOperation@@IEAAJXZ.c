/*
 * XREFs of ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1804805C0
 * Callers:
 *     ?GetCount@CAppLayoutOperation@@UEAAJPEAI@Z @ 0x18047EC20 (-GetCount@CAppLayoutOperation@@UEAAJPEAI@Z.c)
 *     ?GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperationItem@@@Z @ 0x18047EEE0 (-GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180146F34 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$FindEx@VCAppLayoutOperationItemFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByView@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18047EA28 (--$FindEx@VCAppLayoutOperationItemFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutOpera.c)
 *     ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18047F1C0 (-_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANI.c)
 *     ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x18047F3D0 (-_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_GenerateOperationItemList(CAppLayoutOperation *this)
{
  __int64 *v1; // r12
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  struct IUnknown *v8; // r8
  int v9; // ebx
  unsigned __int64 v10; // r15
  unsigned __int64 i; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  struct IUnknown *v14; // r8
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  struct IAppLayoutItem *v19; // [rsp+30h] [rbp-39h] BYREF
  struct IUnknown *v20; // [rsp+38h] [rbp-31h] BYREF
  __int64 v21; // [rsp+40h] [rbp-29h] BYREF
  __int64 v22; // [rsp+48h] [rbp-21h] BYREF
  struct IAppLayoutItem *v23[2]; // [rsp+50h] [rbp-19h] BYREF
  struct IApplicationView *v24; // [rsp+60h] [rbp-9h]

  v1 = (__int64 *)((char *)this + 120);
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)this + 120);
  v3 = *((_QWORD *)this + 4);
  if ( v3 && *((_QWORD *)this + 5) )
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v4 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v3 + 128LL))(v3, &v20);
    while ( v4 >= 0 )
    {
      if ( ((int (__fastcall *)(struct IUnknown *, __int64, struct IAppLayoutItem **))v20->lpVtbl[1].QueryInterface)(
             v20,
             1LL,
             v23) < 0 )
        break;
      v19 = 0LL;
      v5 = *((_QWORD *)this + 5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      v6 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD))(*(_QWORD *)v5 + 152LL))(
             v5,
             v24,
             &v19,
             0LL);
      if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -2147319765 )
        v4 = v6;
      if ( v4 >= 0 )
        v4 = CAppLayoutOperation::_AddOperationItem(this, (struct IUnknown *)v24, v23[0], v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    if ( v4 >= 0 )
    {
      v20 = 0LL;
      v7 = *((_QWORD *)this + 5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      v4 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v7 + 128LL))(v7, &v20);
      while ( v4 >= 0 )
      {
        if ( ((int (__fastcall *)(struct IUnknown *, __int64, struct IAppLayoutItem **))v20->lpVtbl[1].QueryInterface)(
               v20,
               1LL,
               v23) < 0 )
          break;
        v21 = 0LL;
        v19 = v24;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByView>(
               v1,
               (struct IUnknown **)&v19,
               v8,
               &v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147319765 )
          v4 = v9;
        if ( v4 < 0 )
          break;
        if ( v9 == -2147319765 )
          v4 = CAppLayoutOperation::_AddOperationItem(this, (struct IUnknown *)v24, 0LL, v23[0]);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      if ( v4 >= 0 )
      {
        v10 = *((_QWORD *)this + 12);
        for ( i = 0LL; i < v10; ++i )
        {
          if ( v4 < 0 )
            break;
          v12 = *((_QWORD *)this + 11);
          v19 = 0LL;
          v13 = *(_QWORD *)(v12 + 8 * i);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
          v4 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem **))(*(_QWORD *)v13 + 24LL))(v13, &v19);
          if ( v4 >= 0 )
          {
            v21 = 0LL;
            v20 = (struct IUnknown *)v19;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
            v15 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByView>(
                    v1,
                    &v20,
                    v14,
                    &v22);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
            if ( (int)(v15 + 0x80000000) >= 0 && v15 != -2147319765 )
              v4 = v15;
            if ( v4 >= 0 && v15 == -2147319765 )
            {
              v16 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
              v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
              v4 = CAppLayoutOperation::_AddAnimationOnlyOperationItem(this, (__int64)v19, v17);
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147319767;
  }
  return (unsigned int)v4;
}
