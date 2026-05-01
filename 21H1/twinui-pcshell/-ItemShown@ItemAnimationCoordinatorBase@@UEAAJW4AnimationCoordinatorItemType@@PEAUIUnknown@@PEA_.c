/*
 * XREFs of ?ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1803A1C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x180130DC0 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::ItemShown(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _BYTE *a4)
{
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r14
  void *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  *a4 = 1;
  if ( *(_BYTE *)(a1 + 232) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v7 = (**a3)(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v19);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v11 = v19;
      v16 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
      v13 = *(_QWORD *)(a1 + 96);
      v8 = 0;
      v17 = 0LL;
      if ( v13 != *(_QWORD *)(a1 + 112)
        || (v8 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                   a1 + 88,
                   v13 + 1,
                   v12),
            v8 >= 0) )
      {
        ++*(_QWORD *)(a1 + 96);
        v14 = 32LL * *(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 88) - 32LL;
        if ( v14 )
        {
          *(_DWORD *)v14 = a2;
          *(_QWORD *)(v14 + 8) = 0LL;
          if ( (__int64 *)(v14 + 8) != &v16 )
          {
            v16 = 0LL;
            *(_QWORD *)(v14 + 8) = v11;
          }
          *(_OWORD *)(v14 + 16) = 0LL;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      if ( v8 >= 0 )
      {
        v8 = 0;
        goto LABEL_15;
      }
      v9 = (unsigned int)v8;
      v10 = 52LL;
    }
    else
    {
      v9 = (unsigned int)v7;
      v10 = 50LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)v9);
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    return (unsigned int)v8;
  }
  return 0LL;
}
