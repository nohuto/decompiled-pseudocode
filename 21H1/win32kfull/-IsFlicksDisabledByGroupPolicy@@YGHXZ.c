/*
 * XREFs of ?IsFlicksDisabledByGroupPolicy@@YGHXZ @ 0x99786
 * Callers:
 *     _ReadPointerDeviceSettingsFull@8 @ 0xF3780 (_ReadPointerDeviceSettingsFull@8.c)
 * Callees:
 *     _GetLocalMachineRegistryDWORDValues@12 @ 0x997D6 (_GetLocalMachineRegistryDWORDValues@12.c)
 */

int __thiscall IsFlicksDisabledByGroupPolicy(void *this)
{
  int v1; // esi
  int LocalMachineRegistryDWORDValues; // eax
  _DWORD v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  v4[0] = L"PreventFlicks";
  v1 = 0;
  v4[1] = 0;
  v5 = 0;
  LocalMachineRegistryDWORDValues = GetLocalMachineRegistryDWORDValues(
                                      this,
                                      L"\\Software\\Policies\\Microsoft\\TabletPC",
                                      v4);
  if ( v5 )
  {
    if ( LocalMachineRegistryDWORDValues >= 0 )
      return 1;
  }
  else if ( GetDWORDSettingValues(6, v4, 1) && v5 == 1 )
  {
    return 1;
  }
  return v1;
}
