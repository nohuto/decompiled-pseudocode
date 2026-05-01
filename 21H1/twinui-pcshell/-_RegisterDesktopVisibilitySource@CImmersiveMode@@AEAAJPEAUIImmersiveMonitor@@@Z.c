/*
 * XREFs of ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18013CF70
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x18013BF70 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18013C310 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z @ 0x18013619C (--0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x18013B5E0 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x18013BCE4 (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x18013CCA8 (-_EnsureCapacity@-$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18013CD84 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     WPP_SF_ddddd @ 0x18013DA48 (WPP_SF_ddddd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveMode::_RegisterDesktopVisibilitySource(CImmersiveMode *this, IUnknown *a2)
{
  HRESULT v4; // edi
  unsigned __int64 i; // rbx
  CDesktopVisibilityChangeHelper *v6; // rax
  CDesktopVisibilityChangeHelper *v7; // rax
  CDesktopVisibilityChangeHelper *v8; // rbx
  void *v9; // rax
  void *v10; // r8
  HWND *v11; // rbx
  __int64 v12; // rdx
  HWND **v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  void *ppvOut; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+48h] [rbp-38h] BYREF
  int v19; // [rsp+4Ch] [rbp-34h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v22[4]; // [rsp+68h] [rbp-18h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
         &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
         &ppvOut);
  if ( v4 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    for ( i = 0LL; i < *((_QWORD *)this + 55); ++i )
    {
      if ( (unsigned int)SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 54) + 8 * i), a2) )
        v4 = -2147467260;
    }
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v4 >= 0 )
    {
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v20 = 0LL;
      v6 = (CDesktopVisibilityChangeHelper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v6
        && (v7 = CDesktopVisibilityChangeHelper::CDesktopVisibilityChangeHelper(
                   v6,
                   (struct IDesktopVisibilityChangesNotification *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL))),
            (v8 = v7) != 0LL) )
      {
        v4 = (**(__int64 (__fastcall ***)(CDesktopVisibilityChangeHelper *, GUID *, __int64 *))v7)(
               v7,
               &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
               &v20);
        (*(void (__fastcall **)(CDesktopVisibilityChangeHelper *))(*(_QWORD *)v8 + 16LL))(v8);
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(void *, __int64, __int64, int *))(*(_QWORD *)ppvOut + 32LL))(
                 ppvOut,
                 1LL,
                 v20,
                 &v19);
          if ( v4 < 0 )
            goto LABEL_31;
          v4 = (*(__int64 (__fastcall **)(void *, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 0LL, &v18);
          if ( v4 < 0 )
            goto LABEL_31;
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v21[0] = v9;
          v11 = v9
              ? (HWND *)CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
                          (__int64)v9,
                          a2,
                          v19,
                          v18 != 0,
                          *((struct IUnknown **)this + 48),
                          *((_DWORD *)this + 84))
              : 0LL;
          if ( v11 )
          {
            v4 = 0;
            v12 = *((_QWORD *)this + 55);
            if ( v12 != *((_QWORD *)this + 57)
              || (v4 = CTSimpleArray<CImmersiveMode::DesktopVisibilityChangeListener *,4294967294,CTPolicyLocalMem<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::DesktopVisibilityChangeListener *>>::_EnsureCapacity(
                         (__int64)this + 432,
                         v12 + 1,
                         v10),
                  v4 >= 0) )
            {
              v13 = (HWND **)(*((_QWORD *)this + 54) + 8 * (*((_QWORD *)this + 55))++);
              if ( v13 )
                *v13 = v11;
            }
          }
          else
          {
            v4 = -2147024882;
          }
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          if ( v4 >= 0 )
          {
            v11 = 0LL;
            v21[1] = 0LL;
            CImmersiveMode::_HandleDesktopVisibilityChange(this, a2, v18 != 0, 1);
            if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
              && ((int (__fastcall *)(IUnknown *, _DWORD *))a2->lpVtbl[3].QueryInterface)(a2, v22) >= 0
              && ((int (__fastcall *)(IUnknown *, _QWORD *))a2->lpVtbl[1].QueryInterface)(a2, v21) >= 0
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_ddddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v14, v15, v22[0], v22[1], v22[2], v22[3], v21[0]);
            }
          }
          if ( v11 )
            CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(v11);
          if ( v4 < 0 )
          {
LABEL_31:
            if ( v19 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 40LL))(ppvOut);
          }
        }
      }
      else
      {
        v4 = -2147024882;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v4;
}
