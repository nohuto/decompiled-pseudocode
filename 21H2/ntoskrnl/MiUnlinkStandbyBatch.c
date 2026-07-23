/*
 * XREFs of MiUnlinkStandbyBatch @ 0x14030D930
 * Callers:
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiReadyStandbyPageForActive @ 0x14030DB30 (MiReadyStandbyPageForActive.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 */

__int64 __fastcall MiUnlinkStandbyBatch(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5, ULONG_PTR *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  ULONG_PTR v12; // rbx
  unsigned __int64 v13; // rcx
  char v14; // al
  char v15; // cl
  int v16; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v19; // rax

  v6 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)a2;
        v11 = *(_QWORD *)a2;
        if ( (*(_QWORD *)a2 & 1) == 0 )
          break;
LABEL_10:
        if ( (*(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
        {
          v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
            return a5 - v6;
          if ( *(_QWORD *)a2 == v10 )
          {
            if ( 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) == 0x58000000000LL )
              return a5 - v6;
            v13 = *(_QWORD *)a2;
            if ( a2 >= 0xFFFFF6FB7DBED000uLL
              && a2 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
            {
              if ( (v13 & 1) == 0 )
                goto LABEL_16;
              if ( (v13 & 0x20) == 0 || (v13 & 0x42) == 0 )
              {
                Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( Flink )
                {
                  v19 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
                  LOBYTE(Flink) = v13 | 0x20;
                  if ( (v19 & 0x20) == 0 )
                    Flink = *(struct _LIST_ENTRY **)a2;
                  LOBYTE(v13) = (_BYTE)Flink;
                  if ( (v19 & 0x42) != 0 )
                    LOBYTE(v13) = (unsigned __int8)Flink | 0x42;
                }
              }
            }
            if ( (v13 & 1) != 0 )
              goto LABEL_29;
LABEL_16:
            v14 = *(_BYTE *)(v12 + 34);
            if ( (v14 & 0x20) != 0
              || (v15 = *(_BYTE *)(v12 + 35), (v15 & 0x40) != 0)
              || (v14 & 7) != 2
              || ((v15 & 8) == 0 ? (v16 = v15 & 7) : (v16 = 5),
                  v16 != a3
               || (unsigned int)MiIsPfnFromSlabAllocation(v12) && !*(_WORD *)(v12 + 32) && *(__int64 *)v12 < 0) )
            {
LABEL_29:
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              return a5 - v6;
            }
            if ( !(unsigned int)MiUnlinkPageFromList(v12, 1) )
            {
              *a6 = v12;
              return a5 - v6;
            }
            a4 += 8LL;
            a2 += 8LL;
            MiReadyStandbyPageForActive(v12, a4);
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !--v6 )
              return a5 - v6;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
      if ( (*(_QWORD *)a2 & 0xC00LL) != 0x800 )
        return a5 - v6;
      if ( !v10 || !qword_140C4DF80 || (qword_140C4DF80 & v10) != 0 )
      {
        v11 = *(_QWORD *)a2;
        if ( qword_140C4DF80 && (v10 & 0x10) == 0 )
          v11 = v10 & ~qword_140C4DF80;
        goto LABEL_10;
      }
    }
  }
  return a5 - v6;
}
