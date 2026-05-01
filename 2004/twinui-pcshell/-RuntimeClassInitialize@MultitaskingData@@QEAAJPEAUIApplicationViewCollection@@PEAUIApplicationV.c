/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x18038C488
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x18038BE24 (--$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicatio.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18038C5C0 (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@.c)
 *     ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180390BFC (-SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x180391D00 (-SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@.c)
 */

__int64 __fastcall MultitaskingData::RuntimeClassInitialize(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IVirtualDesktopManagerInternal *a5,
        struct IVirtualDesktopPinnedApps *a6,
        struct IVirtualDesktopNotificationService *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  const struct _GUID *v16; // rcx
  int Instance; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v22; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 7, a4);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  Instance = SwitchItemFactory_CreateInstance(v16, &v22);
  v18 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
    Instance = SwitchItemCollection_CreateInstance(v22, a2, a3, a11, a12, a13);
    v18 = Instance;
    if ( Instance >= 0 )
    {
      Instance = MultitaskingData::_InitializeVirtualDesktopComponents((MultitaskingData *)a1, a5, a6, a7);
      v18 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 8, a8);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 9, a9);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 10, a10);
        v18 = 0;
        goto LABEL_9;
      }
      v19 = 85LL;
    }
    else
    {
      v19 = 83LL;
    }
  }
  else
  {
    v19 = 82LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingdata.cpp",
    (const char *)(unsigned int)Instance);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  return v18;
}
