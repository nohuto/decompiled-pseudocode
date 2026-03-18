/*
 * XREFs of CcAllocateInitializeMbcb @ 0x14034C444
 * Callers:
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_QWORD *CcAllocateInitializeMbcb()
{
  _QWORD *result; // rax
  _QWORD *v1; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x624D6343u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0xC0uLL);
    *(_WORD *)v1 = 763;
    v1[6] = v1 + 2;
    v1[7] = v1 + 2;
    v1[2] = v1 + 6;
    v1[3] = v1 + 6;
    *((_DWORD *)v1 + 18) = -1;
    v1[5] = -1LL;
    v1[11] = v1 + 12;
    return v1;
  }
  return result;
}
