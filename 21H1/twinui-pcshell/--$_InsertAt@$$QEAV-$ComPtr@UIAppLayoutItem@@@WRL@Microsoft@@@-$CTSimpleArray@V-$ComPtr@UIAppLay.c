/*
 * XREFs of ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1803813B4
 * Callers:
 *     ?v_AddChildToArray@CMultitaskingViewElementBase@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180383D10 (-v_AddChildToArray@CMultitaskingViewElementBase@@MEAAJPEAUIMultitaskingViewElement@@@Z.c)
 *     ?v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180387890 (-v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z.c)
 *     ?v_AddChildToArray@CVirtualDesktopContainerElement@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1803A0470 (-v_AddChildToArray@CVirtualDesktopContainerElement@@MEAAJPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x18045F728 (-_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z.c)
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x18045FB90 (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804602C4 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800CA4A3 (memmove_0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  unsigned __int64 v4; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  _QWORD *v10; // rcx

  v3 = 0;
  v4 = a3;
  if ( a3 < a1[1] )
    v4 = a1[1];
  v8 = v4 + 1;
  if ( v8 <= a1[3]
    || (v3 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)a1,
               v8,
               (void *)a3),
        v3 >= 0) )
  {
    v9 = a1[1];
    if ( a3 < v9 )
      memmove_0((void *)(*a1 + 8 * a3 + 8), (const void *)(*a1 + 8 * a3), 8 * (v9 - a3));
    a1[1] = v8;
    if ( v3 >= 0 )
    {
      v10 = (_QWORD *)(*a1 + 8 * a3);
      if ( v10 )
      {
        *v10 = 0LL;
        if ( v10 != a2 )
        {
          *v10 = *a2;
          *a2 = 0LL;
        }
      }
    }
  }
  return (unsigned int)v3;
}
