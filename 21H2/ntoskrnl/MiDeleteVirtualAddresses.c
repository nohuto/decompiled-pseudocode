/*
 * XREFs of MiDeleteVirtualAddresses @ 0x14030FE40
 * Callers:
 *     MiDeleteRotateAndStopFaults @ 0x140200AEC (MiDeleteRotateAndStopFaults.c)
 *     MiDeleteFinalPageTables @ 0x140216EE8 (MiDeleteFinalPageTables.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1406E2C14 (MiUnmapLockedPagesInUserSpace.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 */

signed __int64 __fastcall MiDeleteVirtualAddresses(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r9d
  _KPROCESS *Process; // rdi
  signed __int64 result; // rax
  int v8; // [rsp+30h] [rbp-18h]

  v8 = a4 | 0x80;
  v5 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(a2) = 17;
  MiDeletePagablePteRange((_DWORD)Process + 1664, a2, a1, v5, a3, 0, v8, a5);
  result = *(_QWORD *)(a5 + 32);
  if ( result )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], -result);
  return result;
}
