/*
 * XREFs of ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180160D90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x180140BD4 (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x18016031C (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x180161258 (-_EnsureCapacity@-$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::RegisterForDesktopVisibilityChanges(
        _QWORD *a1,
        unsigned int a2,
        struct IUnknown *a3,
        unsigned int *a4)
{
  unsigned int *v8; // rax
  unsigned int *v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  unsigned int **v12; // rdx

  *a4 = 0;
  v8 = (unsigned int *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = a2;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = GlobalInterfaceTable::Marshal(a3, &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84, v9);
    if ( v10 >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v10 = 0;
      v11 = a1[33];
      if ( v11 != a1[35]
        || (v10 = CTSimpleArray<CImmersiveMode::DesktopVisibilityChangeListener *,4294967294,CTPolicyLocalMem<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::DesktopVisibilityChangeListener *>>::_EnsureCapacity(
                    a1 + 32,
                    v11 + 1),
            v10 >= 0) )
      {
        v12 = (unsigned int **)(a1[32] + 8 * a1[33]++);
        if ( v12 )
          *v12 = v9;
      }
      if ( v10 >= 0 )
      {
        *a4 = *v9;
        v9 = 0LL;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
    CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'((CImmersiveMode::DesktopVisibilityChangeListener *)v9);
  return (unsigned int)v10;
}
