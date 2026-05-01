/*
 * XREFs of ??B?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x18009B6B0
 * Callers:
 *     ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180050370 (-Hide@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180089520 (-TakeKeyboardFocus@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceView>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
