/*
 * XREFs of ?RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z @ 0x4B2B4739
 * Callers:
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _RtlProcessFlsData@8 @ 0x4B33D600 (_RtlProcessFlsData@8.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __userpurge RtlpFlsDataCleanup(
        PVOID *a1@<edx>,
        struct _RTLP_FLS_CONTEXT *a2,
        struct _RTLP_FLS_DATA *a3,
        unsigned int a4)
{
  int v5; // ecx
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // edx
  char *v9; // eax
  char *v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  PRTL_SRWLOCK v13; // eax
  _RTL_SRWLOCK *v14; // ebx
  void (__thiscall *Value)(_DWORD, _DWORD); // eax
  PVOID *v16; // eax
  PVOID **v17; // ecx
  PVOID *v18; // edi
  int v19; // ebx
  int v20; // [esp+10h] [ebp-10h]
  char *v21; // [esp+14h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-8h]

  if ( ((unsigned __int8)a2 & 1) != 0 )
  {
    v5 = dword_4B3A66FC;
    v22 = dword_4B3A66FC;
    if ( dword_4B3A66FC )
    {
      v6 = 17;
      do
      {
        _BitScanReverse(&v7, v6);
        v8 = v6 ^ (1 << v7);
        v20 = v8;
        v9 = (char *)a1[v7 - 2];
        v21 = v9;
        if ( v9 )
        {
          v10 = &v9[4 * v8 + 4];
          if ( v10 )
          {
            if ( *(_DWORD *)v10 )
            {
              _BitScanReverse(&v11, v6);
              v12 = v6 ^ (1 << v11);
              v13 = (&dword_4B3A66C4)[v11];
              if ( v13 )
                v14 = &v13[2 * v12 + 1];
              else
                v14 = 0;
              RtlAcquireSRWLockShared(v14);
              Value = (void (__thiscall *)(_DWORD, _DWORD))v14[1].Value;
              if ( Value && Value != (void (__thiscall *)(_DWORD, _DWORD))-1 && *(_DWORD *)&v21[4 * v20 + 4] )
              {
                Value(Value, *(_DWORD *)&v21[4 * v20 + 4]);
                *(_DWORD *)&v21[4 * v20 + 4] = 0;
              }
              RtlReleaseSRWLockShared(v14);
              v5 = v22;
            }
          }
        }
        ++v6;
        v22 = --v5;
      }
      while ( v5 );
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v16 = (PVOID *)*a1;
    if ( *((PVOID **)*a1 + 1) != a1 || (v17 = (PVOID **)a1[1], *v17 != a1) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = v17;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  if ( ((unsigned __int8)a2 & 2) != 0 )
  {
    v18 = a1 + 2;
    v19 = 8;
    do
    {
      if ( *v18 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v18);
      ++v18;
      --v19;
    }
    while ( v19 );
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
