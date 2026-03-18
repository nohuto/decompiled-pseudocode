/*
 * XREFs of PiSwInstanceInfoInit @ 0x1407661D0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwInstanceInfoFree @ 0x140661D3C (PiSwInstanceInfoFree.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x14078C9E8 (PnpConcatPWSTR.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(__int64 a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (char)L"SWD\\");
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16)), PWSTR < 0) )
    PiSwInstanceInfoFree(a1);
  return (unsigned int)PWSTR;
}
