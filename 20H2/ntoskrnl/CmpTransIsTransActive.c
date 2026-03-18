/*
 * XREFs of CmpTransIsTransActive @ 0x1404EB18C
 * Callers:
 *     CmpReportNotifyHelper @ 0x1405F38C0 (CmpReportNotifyHelper.c)
 * Callees:
 *     CmpTransGetTransPtr @ 0x140875508 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
