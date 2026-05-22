/*
 * XREFs of ?Release@RegistryWatcher@@UEAAKXZ @ 0x1800375E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall RegistryWatcher::Release(RegistryWatcher *this)
{
  return RefCountedObject::Release(this);
}
