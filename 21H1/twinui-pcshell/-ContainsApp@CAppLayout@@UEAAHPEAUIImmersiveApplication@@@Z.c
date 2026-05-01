/*
 * XREFs of ?ContainsApp@CAppLayout@@UEAAHPEAUIImmersiveApplication@@@Z @ 0x18045DA90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18045CF00 (--$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAppLayout::ContainsApp(RTL_SRWLOCK *this, struct IImmersiveApplication *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // r8
  BOOL v6; // ebx
  struct IImmersiveApplication *v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = this + 2;
  AcquireSRWLockShared(this + 2);
  v9 = 0LL;
  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  v6 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByApplication>(
              &this[8].Ptr,
              (__int64)&v8,
              v5,
              &v10) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
