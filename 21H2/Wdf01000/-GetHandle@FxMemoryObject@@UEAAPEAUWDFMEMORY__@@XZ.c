/*
 * XREFs of ?GetHandle@FxMemoryObject@@UEAAPEAUWDFMEMORY__@@XZ @ 0x1C00356C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

WDFMEMORY__ *__fastcall FxMemoryObject::GetHandle(FxMemoryObject *this)
{
  return (WDFMEMORY__ *)FxObject::GetObjectHandleUnchecked((FxMemoryObject *)((char *)this - 104));
}
