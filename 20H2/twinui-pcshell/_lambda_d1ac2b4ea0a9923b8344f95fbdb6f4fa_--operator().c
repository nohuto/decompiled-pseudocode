/*
 * XREFs of _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x180054B7C
 * Callers:
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___ @ 0x180054AD4 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___ @ 0x180054DDC (CClassicWindowManager--ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___.c)
 * Callees:
 *     ??$FindEx@VCImmersiveMonitorFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveMonitorFinder@@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180054C6C (--$FindEx@VCImmersiveMonitorFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180066DD4 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(_QWORD *a1, __int64 *a2)
{
  char v3; // si
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  bool v8; // bl
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _BYTE v13[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  __int64 v15; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v14 = 0LL;
  v4 = *a2;
  v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a2 + 80LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v8 = 0;
  if ( v5(v4, &v14) >= 0 )
  {
    v6 = (_QWORD *)*a1;
    v15 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v3 = 1;
    if ( (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::FindEx<CImmersiveMonitorFinder>(
                         v6,
                         v7,
                         &v15,
                         v13) == -2147319765 )
      v8 = 1;
  }
  if ( (v3 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( v8 )
  {
    v9 = (_QWORD *)*a1;
    v10 = *(_QWORD *)(*a1 + 8LL);
    if ( v10 != *(_QWORD *)(*a1 + 24LL)
      || (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                *a1,
                v10 + 1) >= 0 )
    {
      ++v9[1];
      v11 = (_QWORD *)(*v9 + 8LL * v9[1] - 8);
      if ( *v9 + 8LL * v9[1] != 8 )
      {
        *v11 = v14;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return 1;
}
