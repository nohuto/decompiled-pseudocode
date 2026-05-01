/*
 * XREFs of ??B?$ComPtr@VTabTipAdapter@KeyboardHosting@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800A447C
 * Callers:
 *     ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18005B380 (-Hide@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180089770 (-TakeKeyboardFocus@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034EEE0 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapter>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
