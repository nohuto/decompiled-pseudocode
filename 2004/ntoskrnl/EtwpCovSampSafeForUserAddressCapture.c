/*
 * XREFs of EtwpCovSampSafeForUserAddressCapture @ 0x1405AA27C
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x1405A8EC0 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureSample @ 0x1405A9C78 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402C8EE8 (MmCanThreadFault.c)
 */

__int64 __fastcall EtwpCovSampSafeForUserAddressCapture(int a1, BOOL *a2)
{
  __int64 CurrentIrql; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v5; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v5 = (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 || !CurrentThread->Teb;
  *a2 = v5;
  if ( (unsigned __int8)CurrentIrql >= 2u
    || KeGetCurrentThread()->WaitBlock[3].SpareLong
    || !MmCanThreadFault(CurrentIrql, (__int64)a2)
    || BYTE6(CurrentThread[1].Queue) && !a1
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    return 3221225659LL;
  }
  else
  {
    return 0LL;
  }
}
