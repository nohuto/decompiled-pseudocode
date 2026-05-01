/*
 * XREFs of ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x180208FD0
 * Callers:
 *     ??1ShellFeedsDesktopExperienceView@@UEAA@XZ @ 0x1800A3A28 (--1ShellFeedsDesktopExperienceView@@UEAA@XZ.c)
 *     ?Dispose@ShellFeedsDesktopExperienceView@@UEAAJXZ @ 0x1800A41D0 (-Dispose@ShellFeedsDesktopExperienceView@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800A71A4 (-RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@_ea_1800A71A4.c)
 *     ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x180206914 (--1-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortan.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x18020697C (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 *     ??4?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180206A90 (--4-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortan.c)
 *     ?Dispose@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180207050 (-Dispose@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180207E8C (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x180207F48 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_180207F48.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x18020987C (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ?Dispose@CortanaDesktopExperienceView@@UEAAJXZ @ 0x18020B710 (-Dispose@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180210BB8 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x180210C74 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_180210C74.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)8);
}
