/*
 * XREFs of MiBeginPageAccessor @ 0x14022E964
 * Callers:
 *     MiGetSinglePageToZero @ 0x1403655D4 (MiGetSinglePageToZero.c)
 *     MiUnlinkNodeLargePages @ 0x1403F594C (MiUnlinkNodeLargePages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, __int64 a2)
{
  volatile LONG *v4; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  bool v6; // bl
  char v7; // al
  bool v8; // zf
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  _QWORD *v12; // rax

  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
    return 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  v4 = &dword_140C4E3F0;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  *(_QWORD *)(a1 + 56) = CurrentThread;
  v7 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 16) = a1;
  *(_BYTE *)(a2 + 34) = v7 | 8;
  v8 = *(_BYTE *)(a1 + 71) == 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 69) = 0;
  if ( !v8 )
    v4 = &dword_140C4E3E0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v4);
  if ( *(_BYTE *)(a1 + 71) )
  {
    v9 = (_QWORD *)qword_140C4E3E8;
    if ( qword_140C4E3E8 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v9[7] )
        {
          v12 = (_QWORD *)v9[1];
          if ( !v12 )
          {
            v6 = 1;
            break;
          }
        }
        else
        {
          v12 = (_QWORD *)*v9;
          if ( !*v9 )
            break;
        }
        v9 = v12;
      }
    }
    v11 = &qword_140C4E3E8;
    goto LABEL_14;
  }
  v9 = (_QWORD *)qword_140C4E3F8;
  if ( !qword_140C4E3F8 )
    goto LABEL_13;
  while ( a1 < (unsigned __int64)v9 )
  {
    v10 = (_QWORD *)*v9;
    if ( !*v9 )
      goto LABEL_13;
LABEL_9:
    v9 = v10;
  }
  v10 = (_QWORD *)v9[1];
  if ( v10 )
    goto LABEL_9;
  v6 = 1;
LABEL_13:
  v11 = &qword_140C4E3F8;
LABEL_14:
  RtlAvlInsertNodeEx((unsigned __int64 *)v11, (unsigned __int64)v9, v6, (_QWORD *)a1);
  *(_BYTE *)(a1 + 68) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  return 1LL;
}
