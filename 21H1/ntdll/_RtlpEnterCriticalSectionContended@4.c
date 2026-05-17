/*
 * XREFs of _RtlpEnterCriticalSectionContended@4 @ 0x4B2BFEE0
 * Callers:
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 */

int __thiscall RtlpEnterCriticalSectionContended(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  char v5; // dl
  char i; // al
  bool v7; // zf
  signed __int32 v8; // edx
  volatile signed __int32 *v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // esi
  int j; // edx
  signed __int32 v13; // ebx
  unsigned int v14; // eax
  int v15; // ecx
  int result; // eax
  signed __int32 v17; // edx
  signed __int32 v18; // ebx
  int v19; // eax
  int *v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // esi
  unsigned int v23; // ebx
  unsigned __int64 v24; // kr08_8
  signed __int32 v25; // edx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rax
  unsigned int v28; // [esp+10h] [ebp-20h]
  int v29; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v30; // [esp+18h] [ebp-18h]
  unsigned int v31; // [esp+1Ch] [ebp-14h]
  _DWORD *v32; // [esp+20h] [ebp-10h]
  char v33; // [esp+27h] [ebp-9h]
  char v34; // [esp+28h] [ebp-8h]
  bool v35; // [esp+2Dh] [ebp-3h]
  char v36; // [esp+2Eh] [ebp-2h]
  char v37; // [esp+2Fh] [ebp-1h]

  v1 = this;
  v32 = this;
  v2 = this[5];
  if ( (v2 & 0x4000000) != 0 && *this != -1 && !*(_DWORD *)(*this + 8) )
  {
    if ( (v2 & 0x2FFFFFF) == 0x2000000 )
      v2 |= 0x7D0u;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v2 &= 0xFF000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    v19 = *v1 + 8;
    if ( !*(_DWORD *)v19 )
    {
      v1[5] = v2;
      v20 = (int *)off_4B3A33D4[0];
      if ( *(_UNKNOWN ***)off_4B3A33D4[0] != &RtlCriticalSectionList )
        __fastfail(3u);
      *(_DWORD *)v19 = &RtlCriticalSectionList;
      *(_DWORD *)(v19 + 4) = v20;
      *v20 = v19;
      off_4B3A33D4[0] = (_UNKNOWN **)v19;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  v3 = 0;
  v31 = 0;
  v35 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v4 = v1[5];
    v3 = v4 & 0xFFFFFF;
    v31 = v4 & 0xFFFFFF;
    v35 = (v4 & 0x2000000) != 0;
  }
  v5 = 0;
  v33 = 0;
  v37 = 0;
  while ( 2 )
  {
    v29 = 0;
    for ( i = 1; ; i = 0 )
    {
      if ( i )
      {
        v34 = v5;
        v7 = v5 == 0;
        v8 = v1[1];
        v9 = v1 + 1;
        if ( (v8 & 1) != 0 && _InterlockedCompareExchange(v9, v8 ^ (2 * !v7 + 1), v8) == v8 )
          goto LABEL_18;
        v10 = 10 * v3;
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( v9 && MEMORY[0x7FFE0297] )
          {
            v24 = __rdtsc();
            v30 = HIDWORD(v24);
            v23 = v24;
            v21 = (v24 + v10) >> 32;
            v22 = v24 + v10;
            v28 = v21;
            while ( 1 )
            {
              __asm { monitorx eax, ecx, edx }
              if ( (*v9 & 1) != 0 )
              {
                v25 = *v9;
                if ( _InterlockedCompareExchange(v9, (2 * (v34 != 0) + 1) ^ v25, v25) == v25 )
                  break;
              }
              v26 = v30;
              v27 = __rdtsc();
              v30 = HIDWORD(v27);
              if ( v27 <= __PAIR64__(v26, v23) || v27 >= __PAIR64__(v28, v22) )
                goto LABEL_26;
              __asm { mwaitx  eax, ecx, ebx }
              v23 = v27;
            }
          }
          else
          {
            if ( MEMORY[0x7FFE02D6] == 13 )
              v11 = v10 / 0xD;
            else
              v11 = v10 / MEMORY[0x7FFE02D6];
            for ( j = 0; ; ++j )
            {
              if ( (*v9 & 1) != 0 )
              {
                v13 = *v9;
                if ( _InterlockedCompareExchange(v9, v13 ^ (2 * (v34 != 0) + 1), v13) == v13 )
                  break;
              }
              if ( j == v11 )
                goto LABEL_26;
              _mm_pause();
            }
          }
LABEL_18:
          v1 = v32;
          goto LABEL_19;
        }
LABEL_26:
        v1 = v32;
      }
      v17 = v1[1];
      v36 = 0;
      if ( v37 )
      {
        if ( (v17 & 2) != 0 )
          goto LABEL_35;
        if ( (v17 & 1) != 0 )
        {
          v36 = 1;
          v18 = v17 ^ 3;
        }
        else
        {
          v18 = v17 - 2;
        }
      }
      else if ( (v17 & 1) != 0 )
      {
        v36 = 1;
        v18 = v17 ^ 1;
      }
      else
      {
        v18 = v17 - 4;
        if ( (((_BYTE)v17 - 4) & 2) == 0 )
          v18 = v17 - 6;
      }
      if ( v18 == v17 )
        goto LABEL_35;
      if ( _InterlockedCompareExchange(v1 + 1, v18, v17) == v17 )
        break;
      RtlBackoff(&v29);
      v3 = v31;
      v5 = v37;
    }
    if ( !v36 )
    {
      v37 = 1;
LABEL_35:
      RtlpWaitOnCriticalSection(v1);
      v3 = v31;
      v33 = 1;
      if ( v35 && v31 > 0x64 )
        v3 = --v31;
      v5 = v37;
      continue;
    }
    break;
  }
LABEL_19:
  if ( v35 )
  {
    v14 = v31;
    if ( v31 < 0x7D0 && !v33 )
      v14 = v31 + 1;
    v15 = v1[5] ^ (v14 ^ v1[5]) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v15 &= 0xFF000000;
    v1[5] = v15;
  }
  v1[3] = NtCurrentTeb()->ClientId.UniqueThread;
  result = 0;
  v1[2] = 1;
  return result;
}
