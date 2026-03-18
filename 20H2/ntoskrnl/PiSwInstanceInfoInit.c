/*
 * XREFs of PiSwInstanceInfoInit @ 0x140747784
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x140640358 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140647040 (PnpConcatPWSTR.c)
 *     PiSwInstanceInfoFree @ 0x140730090 (PiSwInstanceInfoFree.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2uLL);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0xC8uLL, 0x57706E50u, a1 + 1), PWSTR < 0) )
    PiSwInstanceInfoFree((__int64)a1);
  return (unsigned int)PWSTR;
}
