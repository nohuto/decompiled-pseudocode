/*
 * XREFs of MiSlistGetFreePage @ 0x140304260
 * Callers:
 *     MiRemovePageAnyColor @ 0x140303FE8 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x1403041C8 (MiGetPageSlist.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 */

_QWORD *__fastcall MiSlistGetFreePage(__int64 a1, int *a2, unsigned int a3)
{
  int v3; // edi
  __int64 v6; // rbx
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v9; // rax
  _QWORD *p_Next; // r14

  v3 = *a2;
  v6 = 16LL * a3;
  while ( 1 )
  {
    v7 = (_SLIST_HEADER *)(v6 + *(_QWORD *)(a1 + 8LL * v3 + 4200));
    if ( LOWORD(v7->Alignment) )
    {
      v9 = RtlpInterlockedPopEntrySList(v7);
      p_Next = &v9->Next;
      if ( v9 )
        break;
    }
    if ( v3 == a2[1] )
      return 0LL;
    v3 = a2[1];
  }
  v9[1].Next = (_SLIST_ENTRY *)ZeroPte;
  if ( v3 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v9[1]);
  }
  else if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((__int64)&v9[0x5800000000LL] / 48);
  }
  *p_Next = 0LL;
  return p_Next;
}
