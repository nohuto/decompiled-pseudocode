/*
 * XREFs of EtwpFindRegistration @ 0x18004576C
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800452F0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x18006DB60 (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x180076D90 (RtlTryAcquireSRWLockShared.c)
 */

_QWORD *__fastcall EtwpFindRegistration(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v5; // esi
  _QWORD *i; // rdi
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD **v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int16 v14; // [rsp+28h] [rbp-10h]

  v13 = a1;
  v14 = a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v4 = EtwpRegistrationTable;
  if ( (qword_18016D628 & 1) != 0 && EtwpRegistrationTable )
    v4 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  v5 = qword_18016D628 & 1;
  i = 0LL;
  while ( v4 )
  {
    v7 = EtwpRegistrationCompare(&v13, v4);
    if ( v7 < 0 )
      goto LABEL_10;
    if ( v7 <= 0 )
    {
      i = (_QWORD *)v4;
LABEL_10:
      v8 = *(_QWORD *)v4;
      goto LABEL_11;
    }
    v8 = *(_QWORD *)(v4 + 8);
LABEL_11:
    if ( v5 && v8 )
      v4 ^= v8;
    else
      v4 = v8;
  }
  if ( i )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(i + 9) )
    {
      v10 = (_QWORD **)i[1];
      v11 = i;
      if ( v10 )
      {
        v12 = *v10;
        for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
          i = v12;
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
      if ( !i || (unsigned int)EtwpRegistrationCompare(&v13, i) )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
