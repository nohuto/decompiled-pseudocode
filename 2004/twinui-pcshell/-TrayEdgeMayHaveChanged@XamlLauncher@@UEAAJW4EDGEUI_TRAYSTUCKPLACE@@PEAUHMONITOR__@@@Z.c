/*
 * XREFs of ?TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x18032FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x1803310D8 (-TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall XamlLauncher::TrayEdgeMayHaveChanged(__int64 a1)
{
  unsigned int v1; // ebx
  int HaveChanged; // eax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 240) )
    return 2147943568LL;
  HaveChanged = ImmersiveMonitorHelper::TrayEdgeMayHaveChanged(*(_QWORD *)(a1 + 120));
  if ( HaveChanged < 0 )
    return (unsigned int)HaveChanged;
  return v1;
}
