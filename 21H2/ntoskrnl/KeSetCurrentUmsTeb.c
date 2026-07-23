/*
 * XREFs of KeSetCurrentUmsTeb @ 0x140526F14
 * Callers:
 *     KeUnInitializeUmsThread @ 0x1408BD848 (KeUnInitializeUmsThread.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E9A4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeSetCurrentUmsTeb(struct _KTHREAD *CurrentThread, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
  {
    result = a2;
    __writemsr(0xC0000102, a2);
  }
  return result;
}
