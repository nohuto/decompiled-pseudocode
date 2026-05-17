/*
 * XREFs of RtlpCreateSerializationGroup @ 0x180044D4C
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18004249C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpCreateSerializationGroup(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *i; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v15; // rdi
  __int64 **v16; // rdx
  __int64 *v17; // rcx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18016B228 + 48), a2, a3, a4);
  for ( i = *(_QWORD **)(qword_18016B228 + 32); i != (_QWORD *)(qword_18016B228 + 32); i = (_QWORD *)*i )
  {
    v6 = (__int64)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18016B228 + 48));
      return v6;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18016B228 + 48));
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v6 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 36) = 0;
    *(_DWORD *)result = 2623763;
    *(_QWORD *)(result + 24) = 0LL;
    v11 = qword_18016B228 + 48;
    *(_DWORD *)(result + 4) = a1;
    *(_DWORD *)(result + 32) = 1;
    RtlAcquireSRWLockExclusive(v11, v8, v9, v10);
    v12 = qword_18016B228;
    v13 = qword_18016B228 + 32;
    for ( j = *(_QWORD **)(qword_18016B228 + 32); j != (_QWORD *)v13; j = (_QWORD *)*j )
    {
      v15 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v15 + 8);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18016B228 + 48));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        return (__int64)v15;
      }
    }
    v16 = *(__int64 ***)(qword_18016B228 + 40);
    v17 = (__int64 *)(v6 + 8);
    if ( *v16 != (__int64 *)v13 )
      __fastfail(3u);
    *v17 = v13;
    *(_QWORD *)(v6 + 16) = v16;
    *v16 = v17;
    *(_QWORD *)(v13 + 8) = v17;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v12 + 48));
    return v6;
  }
  return result;
}
