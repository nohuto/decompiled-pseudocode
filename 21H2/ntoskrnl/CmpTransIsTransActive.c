/*
 * XREFs of CmpTransIsTransActive @ 0x14053F16C
 * Callers:
 *     CmpReportNotifyHelper @ 0x140721910 (CmpReportNotifyHelper.c)
 * Callees:
 *     CmpTransGetTransPtr @ 0x1409196DC (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
