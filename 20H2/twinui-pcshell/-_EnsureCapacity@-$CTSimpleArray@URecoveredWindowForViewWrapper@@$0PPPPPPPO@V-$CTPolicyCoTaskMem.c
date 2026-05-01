/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x1802AAB60
 * Callers:
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1802A8A8C (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1802ABA14 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1802AC6D8 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     ?s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z @ 0x1802AD790 (-s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z.c)
 *     ?ClipChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1803C1D80 (-ClipChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AE.c)
 *     ??$_InsertAt@AEBUCacheEntry@ScreenManager@@@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJAEBUCacheEntry@ScreenManager@@_K@Z @ 0x180404030 (--$_InsertAt@AEBUCacheEntry@ScreenManager@@@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPP.c)
 *     ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x18041764C (-AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@.c)
 *     ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x1804345B0 (-EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$CCoSimpleArray@V-$NativeString@V-$CoTa.c)
 *     ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x1804347D0 (-EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$CCoSimpleArray@V-$NativeString@V-$Co.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800671C0 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        void *a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v3 = 4294967294LL;
  result = 2147942522LL;
  if ( a2 <= 0xFFFFFFFE )
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = 0LL;
    if ( a2 > v6 )
    {
      v7 = 2 * v6;
      if ( is_mul_ok(v6, 2uLL) )
      {
        result = 0LL;
      }
      else
      {
        v7 = -1LL;
        result = 2147942934LL;
      }
      if ( (int)result >= 0 )
      {
        v8 = v7 - v6;
        v9 = v6 + 4096;
        if ( v8 <= 0x1000 )
          v9 = v7;
        v10 = v9;
        if ( a2 > v9 )
          v10 = a2;
        if ( v10 <= 0xFFFFFFFE )
        {
          v3 = v9;
          if ( a2 > v9 )
            v3 = a2;
        }
        v11 = 0LL;
        if ( is_mul_ok(v3, 0x18uLL) )
        {
          result = CTCoAllocPolicy::Realloc(&v11, (v3 * (unsigned __int128)0x18uLL) >> 64, *(void **)a1, 24 * v3, &v11);
          if ( (int)result >= 0 )
          {
            *(_QWORD *)a1 = v11;
            *(_QWORD *)(a1 + 24) = v3;
          }
        }
        else
        {
          return 2147942934LL;
        }
      }
    }
  }
  return result;
}
