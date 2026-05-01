/*
 * XREFs of _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x18004C0CC
 * Callers:
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___ @ 0x18004C024 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___ @ 0x18004C32C (CClassicWindowManager--ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180048A4C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??$FindEx@VCImmersiveMonitorFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveMonitorFinder@@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18004C1BC (--$FindEx@VCImmersiveMonitorFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(__int64 *a1, __int64 *a2)
{
  char v3; // si
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  void *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  bool v9; // bl
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v15 = 0LL;
  v4 = *a2;
  v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a2 + 80LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v9 = 0;
  if ( v5(v4, &v15) >= 0 )
  {
    v7 = *a1;
    v16 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
    v3 = 1;
    if ( (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::FindEx<CImmersiveMonitorFinder>(
                         v7,
                         v8,
                         &v16,
                         v14) == -2147319765 )
      v9 = 1;
  }
  if ( (v3 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v9 )
  {
    v10 = (_QWORD *)*a1;
    v11 = *(_QWORD *)(*a1 + 8);
    if ( v11 != *(_QWORD *)(*a1 + 24)
      || CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
           *a1,
           v11 + 1,
           v6) >= 0 )
    {
      ++v10[1];
      v12 = (_QWORD *)(*v10 + 8LL * v10[1] - 8);
      if ( *v10 + 8LL * v10[1] != 8 )
      {
        *v12 = v15;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return 1;
}
