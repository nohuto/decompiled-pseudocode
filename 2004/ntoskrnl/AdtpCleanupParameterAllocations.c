/*
 * XREFs of AdtpCleanupParameterAllocations @ 0x1403BD854
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1405BCD64 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1407A4924 (AdtpWriteToEtw.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 */

__int64 __fastcall AdtpCleanupParameterAllocations(_BYTE *a1, ULONG_PTR *a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 result; // rax

  if ( a3 )
  {
    v4 = a3;
    do
    {
      if ( *a1 )
        result = ExFreeHeapPool(*a2);
      ++a1;
      a2 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
