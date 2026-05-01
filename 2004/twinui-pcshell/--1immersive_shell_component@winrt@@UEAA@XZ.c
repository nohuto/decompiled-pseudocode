/*
 * XREFs of ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1804625D4
 * Callers:
 *     ??1?$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C7694 (--1-$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_s.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C7BC0 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??_G?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAPEAXI@Z @ 0x1800C7FC4 (--_G-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabH.c)
 *     ??1?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAA@XZ @ 0x1800DC3F0 (--1-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimm.c)
 *     ??1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800DC46C (--1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAA@XZ @ 0x180462408 (--1-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Wind.c)
 *     ??1?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x180462414 (--1-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180462554 (--1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEA.c)
 *     ??_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18046287C (--_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UE.c)
 *     ??_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z @ 0x1804628C4 (--_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x180465EFC (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 */

void __fastcall winrt::immersive_shell_component::~immersive_shell_component(winrt::immersive_shell_component *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 9);
  std::vector<winrt::immersive_shell_component::service_description>::_Tidy((char *)this + 48);
  winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::~root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>();
}
