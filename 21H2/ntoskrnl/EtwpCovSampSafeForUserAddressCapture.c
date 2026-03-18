/*
 * XREFs of EtwpCovSampSafeForUserAddressCapture @ 0x140460F1A
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x140635A00 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureSample @ 0x140636520 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     MmCanThreadFault @ 0x140297EF0 (MmCanThreadFault.c)
 */

__int64 __fastcall EtwpCovSampSafeForUserAddressCapture(int a1, BOOL *a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v5; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v5 = (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 || !CurrentThread->Teb;
  *a2 = v5;
  if ( CurrentIrql >= 2u
    || KeGetCurrentThread()->WaitBlock[3].SpareLong
    || !MmCanThreadFault()
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
