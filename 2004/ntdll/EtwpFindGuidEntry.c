/*
 * XREFs of EtwpFindGuidEntry @ 0x180043384
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180043270 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043544 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x1800452A0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x180084D20 (EtwpReferenceUmGuidEntry.c)
 *     memcmp @ 0x180090000 (memcmp.c)
 */

_QWORD *__fastcall EtwpFindGuidEntry(_QWORD *Buf1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  int v6; // esi
  _QWORD *i; // rdi
  int v8; // eax
  unsigned __int64 v9; // rax
  _QWORD *v11; // rcx
  _QWORD **v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v5 = EtwpGuidEntryTable;
  if ( (qword_18016B5F0 & 1) != 0 && EtwpGuidEntryTable )
    v5 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
  v6 = qword_18016B5F0 & 1;
  i = 0LL;
  while ( v5 )
  {
    v8 = memcmp(Buf1, (const void *)(v5 + 24), 0x10uLL);
    if ( v8 < 0 )
      goto LABEL_10;
    if ( v8 <= 0 )
    {
      i = (_QWORD *)v5;
LABEL_10:
      v9 = *(_QWORD *)v5;
      goto LABEL_11;
    }
    v9 = *(_QWORD *)(v5 + 8);
LABEL_11:
    if ( v6 && v9 )
      v5 ^= v9;
    else
      v5 = v9;
  }
  if ( i )
  {
    while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(i) )
    {
      v12 = (_QWORD **)i[1];
      if ( v12 )
      {
        v13 = *v12;
        for ( i = (_QWORD *)i[1]; v13; v13 = (_QWORD *)*v13 )
          i = v13;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v11 )
            break;
          v11 = i;
        }
      }
      if ( i )
      {
        v14 = *Buf1 - i[3];
        if ( *Buf1 == i[3] )
          v14 = Buf1[1] - i[4];
        if ( !v14 )
          continue;
      }
      goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
