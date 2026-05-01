/*
 * XREFs of ?GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperationItem@@@Z @ 0x18045AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$FindEx@VCAppLayoutOperationItemFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByApplication@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18045A918 (--$FindEx@VCAppLayoutOperationItemFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayo.c)
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x18045C570 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetOperationItem(
        CAppLayoutOperation *this,
        struct IImmersiveApplication *a2,
        struct IAppLayoutOperationItem **a3)
{
  int OperationItemList; // ebx
  __int64 v7; // r8
  __int64 *v8; // rbx
  struct IAppLayoutOperationItem *v9; // rax
  struct IImmersiveApplication *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  OperationItemList = CAppLayoutOperation::_GenerateOperationItemList((CAppLayoutOperation *)((char *)this - 8));
  if ( OperationItemList >= 0 )
  {
    v12 = 0LL;
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    OperationItemList = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByApplication>(
                          (__int64 *)this + 14,
                          &v11,
                          v7,
                          &v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( OperationItemList >= 0 )
    {
      v8 = (__int64 *)(*((_QWORD *)this + 14) + 8 * v13);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      v9 = (struct IAppLayoutOperationItem *)*v8;
      OperationItemList = 0;
      *a3 = v9;
    }
  }
  return (unsigned int)OperationItemList;
}
