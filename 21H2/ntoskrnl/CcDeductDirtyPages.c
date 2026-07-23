/*
 * XREFs of CcDeductDirtyPages @ 0x14031DB3C
 * Callers:
 *     CcDeleteBcbs @ 0x140250A10 (CcDeleteBcbs.c)
 *     CcDeleteMbcb @ 0x1402FD68C (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14031AC90 (CcAcquireByteRangeForWrite.c)
 * Callees:
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeductDirtyPages(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = a2;
  if ( a1 )
    result = CcGetPartition(a1, a2, a3);
  else
    result = *((_QWORD *)PspSystemPartition + 1);
  *(_QWORD *)(result + 640) -= v3;
  if ( a1 )
  {
    if ( (_DWORD)v3 == -1 )
      KeBugCheckEx(0x34u, 0x1637uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= v3;
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), -v3);
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      result = *(_QWORD *)(a1 + 240);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(result + 24), -v3);
    }
  }
  return result;
}
