/*
 * XREFs of RtlpHeapTrkDumpStacks @ 0x4B3646AA
 * Callers:
 *     _RtlpHeapTrkLeakCallback@24 @ 0x4B364B50 (_RtlpHeapTrkLeakCallback@24.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     RtlpHeapTrkReportResult @ 0x4B364CBD (RtlpHeapTrkReportResult.c)
 */

char RtlpHeapTrkDumpStacks()
{
  int v0; // edi
  unsigned int v1; // esi
  _DWORD *v2; // edx
  int v3; // ecx
  int v4; // eax
  bool v5; // cf
  _DWORD *v6; // edx
  int v7; // ecx
  int v8; // eax
  char v9; // cl
  unsigned int v10; // esi
  int v11; // ecx
  int *v12; // ebx
  int v13; // ecx
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v0 = 0;
  if ( TrkContext )
  {
    v1 = 0;
    for ( *((_DWORD *)TrkContext + 10) = dword_4B3A6C58; v1 < dword_4B3A6D8C; ++v1 )
    {
      v2 = TrkContext;
      v3 = *(_DWORD *)(dword_4B3A6958 + 4 * v1);
      v4 = *(_DWORD *)(v3 + 16);
      v5 = __CFADD__(v4, *((_DWORD *)TrkContext + 12));
      *((_DWORD *)TrkContext + 12) += v4;
      v2[13] += *(_DWORD *)(v3 + 20) + v5;
      v6 = TrkContext;
      v7 = *(_DWORD *)(dword_4B3A6958 + 4 * v1);
      v8 = *(_DWORD *)(v7 + 24);
      v5 = __CFADD__(v8, *((_DWORD *)TrkContext + 14));
      *((_DWORD *)TrkContext + 14) += v8;
      v6[15] += *(_DWORD *)(v7 + 28) + v5;
    }
    v9 = 0;
    v10 = 0;
    v15 = 0;
    while ( 1 )
    {
      v11 = v9 & 0xF;
      v16 = v11;
      v12 = *(int **)(v10 + dword_4B3A6C5C);
      if ( _interlockedbittestandset(*(volatile signed __int32 **)(dword_4B3A6D90 + 4 * v11), 0) )
        break;
      if ( v12 != (int *)(v10 + dword_4B3A6C5C) )
      {
        while ( 1 )
        {
          v13 = *((unsigned __int16 *)v12 + 4);
          v12[3] = ++v0;
          if ( !(unsigned __int8)RtlpHeapTrkReportResult(4 * v13 + 16, 0, v0, v13, v12 + 4, 4 * v13) )
            break;
          v12 = (int *)*v12;
          if ( v12 == (int *)(v10 + dword_4B3A6C5C) )
          {
            v11 = v16;
            goto LABEL_10;
          }
        }
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D90 + 4 * v16));
        return 0;
      }
LABEL_10:
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D90 + 4 * v11));
      v10 += 8;
      v9 = ++v15;
      if ( v10 >= 0xF778 )
        return 1;
    }
  }
  return 0;
}
