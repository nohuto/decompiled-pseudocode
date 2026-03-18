/*
 * XREFs of ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0067F10
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C003F850 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) == 1;
}
