/*
 * XREFs of ?xxxVolumeUpDownComboSupported@@YGHXZ @ 0x15600D
 * Callers:
 *     ?xxxHandleVolumeUpDownCombo@@YGXXZ @ 0x155F5F (-xxxHandleVolumeUpDownCombo@@YGXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall xxxVolumeUpDownComboSupported(unsigned int a1)
{
  int result; // eax
  unsigned int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = a1;
  if ( _gPlatformRole != 8 )
    return 0;
  v2 = 0;
  CBaseInput::EnumDevices(
    _gpHidInput,
    &v2,
    (bool (__stdcall *)(struct DEVICEINFO *const, void *))lambda_7d86434210530c39d6a55ecb70af88ab_::_lambda_invoker_stdcall_);
  result = 1;
  if ( v2 > 1 )
    return 0;
  return result;
}
