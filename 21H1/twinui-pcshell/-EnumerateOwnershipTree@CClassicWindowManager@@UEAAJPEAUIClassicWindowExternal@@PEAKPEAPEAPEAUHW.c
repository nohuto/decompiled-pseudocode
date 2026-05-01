/*
 * XREFs of ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x18013E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180048A4C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x18004C20C (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x18004C518 (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180086CF4 (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___ @ 0x18013DE68 (CClassicWindowManager--ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::EnumerateOwnershipTree(
        CClassicWindowManager *this,
        struct IClassicWindowExternal *a2,
        unsigned int *a3,
        HWND **a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  void *v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 *v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  char *v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-40h] BYREF
  HWND *v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v26; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+58h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(
    &v27,
    (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v7 = v27;
  CClassicWindowManager::GetRootOwner(v8, &v26, v27);
  v9 = v26;
  if ( v26 != v7 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
    v12 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
            (__int64)&v21,
            v22 + 1,
            v11);
    if ( v12 >= 0 )
    {
      v13 = v22++;
      v14 = (__int64 *)&v21[v13];
      if ( v14 )
        *v14 = v10;
    }
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8C5,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
        (const char *)(unsigned int)v12);
  }
  v18 = (char *)this - 120;
  v19[0] = v7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
  v19[1] = (__int64)&v21;
  v28 = v9;
  v20[0] = (char *)this - 120;
  v20[1] = &v28;
  v20[2] = &v18;
  CClassicWindowManager::ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___((__int64)this - 120, (__int64)v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = v22;
  if ( v22 )
  {
    *a4 = v21;
    v21 = 0LL;
    v22 = 0LL;
    v24 = 0LL;
    *a3 = v15;
  }
  v16 = *a4 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  return v16;
}
