/*
 * XREFs of ?v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180387890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1803813B4 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     ??$BinarySearchEx@VCompareGridElements@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareGridElements@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x180385384 (--$BinarySearchEx@VCompareGridElements@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElemen.c)
 */

__int64 __fastcall CSwitchItemGrid::v_AddChildToArray(CSwitchItemGrid *this, struct IMultitaskingViewElement *a2)
{
  __int64 v3; // rdx
  struct IMultitaskingViewElement *v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
  CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::BinarySearchEx<CompareGridElements>(
    (unsigned __int64)this + 16,
    v3,
    (__int64)&v5,
    &v6);
  LODWORD(this) = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
                    (_QWORD *)this + 2,
                    &v5,
                    v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return (unsigned int)this;
}
