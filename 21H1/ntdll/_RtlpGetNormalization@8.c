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
  NTSTATUS NlsSectionPtr; // esi
  char *Heap; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  SIZE_T v11; // [esp-4h] [ebp-24h]
  int Tables; // [esp+14h] [ebp-Ch]
  PVOID SectionPointer; // [esp+18h] [ebp-8h] BYREF
  ULONG SectionSize; // [esp+1Ch] [ebp-4h] BYREF

  if ( !a2 )
    return -1073741584;
  RtlAcquireSRWLockExclusive(&NormalizationListLock);
  v5 = NormalizationList__Lookup((void *)a1);
  if ( !v5 )
  {
    v6 = NormalizationList__Lookup((void *)(v4 ^ 0x100));
    if ( v6 )
    {
      SectionPointer = v6[1];
      SectionSize = (ULONG)v6[2];
    }
    else
    {
      NlsSectionPtr = NtGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0, &SectionPointer, &SectionSize);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    LODWORD(v11) = 80;
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    v9 = Heap;
    if ( !Heap )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      RtlReleaseSRWLockExclusive(&NormalizationListLock);
      return NlsSectionPtr;
    }
    v5 = (void **)(Heap + 12);
    Tables = Normalization__LoadTables((unsigned __int16 *)SectionPointer, SBYTE1(a1), SectionSize, (_DWORD *)Heap + 3);
    if ( Tables < 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v9[2] = a1;
    v10 = off_4B3A341C[0];
    if ( *(_UNKNOWN ***)off_4B3A341C[0] != &NormalizationListHead )
      __fastfail(3u);
    *v9 = &NormalizationListHead;
    v9[1] = v10;
    *v10 = v9;
    off_4B3A341C[0] = (_UNKNOWN **)v9;
  }
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  *a2 = v5;
  return 0;
}
