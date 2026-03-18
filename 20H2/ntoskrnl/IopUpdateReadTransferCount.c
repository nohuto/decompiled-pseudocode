/*
 * XREFs of IopUpdateReadTransferCount @ 0x140209EE0
 * Callers:
 *     IopUpdateIrpTransferCount @ 0x1403F0538 (IopUpdateIrpTransferCount.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IopUpdateReadTransferCount(unsigned int a1, __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  result = a1;
  if ( a2 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1576), a1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->ReadTransferCount += result;
  }
  __addgsqword(0x2EE8u, result);
  return result;
}
