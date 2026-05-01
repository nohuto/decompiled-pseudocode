/*
 * XREFs of ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x18043E734
 * Callers:
 *     ??1?$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800B48C0 (--1-$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_s.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800B4DEC (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??_G?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAPEAXI@Z @ 0x1800B51F4 (--_G-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabH.c)
 *     ??1?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAA@XZ @ 0x18043E568 (--1-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Wind.c)
 *     ??1?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x18043E574 (--1-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18043E6B4 (--1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEA.c)
 *     ??_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18043E9DC (--_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UE.c)
 *     ??_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z @ 0x18043EA24 (--_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x18044208C (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 */

void __fastcall winrt::immersive_shell_component::~immersive_shell_component(winrt::immersive_shell_component *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 9);
  std::vector<winrt::immersive_shell_component::service_description>::_Tidy((char *)this + 48);
  winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::~root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>();
}
