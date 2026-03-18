/*
 * XREFs of IopUpdateOtherTransferCount @ 0x140210C10
 * Callers:
 *     IopUpdateIrpTransferCount @ 0x1403F0538 (IopUpdateIrpTransferCount.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IopUpdateOtherTransferCount(unsigned int a1, __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  result = a1;
  if ( a2 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1592), a1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->OtherTransferCount += result;
  }
  __addgsqword(0x2EF8u, result);
  return result;
}
