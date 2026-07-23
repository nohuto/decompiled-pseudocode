/*
 * XREFs of MiBeginPageAccessor @ 0x14031FB98
 * Callers:
 *     MiGetSinglePageToZero @ 0x140365A34 (MiGetSinglePageToZero.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, __int64 a2)
{
  volatile LONG *v4; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  char v6; // bl
  char v7; // al
  bool v8; // zf
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 *v12; // rcx
  _QWORD *v13; // rax

  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
    return 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  v4 = &dword_140C4E5B0;
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
    v4 = &dword_140C4E5A0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v4);
  if ( *(_BYTE *)(a1 + 71) )
  {
    v10 = (_QWORD *)qword_140C4E5A8;
    if ( qword_140C4E5A8 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v10[7] )
        {
          v13 = (_QWORD *)v10[1];
          if ( !v13 )
          {
            v6 = 1;
            break;
          }
        }
        else
        {
          v13 = (_QWORD *)*v10;
          if ( !*v10 )
            break;
        }
        v10 = v13;
      }
    }
    v12 = &qword_140C4E5A8;
    goto LABEL_14;
  }
  v10 = (_QWORD *)qword_140C4E5B8;
  if ( !qword_140C4E5B8 )
    goto LABEL_13;
  while ( a1 < (unsigned __int64)v10 )
  {
    v11 = (_QWORD *)*v10;
    if ( !*v10 )
      goto LABEL_13;
LABEL_9:
    v10 = v11;
  }
  v11 = (_QWORD *)v10[1];
  if ( v11 )
    goto LABEL_9;
  v6 = 1;
LABEL_13:
  v12 = &qword_140C4E5B8;
LABEL_14:
  LOBYTE(v9) = v6;
  RtlAvlInsertNodeEx(v12, v10, v9, a1);
  *(_BYTE *)(a1 + 68) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  return 1LL;
}
