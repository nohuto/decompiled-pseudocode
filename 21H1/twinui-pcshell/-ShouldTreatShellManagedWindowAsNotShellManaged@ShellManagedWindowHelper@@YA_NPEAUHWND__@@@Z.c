/*
 * XREFs of ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x18012D250
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180037CC0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180136820 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x18028A550 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(
        ShellManagedWindowHelper *this,
        HWND a2)
{
  return GetPropW((HWND)this, L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") != 0LL;
}
