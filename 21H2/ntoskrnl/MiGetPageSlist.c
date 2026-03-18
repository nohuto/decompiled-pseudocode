/*
 * XREFs of MiGetPageSlist @ 0x140220360
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x14022FD10 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 */

_QWORD *__fastcall MiGetPageSlist(__int64 a1, unsigned int a2, __int16 a3)
{
  int v3; // r15d
  __int64 *v4; // r14
  int v5; // r12d
  unsigned int v7; // ebx
  int i; // esi
  union _SLIST_HEADER *v9; // rcx
  PSLIST_ENTRY v11; // rax
  __int64 v12; // rdx
  _QWORD *p_Next; // r8
  __int64 v14; // [rsp+50h] [rbp+8h]
  PSLIST_ENTRY v15; // [rsp+68h] [rbp+20h]

  v14 = a1;
  v3 = dword_140C50738;
  v4 = &MiFreeThenFree;
  v5 = 1;
  if ( (a3 & 0x4000) != 0 )
    v5 = 16;
  v7 = a2;
  if ( (a3 & 2) != 0 )
    v4 = &MiZeroThenZero;
  while ( 2 )
  {
    for ( i = *(_DWORD *)v4; ; i = *((_DWORD *)v4 + 1) )
    {
      v9 = (union _SLIST_HEADER *)(16LL * v7 + *(_QWORD *)(a1 + 8LL * i + 6616));
      if ( LOWORD(v9->Alignment) )
      {
        v11 = RtlpInterlockedPopEntrySList(v9);
        v15 = v11;
        p_Next = &v11->Next;
        if ( v11 )
        {
          v11[1].Next = (_SLIST_ENTRY *)ZeroPte;
          if ( i )
          {
            MiSetOriginalPtePfnFromFreeList(&v11[1], v12, v11);
          }
          else if ( (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v11[0x22000000000LL] >> 4));
            p_Next = &v15->Next;
          }
          *p_Next = 0LL;
          return p_Next;
        }
      }
      if ( i == *((_DWORD *)v4 + 1) )
        break;
      a1 = v14;
    }
    v7 = v7 & ~v3 | v3 & (v7 + v5);
    if ( v7 != a2 )
    {
      a1 = v14;
      continue;
    }
    break;
  }
  return 0LL;
}
