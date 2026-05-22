/*
 * XREFs of ?AddRef@?QIHotKeyClientOwner@@PenEventsDispatcherPrincipal@@UEAAKXZ @ 0x18001DD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _AddRef__QIHotKeyClientOwner__PenEventsDispatcherPrincipal__UEAAKXZ(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 - 32));
}
