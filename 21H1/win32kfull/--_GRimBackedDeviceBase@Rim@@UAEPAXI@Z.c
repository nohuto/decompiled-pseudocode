/*
 * XREFs of ??_GRimBackedDeviceBase@Rim@@UAEPAXI@Z @ 0x1A148D
 * Callers:
 *     <none>
 * Callees:
 *     ?UnInitialize@RimBackedDeviceBase@Rim@@UAEXXZ @ 0x1A172A (-UnInitialize@RimBackedDeviceBase@Rim@@UAEXXZ.c)
 */

Rim::RimBackedDeviceBase *__thiscall Rim::RimBackedDeviceBase::`scalar deleting destructor'(
        Rim::RimBackedDeviceBase *this,
        char a2)
{
  *(_DWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  Rim::RimBackedDeviceBase::UnInitialize(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
