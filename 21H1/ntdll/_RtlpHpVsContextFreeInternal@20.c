/*
 * XREFs of _RtlpHpVsContextFreeInternal@20 @ 0x4B37F546
 * Callers:
 *     _RtlpHpVsContextFreeList@12 @ 0x4B37F65A (_RtlpHpVsContextFreeList@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpVsChunkFree@20 @ 0x4B37EC44 (_RtlpHpVsChunkFree@20.c)
 *     _RtlpHpVsSubsegmentFree@12 @ 0x4B37FE9A (_RtlpHpVsSubsegmentFree@12.c)
 */

int __thiscall RtlpHpVsContextFreeInternal(int SRWLock, int a2, int a3, int a4)
{
  unsigned int v5; // edx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx

  v5 = a2;
  v6 = a2 ^ RtlpHpHeapGlobals ^ *(_DWORD *)a2;
  v7 = 0;
  if ( v6 < 0 )
  {
    v8 = a2 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a2 + 4);
LABEL_8:
    v8 = (unsigned __int8)v8;
    goto LABEL_10;
  }
  if ( (v6 & 0x7FFF0000) != 0 )
  {
    v5 = a2 - 8 * (HIWORD(v6) & 0x7FFF);
    if ( ((v5 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v5) & 0x80000000) != 0 )
    {
LABEL_7:
      v8 = v5 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v5 + 4);
      goto LABEL_8;
    }
    v9 = ((v5 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v5) >> 16) & 0x7FFF;
    if ( v9 )
    {
      v5 += -8 * v9;
      goto LABEL_7;
    }
  }
  v8 = 0;
LABEL_10:
  v10 = (v5 - (v8 << 12)) & 0xFFFFF000;
  if ( (((unsigned __int16)(*(_WORD *)(v10 + 20) ^ *(_WORD *)(v10 + 22)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, SRWLock ^ *(_DWORD *)(SRWLock + 128), v10, 0, 0, 0);
  }
  else if ( v6 < 0 )
  {
    if ( RtlpHpVsChunkFree(SRWLock, v10, (unsigned int *)a2, a3, a4) )
    {
      if ( (a3 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a4 + 4));
        *(_DWORD *)(a4 + 4) = 0;
      }
      RtlpHpVsSubsegmentFree(a3);
      if ( (a3 & 1) == 0 )
      {
        *(_DWORD *)a4 = 0;
        *(_DWORD *)(a4 + 4) = 0;
        *(_DWORD *)(a4 + 8) = 0;
        *(_DWORD *)(a4 + 4) = SRWLock;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      }
    }
    return 1;
  }
  else
  {
    RtlpLogHeapFailure(8, SRWLock ^ *(_DWORD *)(SRWLock + 128), a2, 0, 0, 0);
  }
  return v7;
}
