/*
 * XREFs of ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ @ 0x1804532B0
 * Callers:
 *     ??_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z @ 0x180453310 (--_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DesktopSingleViewShellExperiencePersonality::~DesktopSingleViewShellExperiencePersonality(
        DesktopSingleViewShellExperiencePersonality *this)
{
  *(_QWORD *)this = &DesktopSingleViewShellExperiencePersonality::`vftable';
  if ( *((_DWORD *)this + 8) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
