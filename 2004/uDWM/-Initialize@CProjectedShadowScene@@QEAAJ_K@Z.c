/*
 * XREFs of ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800BBDE4
 * Callers:
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180097DE4 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x180047F54 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z @ 0x1800BB248 (-GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Com.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800BB434 (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800BBBB8 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800BBFF0 (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 */

__int64 __fastcall CProjectedShadowScene::Initialize(CProjectedShadowScene *this, unsigned __int64 a2)
{
  struct CGlobalLightSet *GlobalLightSetForDesktop; // r14
  unsigned int v5; // esi
  __int64 v6; // rdx
  int ProjectedShadowReceiverVisual; // eax
  unsigned __int64 v8; // r9
  CProjectedShadowScene::CProjectedShadowSceneInstance *v9; // rax
  int SharedLightByType; // eax
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  CProjectedShadowScene::CProjectedShadowSceneInstance *v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+58h] [rbp+20h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GlobalLightSetForDesktop = CWindowList::GetGlobalLightSetForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a2);
  if ( !GlobalLightSetForDesktop )
  {
    v5 = -2147023728;
    v6 = 36LL;
LABEL_9:
    v8 = v5;
    goto LABEL_10;
  }
  ProjectedShadowReceiverVisual = CProjectedShadowScene::CreateProjectedShadowReceiverVisual(this, a2);
  v5 = ProjectedShadowReceiverVisual;
  if ( ProjectedShadowReceiverVisual < 0 )
  {
    v8 = (unsigned int)ProjectedShadowReceiverVisual;
    v6 = 38LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)v8);
    goto LABEL_30;
  }
  v9 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                 WPF::g_pProcessHeap,
                                                                 112LL);
  if ( v9 )
    v9 = CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v9);
  *((_QWORD *)this + 3) = v9;
  if ( !v9 )
  {
    v5 = -2147024882;
    v6 = 41LL;
    goto LABEL_9;
  }
  v21 = 0LL;
  SharedLightByType = CGlobalLightSet::GetSharedLightByType((__int64)GlobalLightSetForDesktop, 3, &v21);
  v11 = v21;
  v5 = SharedLightByType;
  if ( SharedLightByType >= 0 )
  {
    v14 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 3), v21, 0LL);
    v5 = v14;
    if ( v14 < 0 )
    {
      v12 = (unsigned int)v14;
      v13 = 45LL;
      goto LABEL_19;
    }
    v15 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                    WPF::g_pProcessHeap,
                                                                    112LL);
    if ( v15 )
      v15 = CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v15);
    *((_QWORD *)this + 4) = v15;
    if ( !v15 )
    {
      v5 = -2147024882;
      v13 = 48LL;
      v12 = 2147942414LL;
      goto LABEL_19;
    }
    v21 = 0LL;
    v16 = CGlobalLightSet::GetSharedLightByType((__int64)GlobalLightSetForDesktop, 4, &v21);
    v17 = v21;
    v5 = v16;
    if ( v16 >= 0 )
    {
      v16 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 4), v21, 1LL);
      v5 = v16;
      if ( v16 >= 0 )
      {
        v5 = 0;
LABEL_26:
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_28;
      }
      v18 = 52LL;
    }
    else
    {
      v18 = 51LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_26;
  }
  v12 = (unsigned int)SharedLightByType;
  v13 = 44LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)v12);
LABEL_28:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_30:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v5;
}
