/*
 * XREFs of MiDecreaseUsedPtesCount @ 0x140232154
 * Callers:
 *     MiReducePteUseCount @ 0x14023210C (MiReducePteUseCount.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiUpdateAwePageTable @ 0x1405AC9A0 (MiUpdateAwePageTable.c)
 *     MiDeleteLargeUserPde @ 0x1405B07F4 (MiDeleteLargeUserPde.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtesCount(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // r9
  int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v3 = HIWORD(*(_DWORD *)(BugCheckParameter2 + 16)) & 0x3FF;
  v4 = BugCheckParameter4;
  if ( v3 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v3, (unsigned int)BugCheckParameter4);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  result = ((unsigned int)(*(_QWORD *)(BugCheckParameter2 + 16) >> 16) & 0x3FF) - v4;
  *(_QWORD *)(BugCheckParameter2 + 16) ^= ((unsigned int)*(_QWORD *)(BugCheckParameter2 + 16) ^ ((((*(_QWORD *)(BugCheckParameter2 + 16) >> 16) & 0x3FF)
                                                                                                - v4) << 16)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
