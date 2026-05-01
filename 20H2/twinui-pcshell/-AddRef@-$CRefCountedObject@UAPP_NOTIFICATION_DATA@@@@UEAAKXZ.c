/*
 * XREFs of ?AddRef@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x18008A030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedObject<APP_NOTIFICATION_DATA>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
}
