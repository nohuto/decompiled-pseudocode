/*
 * XREFs of _EditionOverrideUserTouchGestureSettings@8 @ 0xF3746
 * Callers:
 *     <none>
 * Callees:
 *     _GetLocalMachineRegistryDWORDValues@12 @ 0x997D6 (_GetLocalMachineRegistryDWORDValues@12.c)
 */

NTSTATUS __thiscall EditionOverrideUserTouchGestureSettings(void *this, int *a2, int *a3)
{
  int v3; // ecx
  int v4; // ecx

  GetLocalMachineRegistryDWORDValues((int)this, (int)L"\\Software\\Microsoft\\Wisp\\Touch", a2);
  GetLocalMachineRegistryDWORDValues(v3, (int)L"\\Software\\Microsoft\\Wisp\\Touch", a2 + 18);
  return GetLocalMachineRegistryDWORDValues(v4, (int)L"\\Software\\Microsoft\\Wisp\\MultiTouch", a3);
}
