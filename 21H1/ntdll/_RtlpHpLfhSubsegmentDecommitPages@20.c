/*
 * XREFs of _RtlpHpLfhSubsegmentDecommitPages@20 @ 0x4B37719A
 * Callers:
 *     _RtlpHpLfhOwnerCompact@12 @ 0x4B376814 (_RtlpHpLfhOwnerCompact@12.c)
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpHpScheduleCompaction@4 @ 0x4B358965 (_RtlpHpScheduleCompaction@4.c)
 *     _RtlpHpLfhSubsegmentDecBlockCounts@20 @ 0x4B3770E8 (_RtlpHpLfhSubsegmentDecBlockCounts@20.c)
 *     _RtlpHpLfhSubsegmentFindEmptyUnits@12 @ 0x4B377324 (_RtlpHpLfhSubsegmentFindEmptyUnits@12.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(_RTL_SRWLOCK *a1, int a2, int a3, unsigned int a4, char a5)
{
  unsigned int v5; // ebx
  int v7; // esi
  int v8; // edi
  int v9; // ecx
  unsigned int Value; // eax
  unsigned int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // ecx
  unsigned int EmptyUnits; // ebx
  char v15; // cl
  unsigned int v16; // ebx
  int v17; // edi
  _RTL_SRWLOCK *v18; // ebx
  int v19; // ecx
  unsigned int v20; // [esp-Ch] [ebp-30h]
  int v21; // [esp-8h] [ebp-2Ch]
  _RTL_SRWLOCK *v22; // [esp-4h] [ebp-28h]
  unsigned int v23; // [esp+10h] [ebp-14h] BYREF
  int v24; // [esp+14h] [ebp-10h]
  int v25; // [esp+18h] [ebp-Ch]
  int v26; // [esp+1Ch] [ebp-8h]
  _RTL_SRWLOCK *v27; // [esp+20h] [ebp-4h]
  unsigned int v28; // [esp+2Ch] [ebp+8h]

  v5 = a3;
  v7 = 0;
  v27 = a1;
  v24 = 0;
  v8 = a2;
  v26 = a2;
  if ( a3 >= 0 )
  {
    v9 = 0;
    v25 = 0;
  }
  else
  {
    v5 = 1;
    v9 = 1;
    v25 = 1;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && !v9 )
  {
    Value = a1->Value;
    if ( (*(_BYTE *)(Value + 9) & 8) == 0 )
    {
      v11 = *(_DWORD *)(*(__int16 *)(Value + 18) + Value + 4) >> *(_BYTE *)(Value + 7);
      if ( v11 <= 8 )
        v11 = 8;
      v12 = *(_DWORD *)(*(__int16 *)(Value + 18) + Value + 4) >> *(_BYTE *)(Value + 8);
      if ( v12 <= 8 )
        v12 = 8;
      v13 = *(_DWORD *)(*(__int16 *)(Value + 18) + Value + 8) + *(_DWORD *)(*(__int16 *)(Value + 18) + Value + 12);
      v8 = v26;
      v23 = v13;
      if ( v13 > v11 )
      {
        if ( RtlpHpScheduleCompaction() < 0 )
        {
LABEL_15:
          v7 = 0;
          goto LABEL_16;
        }
        v13 = v23;
      }
      if ( v13 <= v12 )
        return;
      goto LABEL_15;
    }
  }
LABEL_16:
  if ( v5 < *(unsigned __int8 *)(v8 + 29) )
  {
    do
    {
      EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(&v23);
      v28 = EmptyUnits;
      if ( EmptyUnits == -1 )
        break;
      if ( v23 >= a4 )
      {
        if ( v7 )
        {
          v15 = *(_BYTE *)(v8 + 28);
          v16 = EmptyUnits << v15;
          v17 = v23 << v15;
          ((void (__thiscall *)(unsigned int, unsigned int, unsigned int, unsigned int))((unsigned int)v27 ^ RtlpHpHeapGlobals ^ v27[4].Value))(
            (unsigned int)v27 ^ RtlpHpHeapGlobals ^ v27[4].Value,
            v27->Value,
            v16 + v26,
            v23 << v15);
          v21 = v17;
          v8 = v26;
          v20 = v16;
          v18 = v27;
          RtlpHpLfhSubsegmentDecBlockCounts((int)v27, v26, v20, v21, v19);
          if ( !v25 )
            goto LABEL_29;
          EmptyUnits = v23 + v28;
          v7 = v24;
        }
        else
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared(v27 + 17);
          v7 = 2;
          v24 = 2;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v8 + 12));
        }
      }
      else
      {
        if ( !v25 )
          break;
        EmptyUnits += v23;
      }
    }
    while ( EmptyUnits < *(unsigned __int8 *)(v8 + 29) );
    v18 = v27;
LABEL_29:
    if ( v24 )
    {
      v22 = (_RTL_SRWLOCK *)(v8 + 12);
      if ( v24 == 2 )
        RtlReleaseSRWLockExclusive(v22);
      else
        RtlReleaseSRWLockShared(v22);
      if ( (a5 & 1) == 0 )
        RtlReleaseSRWLockShared(v18 + 17);
    }
  }
}
