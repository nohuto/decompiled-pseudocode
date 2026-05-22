/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007B2E4
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B6B4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??B?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEBA_NXZ @ 0x180018610 (--B-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040560 (-DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800405E0 (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040678 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040748 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040854 (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040978 (-DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800409C8 (-DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x18006BCB4 (-IsInContact@ManipulationInjector@@QEAA_NXZ.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18008095C (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1800C3CD8 (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCGestureHandler::DownLevelTo2D(MPCGestureHandler *this, struct LegacyInputInfo *a2, __int64 *a3)
{
  ManipulationInjector *v6; // rbp
  __int64 v7; // rdx
  _QWORD *v8; // r8
  MPCSpatialGestureRecognizerHandler **v9; // rcx
  ManipulationInjector *v10; // rcx
  unsigned int v11; // eax
  struct tagPOINT v13; // [rsp+40h] [rbp+8h]

  if ( *((_DWORD *)a2 + 174) == *((_DWORD *)this + 228) || *((_DWORD *)a2 + 164) == 2 )
  {
    v6 = (MPCGestureHandler *)((char *)this + 80);
    if ( (ManipulationInjector::IsInContact((MPCGestureHandler *)((char *)this + 80)) || *(_BYTE *)(v7 + 472))
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 152LL))(*v8)
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 160LL))(*a3)
       || *((_BYTE *)a2 + 475))
      && (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) == 1 || *((_DWORD *)this + 228)) )
    {
      *((_DWORD *)v6 + 201) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 360LL))(*a3);
      if ( std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool((_QWORD *)this + 113) )
        MPCSpatialGestureRecognizerHandler::FeedRecognizer(*v9, a2);
      if ( !ManipulationInjector::IsInContact(v6) )
        ManipulationInjector::SetInjectionRect(v10, (const struct tagRECT *)((char *)a2 + 680));
      v13.x = (int)*((float *)a2 + 168);
      v13.y = (int)*((float *)a2 + 169);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 88LL))(*a3);
      switch ( *((_DWORD *)a2 + 164) )
      {
        case 1:
          MPCGestureHandler::DownLevelPressTo2D(this, a2, v11, v13);
          break;
        case 2:
          MPCGestureHandler::DownLevelReleaseTo2D(this, a2, v11, v13);
          break;
        case 3:
          MPCGestureHandler::DownLevelSelectTo2D(this, a2, v11, v13);
          break;
        case 4:
          MPCGestureHandler::DownLevelHoverTo2D(this, a2, v11, v13);
          break;
        case 5:
          MPCGestureHandler::DownLevelScrollTo2D(this, a2, v11, v13);
          break;
        case 6:
          MPCGestureHandler::DownLevelZoomTo2D(this, a2, v11, v13);
          break;
        case 7:
          MPCGestureHandler::DownLevelDragTo2D(this, a2, v11, v13);
          break;
      }
    }
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a3);
}
