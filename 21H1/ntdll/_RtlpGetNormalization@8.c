/*
 * XREFs of _RtlpGetNormalization@8 @ 0x4B375A88
 * Callers:
 *     _RtlIsNormalizedString@16 @ 0x4B368550 (_RtlIsNormalizedString@16.c)
 *     _RtlNormalizeString@20 @ 0x4B3685C0 (_RtlNormalizeString@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtGetNlsSectionPtr@20 @ 0x4B2F3910 (_NtGetNlsSectionPtr@20.c)
 *     _Normalization__LoadTables@16 @ 0x4B367BB7 (_Normalization__LoadTables@16.c)
 *     _NormalizationList__Lookup@4 @ 0x4B375A65 (_NormalizationList__Lookup@4.c)
 */

int __fastcall RtlpGetNormalization(unsigned int a1, void ***a2)
{
  int v4; // ecx
  void **v5; // ebx
  void **v6; // eax
  int NlsSectionPtr; // esi
  int Heap; // eax
  int v9; // esi
  int *v10; // eax
  int Tables; // [esp+14h] [ebp-Ch]
  unsigned __int16 *v13; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h] BYREF

  if ( !a2 )
    return -1073741584;
  RtlAcquireSRWLockExclusive(&NormalizationListLock);
  v5 = NormalizationList__Lookup((void *)a1);
  if ( !v5 )
  {
    v6 = NormalizationList__Lookup((void *)(v4 ^ 0x100));
    if ( v6 )
    {
      v13 = (unsigned __int16 *)v6[1];
      v14 = (int)v6[2];
    }
    else
    {
      NlsSectionPtr = NtGetNlsSectionPtr(12, a1 & 0xFFFFFEFF, 0, (int)&v13, (int)&v14);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 80);
    v9 = Heap;
    if ( !Heap )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      RtlReleaseSRWLockExclusive(&NormalizationListLock);
      return NlsSectionPtr;
    }
    v5 = (void **)(Heap + 12);
    Tables = Normalization__LoadTables(v13, SBYTE1(a1), v14, (_DWORD *)(Heap + 12));
    if ( Tables < 0 )
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v9);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    *(_DWORD *)(v9 + 8) = a1;
    v10 = (int *)off_4B3A341C[0];
    if ( *(_UNKNOWN ***)off_4B3A341C[0] != &NormalizationListHead )
      __fastfail(3u);
    *(_DWORD *)v9 = &NormalizationListHead;
    *(_DWORD *)(v9 + 4) = v10;
    *v10 = v9;
    off_4B3A341C[0] = (_UNKNOWN **)v9;
  }
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  *a2 = v5;
  return 0;
}
