/*
 * XREFs of IopUpdateWriteTransferCount @ 0x140269CB0
 * Callers:
 *     IopUpdateIrpTransferCount @ 0x1403F116C (IopUpdateIrpTransferCount.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IopUpdateWriteTransferCount(unsigned int a1, __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  result = a1;
  if ( a2 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1584), a1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->WriteTransferCount += result;
  }
  __addgsqword(0x2EF0u, result);
  return result;
}
