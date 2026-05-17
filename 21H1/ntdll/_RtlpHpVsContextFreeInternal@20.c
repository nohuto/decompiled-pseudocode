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

int __fastcall RtlpHpVsContextFreeInternal(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // edx
  int v7; // edi
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edx

  v6 = a3;
  v7 = a3 ^ RtlpHpHeapGlobals ^ *(_DWORD *)a3;
  v8 = 0;
  if ( v7 < 0 )
  {
    v9 = a3 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a3 + 4);
LABEL_8:
    v9 = (unsigned __int8)v9;
    goto LABEL_10;
  }
  if ( (v7 & 0x7FFF0000) != 0 )
  {
    v6 = a3 - 8 * (HIWORD(v7) & 0x7FFF);
    if ( ((v6 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v6) & 0x80000000) != 0 )
    {
LABEL_7:
      v9 = v6 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v6 + 4);
      goto LABEL_8;
    }
    v10 = ((v6 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v6) >> 16) & 0x7FFF;
    if ( v10 )
    {
      v6 += -8 * v10;
      goto LABEL_7;
    }
  }
  v9 = 0;
LABEL_10:
  v11 = (v6 - (v9 << 12)) & 0xFFFFF000;
  if ( (((unsigned __int16)(*(_WORD *)(v11 + 20) ^ *(_WORD *)(v11 + 22)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), v11, 0, 0, 0);
  }
  else if ( v7 < 0 )
  {
    if ( RtlpHpVsChunkFree(a1, v11, (unsigned int *)a3, a4, a5) )
    {
      if ( (a4 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(*(volatile signed __int32 **)(a5 + 4));
        *(_DWORD *)(a5 + 4) = 0;
      }
      RtlpHpVsSubsegmentFree(a4);
      if ( (a4 & 1) == 0 )
      {
        *(_DWORD *)a5 = 0;
        *(_DWORD *)(a5 + 4) = 0;
        *(_DWORD *)(a5 + 8) = 0;
        *(_DWORD *)(a5 + 4) = a1;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
      }
    }
    return 1;
  }
  else
  {
    RtlpLogHeapFailure(8, a1 ^ *(_DWORD *)(a1 + 128), a3, 0, 0, 0);
  }
  return v8;
}
