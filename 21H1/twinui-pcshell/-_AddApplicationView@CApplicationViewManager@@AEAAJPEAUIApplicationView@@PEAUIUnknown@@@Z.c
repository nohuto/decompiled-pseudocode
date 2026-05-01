/*
 * XREFs of ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18000A8C0
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18000A7D0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18016A850 (-AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028660 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::_AddApplicationView(
        CApplicationViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  int v5; // edi
  __int64 v6; // rdx
  struct IApplicationView **v7; // r8
  struct IApplicationView *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v5 = 0;
  v6 = *((_QWORD *)this + 86);
  if ( v6 != *((_QWORD *)this + 88)
    || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (char *)this + 680,
               v6 + 1),
        v5 >= 0) )
  {
    v7 = (struct IApplicationView **)(*((_QWORD *)this + 85) + 8 * (*((_QWORD *)this + 86))++);
    if ( v7 )
    {
      *v7 = 0LL;
      if ( v7 != &v9 )
      {
        *v7 = a2;
        v9 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v5 >= 0 )
    CApplicationViewManager::RaiseApplicationViewChanged((char *)this + 136, a2, 0LL);
  return (unsigned int)v5;
}
