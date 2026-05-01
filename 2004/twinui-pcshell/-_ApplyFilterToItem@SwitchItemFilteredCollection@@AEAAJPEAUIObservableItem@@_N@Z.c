/*
 * XREFs of ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180395020
 * Callers:
 *     ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run @ 0x180394760 (ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___--Run.c)
 *     ?ViewVirtualDesktopChanged@SwitchItemFilteredCollection@@UEAAJPEAUIApplicationView@@@Z @ 0x180394D20 (-ViewVirtualDesktopChanged@SwitchItemFilteredCollection@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x180394EC8 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1803934FC (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 *     ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x180395180 (-_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x18039F320 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x18039F718 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::_ApplyFilterToItem(
        SwitchItemFilteredCollection *this,
        struct IUnknown *a2,
        unsigned __int8 a3)
{
  int v4; // r14d
  __int64 v6; // rdx
  bool v7; // bl
  bool v8; // al
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IUnknown *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  v4 = a3;
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v7 = (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                       (_QWORD *)this + 2,
                       v6,
                       &v13,
                       &v14) == 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v8 = SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(this, (struct IObservableItem *)a2);
  if ( v7 )
  {
    if ( !v8 )
    {
      v13 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v9 = ObservableObjectArray::_RemoveItem(this, &v13, (unsigned int)(2 * v4 + 1));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      if ( v9 < 0 )
      {
        v10 = 338LL;
        goto LABEL_5;
      }
    }
  }
  else if ( v8 )
  {
    v13 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v9 = ObservableObjectArray::_AddItem(this, &v13, (unsigned int)(2 * v4));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v9 < 0 )
    {
      v10 = 334LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
