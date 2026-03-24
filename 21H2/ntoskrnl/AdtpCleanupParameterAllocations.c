/*
 * XREFs of AdtpCleanupParameterAllocations @ 0x1403C05C4
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1405C2164 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1407B86D8 (AdtpWriteToEtw.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall AdtpCleanupParameterAllocations(_BYTE *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR *v4; // rdi
  __int64 v5; // rsi
  PSLIST_ENTRY result; // rax

  if ( (_DWORD)a3 )
  {
    v4 = (ULONG_PTR *)a2;
    v5 = (unsigned int)a3;
    do
    {
      if ( *a1 )
        result = ExFreeHeapPool(*v4, a2, a3, a4);
      ++a1;
      v4 += 2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
