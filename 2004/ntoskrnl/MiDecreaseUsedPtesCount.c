/*
 * XREFs of MiDecreaseUsedPtesCount @ 0x14034EF54
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiReducePteUseCount @ 0x1403EE930 (MiReducePteUseCount.c)
 *     MiUpdateAwePageTable @ 0x140548B64 (MiUpdateAwePageTable.c)
 *     MiDeleteLargeUserPde @ 0x14054A4BC (MiDeleteLargeUserPde.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtesCount(ULONG_PTR BugCheckParameter2, __int64 BugCheckParameter4, __int64 a3)
{
  unsigned __int64 v4; // r9
  int v5; // edi
  __int64 result; // rax
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = HIWORD(*(_DWORD *)(BugCheckParameter2 + 16)) & 0x3FF;
  v5 = BugCheckParameter4;
  if ( v4 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v4, (unsigned int)BugCheckParameter4);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7, BugCheckParameter4, a3, v4);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  result = ((unsigned int)(*(_QWORD *)(BugCheckParameter2 + 16) >> 16) & 0x3FF) - v5;
  *(_QWORD *)(BugCheckParameter2 + 16) ^= ((unsigned int)*(_QWORD *)(BugCheckParameter2 + 16) ^ ((((*(_QWORD *)(BugCheckParameter2 + 16) >> 16) & 0x3FF)
                                                                                                - v5) << 16)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
