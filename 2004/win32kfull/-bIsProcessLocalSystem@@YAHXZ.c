/*
 * XREFs of ?bIsProcessLocalSystem@@YAHXZ @ 0x1C02893B8
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015A504 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0289310 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall bIsProcessLocalSystem(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EPROCESS *CurrentProcess; // rax

  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1, a2, a3);
  return bIsProcessLocalSystem(CurrentProcess);
}
