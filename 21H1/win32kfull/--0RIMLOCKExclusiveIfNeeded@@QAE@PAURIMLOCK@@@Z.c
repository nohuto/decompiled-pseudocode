/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z @ 0xCA066
 * Callers:
 *     _AllocateProcessHidTable@0 @ 0xC9520 (_AllocateProcessHidTable@0.c)
 *     ?CleanupFreedTLCInfo@@YGXXZ @ 0xC977A (-CleanupFreedTLCInfo@@YGXXZ.c)
 *     _AllocateAndLinkHidTLCInfo@8 @ 0xC97E6 (_AllocateAndLinkHidTLCInfo@8.c)
 *     _SearchHidTLCInfo@8 @ 0xCA014 (_SearchHidTLCInfo@8.c)
 *     _FreeHidTLCInfo@4 @ 0xD2BB8 (_FreeHidTLCInfo@4.c)
 *     ?SetHidPOCountToTLCInfo@@YGXGKH@Z @ 0x143E91 (-SetHidPOCountToTLCInfo@@YGXGKH@Z.c)
 *     _CleanupHidRequestList@0 @ 0x1441FF (_CleanupHidRequestList@0.c)
 * Callees:
 *     <none>
 */

RIMLOCKExclusiveIfNeeded *__thiscall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        PKTHREAD *a2)
{
  *(_DWORD *)this = 0;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_DWORD *)this = a2;
    RIMLockExclusive(a2);
  }
  return this;
}
