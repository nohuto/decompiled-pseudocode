/*
 * XREFs of MiRetardMdl @ 0x14052B820
 * Callers:
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MiUnlockFlushMdl @ 0x14022856C (MiUnlockFlushMdl.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     MiZeroPageWrite @ 0x14034D928 (MiZeroPageWrite.c)
 *     MmUnmapReservedMapping @ 0x14052C7C0 (MmUnmapReservedMapping.c)
 *     MiPfCompleteCoalescedIo @ 0x140533BBC (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x140537C90 (MiFlushComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRetardMdl(__int64 a1)
{
  __int64 *v1; // r10
  __int64 *v3; // r9
  int v4; // edx
  __int64 v5; // r11
  __int64 *i; // rbx
  __int16 v7; // cx
  unsigned int v8; // edx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 48);
  v3 = (__int64 *)(a1
                 + 48
                 + 8
                 * ((*(unsigned int *)(a1 + 40)
                   + 4095LL
                   + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12));
  v4 = 0;
  do
  {
    v5 = *v3;
    for ( i = v3 + 1; v3 != v1; --v3 )
      *v3 = *(v3 - 1);
    ++v1;
    ++v4;
    *v3 = v5 & 0x7FFFFFFFFFFFFFFFLL;
    v3 = i;
  }
  while ( v5 >= 0 );
  v7 = *(_WORD *)(a1 + 10);
  v8 = v4 << 12;
  *(_DWORD *)(a1 + 40) += v8;
  *(_QWORD *)(a1 + 32) -= v8;
  if ( (v7 & 1) != 0 )
    *(_QWORD *)(a1 + 24) -= v8;
  result = v8;
  *(_WORD *)(a1 + 10) = v7 & 0xFDFF;
  return result;
}
