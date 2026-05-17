/*
 * XREFs of EtwpInsertRegistration @ 0x180043454
 * Callers:
 *     EtwNotificationRegister @ 0x180043030 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x18006DA50 (EtwpRegistrationCompare.c)
 */

signed __int64 __fastcall EtwpInsertRegistration(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rdi
  bool v6; // bl
  int v7; // esi
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int16 v11; // [rsp+28h] [rbp-10h]

  v10 = a1 + 32;
  v11 = *(_WORD *)(a1 + 96);
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v5 = EtwpRegistrationTable;
  v6 = 0;
  if ( (qword_18016B608 & 1) != 0 )
  {
    if ( EtwpRegistrationTable )
      v5 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
    else
      v5 = 0LL;
  }
  v7 = qword_18016B608 & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v10, v5) < 0 )
      {
        v8 = *(_QWORD *)v5;
        if ( v7 )
        {
          if ( !v8 )
            break;
          v8 ^= v5;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 8);
        if ( v7 )
        {
          if ( !v8 )
            goto LABEL_17;
          v8 ^= v5;
        }
        if ( !v8 )
        {
LABEL_17:
          v6 = 1;
          break;
        }
      }
      v5 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&EtwpRegistrationTable, v5, v6, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
