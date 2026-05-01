/*
 * XREFs of ?Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z @ 0x18014F4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  return AgileRegistrationList::Register(this + 27, a2, a3);
}
