/*
 * XREFs of PiSwInstanceInfoInit @ 0x1407540E0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpConcatPWSTR @ 0x140680BB8 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x1406AA0A8 (PnpAllocatePWSTR.c)
 *     PiSwInstanceInfoFree @ 0x1407200C0 (PiSwInstanceInfoFree.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2uLL);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0xC8uLL, 0x57706E50u, a1 + 1), PWSTR < 0) )
    PiSwInstanceInfoFree((__int64)a1);
  return (unsigned int)PWSTR;
}
