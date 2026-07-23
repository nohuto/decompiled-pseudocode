/*
 * XREFs of _RtlpHpLfhSubsegmentIncBlockCounts@28 @ 0x4B377605
 * Callers:
 *     _RtlpHpLfhSubsegmentCommitBlock@12 @ 0x4B376E1B (_RtlpHpLfhSubsegmentCommitBlock@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __fastcall RtlpHpLfhSubsegmentIncBlockCounts(int a1, int a2, unsigned int a3, int a4, _DWORD *a5, int a6, char *a7)
{
  int v7; // ebx
  char v8; // al
  char v9; // cl
  volatile signed __int16 *v10; // edi
  int v11; // esi
  signed __int16 i; // dx
  signed __int16 v13; // ax
  int v14; // ecx
  volatile signed __int16 *v17; // [esp+14h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-10h]
  int v20; // [esp+20h] [ebp-Ch]
  int v21; // [esp+24h] [ebp-8h]
  char v22; // [esp+2Bh] [ebp-1h]

  v7 = a6;
  if ( a6 )
    v8 = *a7;
  else
    v8 = -1;
  v9 = *(_BYTE *)(a2 + 28);
  v22 = v8;
  v19 = 2 * (a3 >> v9);
  v10 = (volatile signed __int16 *)(a2 + *(unsigned __int16 *)(a2 + 30) + v19);
  v20 = -1;
  v11 = 0;
  v17 = &v10[((a3 - 1 + a4) >> v9) - (a3 >> v9) + 1];
  v21 = 0;
  if ( v10 < v17 )
  {
    do
    {
      while ( 2 )
      {
        for ( i = *v10; i > 0; i = v13 )
        {
          v13 = _InterlockedCompareExchange16(v10, i + 1, i);
          if ( v13 == i )
          {
            v14 = v21;
            goto LABEL_17;
          }
        }
        if ( !v7 )
        {
          v7 = 1;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 12));
          v22 = -1;
          continue;
        }
        break;
      }
      if ( i )
      {
        v14 = v21 + 1;
        v11 = v19 >> 1;
        ++v21;
        if ( v20 == -1 )
          v20 = v19 >> 1;
      }
      else
      {
        v14 = --v21;
      }
      *v10 = i + 1;
LABEL_17:
      v19 += 2;
      ++v10;
    }
    while ( v10 < v17 );
    if ( v14 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 30) + 12),
        (v21 << *(_BYTE *)(a2 + 28)) / 4096);
    if ( v20 != -1 )
    {
      v7 = 0;
      *a5 = v11 - v20 + 1;
      *a7 = v22;
    }
  }
  if ( v7 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 12));
  return v20;
}
