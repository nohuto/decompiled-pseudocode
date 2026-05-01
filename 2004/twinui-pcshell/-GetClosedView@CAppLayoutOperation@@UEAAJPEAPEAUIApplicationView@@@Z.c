/*
 * XREFs of ?GetClosedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18047EB40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByAnimationType@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18047E838 (--$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLa.c)
 */

__int64 __fastcall CAppLayoutOperation::GetClosedView(
        CAppLayoutOperation *this,
        struct IApplicationView **a2,
        __int64 a3)
{
  __int64 *v3; // rdi
  int v5; // ebx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct IApplicationView *v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(v11) = 2;
  v3 = (__int64 *)((char *)this + 80);
  *a2 = 0LL;
  v13 = 0LL;
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
         (_QWORD *)this + 10,
         &v11,
         a3,
         &v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  if ( v5 >= 0
    || (v13 = 0LL,
        LODWORD(v11) = 7,
        v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
               v3,
               &v11,
               v6,
               &v12),
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13),
        v7 >= 0) )
  {
    v8 = *v3;
    v11 = 0LL;
    v9 = *(_QWORD *)(v8 + 8 * v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v7 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v9 + 24LL))(v9, &v11);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
      v7 = 0;
      *a2 = v11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  else if ( v7 == -2147319765 )
  {
    return 0;
  }
  return (unsigned int)v7;
}
