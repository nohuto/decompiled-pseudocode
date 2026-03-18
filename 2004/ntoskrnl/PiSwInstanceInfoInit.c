/*
 * XREFs of PiSwInstanceInfoInit @ 0x140738874
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1405DBA78 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140645A50 (PnpConcatPWSTR.c)
 *     PiSwInstanceInfoFree @ 0x140721F80 (PiSwInstanceInfoFree.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2uLL);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0xC8uLL, 0x57706E50u, a1 + 1), PWSTR < 0) )
    PiSwInstanceInfoFree((__int64)a1);
  return (unsigned int)PWSTR;
}
