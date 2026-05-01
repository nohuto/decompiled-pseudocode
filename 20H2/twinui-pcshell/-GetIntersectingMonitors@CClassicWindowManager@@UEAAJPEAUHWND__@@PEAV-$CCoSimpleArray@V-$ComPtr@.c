/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x1800537F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180054510 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___ @ 0x180054AD4 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180066DD4 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007A004 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x180163FD4 (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(__int64 a1, __int64 a2, LPVOID *a3)
{
  CClassicWindowManager *v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r13d
  int App; // edi
  __int64 v10; // r8
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v15; // rbx
  char *v16; // rcx
  __int64 *v17; // rdx
  unsigned __int64 v18; // rbx
  LPVOID pv; // [rsp+40h] [rbp-20h] BYREF
  char *v20; // [rsp+48h] [rbp-18h]
  void *v21; // [rsp+50h] [rbp-10h]
  void *v22; // [rsp+58h] [rbp-8h]
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h] BYREF

  v6 = (CClassicWindowManager *)(a1 - 72);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  v23 = 0LL;
  App = 0;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v23 = 0LL;
    v24 = a2;
    App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
            a1 + 112,
            &v24,
            v10,
            &v25);
    if ( App >= 0 )
    {
      v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 120) + 8 * v25);
      App = (**v11)(v11, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v23);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v23, *(__int64 **)(a1 + 120));
  }
  pv = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( App < 0 )
  {
    if ( App == -2147319765 )
    {
      App = CClassicWindowManager::_EnsureMonitorManager(v6);
      if ( App < 0 )
        goto LABEL_8;
      v25 = 0LL;
      v13 = *(_QWORD *)(a1 + 200);
      v14 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v13 + 88LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      App = v14(v13, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v25);
      if ( App >= 0 )
      {
        v15 = v25;
        v24 = v25;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
        if ( (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                    &pv,
                    v20 + 1) >= 0 )
        {
          v16 = v20++;
          v17 = (__int64 *)((char *)pv + 8 * (_QWORD)(v16 + 1) - 8);
          if ( v17 )
          {
            *v17 = 0LL;
            if ( v17 != &v24 )
            {
              *v17 = v15;
              v24 = 0LL;
            }
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    }
  }
  else
  {
    CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa___(v6, v23, &pv);
  }
  if ( App >= 0 )
  {
    *a3 = pv;
    a3[2] = v21;
    a3[1] = v20;
    a3[3] = v22;
    pv = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v22 = 0LL;
  }
LABEL_8:
  if ( pv )
  {
    v18 = 0LL;
    if ( v20 )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)pv + 8 * v18++);
      while ( v18 < (unsigned __int64)v20 );
    }
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v20 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)App;
}
