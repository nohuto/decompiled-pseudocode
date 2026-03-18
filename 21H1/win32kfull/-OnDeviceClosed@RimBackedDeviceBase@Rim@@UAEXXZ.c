/*
 * XREFs of ?OnDeviceClosed@RimBackedDeviceBase@Rim@@UAEXXZ @ 0x1A1668
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __thiscall Rim::RimBackedDeviceBase::OnDeviceClosed(PVOID *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    ObfDereferenceObject(this[4]);
    this[4] = 0;
    *((_BYTE *)this + 8) = 0;
  }
}
