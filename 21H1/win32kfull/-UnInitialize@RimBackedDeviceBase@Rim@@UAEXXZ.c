/*
 * XREFs of ?UnInitialize@RimBackedDeviceBase@Rim@@UAEXXZ @ 0x1A172A
 * Callers:
 *     ??_GRimBackedDeviceBase@Rim@@UAEPAXI@Z @ 0x1A148D (--_GRimBackedDeviceBase@Rim@@UAEPAXI@Z.c)
 *     ??1InkDevice@@UAE@XZ @ 0x1B0320 (--1InkDevice@@UAE@XZ.c)
 *     ?UnInitialize@InkDevice@@UAEXXZ @ 0x1B12FF (-UnInitialize@InkDevice@@UAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall Rim::RimBackedDeviceBase::UnInitialize(Rim::RimBackedDeviceBase *this)
{
  (*(void (__thiscall **)(Rim::RimBackedDeviceBase *))(*(_DWORD *)this + 16))(this);
  if ( *((_DWORD *)this + 3) )
  {
    RawInputManagerDeviceObjectDereference(*((_DWORD *)this + 3));
    *((_DWORD *)this + 3) = 0;
  }
}
