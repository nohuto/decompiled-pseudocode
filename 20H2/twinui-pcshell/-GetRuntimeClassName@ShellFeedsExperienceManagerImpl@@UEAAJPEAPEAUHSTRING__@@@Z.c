/*
 * XREFs of ?GetRuntimeClassName@ShellFeedsExperienceManagerImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18009C270
 * Callers:
 *     ?GetRuntimeClassName@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800F4990 (-GetRuntimeClassName@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ShellFeedsExperienceManagerImpl::GetRuntimeClassName(
        ShellFeedsExperienceManagerImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ShellFeedsExperienceManager", 0x3Du, a2);
}
