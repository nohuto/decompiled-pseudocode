/*
 * XREFs of CcComputeNextScanTime @ 0x14024D398
 * Callers:
 *     CcLazyWriteScan @ 0x1403005E4 (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CcComputeNextScanTime(_DWORD *a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 result; // rax
  signed __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // r8d

  *a3 = 0LL;
  result = (unsigned int)a1[50];
  if ( a1[240] < (unsigned int)result )
  {
    v5 = MEMORY[0xFFFFF78000000320];
    result = 0x9896800uLL / KeMaximumIncrement;
    v6 = *a2;
    v7 = a1[34] + 1;
    a1[34] = v7;
    if ( v6 != 0x7FFFFFFFFFFFFFFFLL && (__int64)(v6 + result) > v5 )
    {
      a1[34] = 0;
      *a3 = result + v6 - v5;
      v7 = 0;
    }
    if ( v7 >= CcMaxWorklessLazywriteScans )
    {
      a1[34] = 0;
      *a3 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  return result;
}
