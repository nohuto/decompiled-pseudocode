/*
 * XREFs of ?Initialize@RimBackedDeviceBase@Rim@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1A1648
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __thiscall Rim::RimBackedDeviceBase::Initialize(
        Rim::RimBackedDeviceBase *this,
        struct RawInputManagerDeviceObject *a2)
{
  int result; // eax

  result = RawInputManagerDeviceObjectReference(a2);
  if ( result >= 0 )
    *((_DWORD *)this + 3) = a2;
  return result;
}
