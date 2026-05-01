/*
 * XREFs of ?GetRuntimeClassName@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18019A780
 * Callers:
 *     ?GetRuntimeClassName@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800F2B00 (-GetRuntimeClassName@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAA.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::GetRuntimeClassName(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.CustomShell.CustomShellExperienceRepository", 0x42u, a2);
}
