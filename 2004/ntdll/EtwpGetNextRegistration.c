/*
 * XREFs of EtwpGetNextRegistration @ 0x18004562C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x180044FE4 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x1800452A0 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x180110290 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180076C90 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall EtwpGetNextRegistration(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char v5; // si
  unsigned __int64 v6; // rbp
  unsigned __int64 j; // rbx
  unsigned __int64 v8; // rax
  __int64 i; // rbx
  _QWORD *v10; // rcx
  _QWORD **v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rcx

  v5 = 0;
  v6 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  if ( a1 )
  {
    j = *(_QWORD *)(a1 + 8);
    v8 = a1;
    if ( j )
    {
      v10 = *(_QWORD **)j;
      if ( *(_QWORD *)j )
      {
        do
        {
          j = (unsigned __int64)v10;
          v10 = (_QWORD *)*v10;
        }
        while ( v10 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(j + 16) )
      {
        j = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v8 )
          break;
        v8 = j;
      }
    }
  }
  else if ( (qword_18016B608 & 1) != 0 )
  {
    if ( qword_18016B608 == 1 )
      j = 0LL;
    else
      j = qword_18016B608 ^ ((unsigned __int64)&EtwpRegistrationTable + 1);
  }
  else
  {
    j = qword_18016B608;
  }
  while ( j )
  {
    v6 = j;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared(j + 72) )
    {
      v5 = 1;
      break;
    }
    v12 = *(_QWORD ***)(j + 8);
    v13 = j;
    if ( v12 )
    {
      v14 = *v12;
      for ( j = *(_QWORD *)(j + 8); v14; v14 = (_QWORD *)*v14 )
        j = (unsigned __int64)v14;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v13 )
          break;
        v13 = j;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return v6 & -(__int64)(v5 != 0);
}
