/*
 * XREFs of TpReleasePool @ 0x18004F2A0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x18004F4CC (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x18008AA6C (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x1800A0D10 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x1801124DC (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x1801128AC (TppETWPoolClose.c)
 */

signed __int64 __fastcall TpReleasePool(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, __int64); // rax
  signed __int64 result; // rax
  __int64 v17; // rcx
  volatile signed __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v22; // [rsp+88h] [rbp+10h]
  signed __int64 v23; // [rsp+90h] [rbp+18h]

  v22 = 0;
  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (signed __int64)NtCurrentPeb();
    v20 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v20 + 72) )
      return TppRaiseInvalidParameter(v20, a2, a3, a4);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 368, a2, a3, a4);
    if ( *(_BYTE *)(a1 + 377) )
    {
      TppRaiseInvalidParameter(v6, v5, v7, v8);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v9 = *(_QWORD *)(a1 + 8);
        LODWORD(v23) = v9;
        do
        {
          if ( !HIDWORD(v9) )
            break;
          HIDWORD(v23) = HIDWORD(v9) - 1;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v23, v9);
          LODWORD(v23) = v9;
        }
        while ( v10 != v9 );
        if ( !HIDWORD(v9) )
          break;
        v11 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v11 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v11; j = (unsigned int)(j + 1) )
          {
            v14 = TppQueueRemoveHead(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j, i);
            if ( v14 )
              v11 = v14 - 16;
            else
              v11 = 0LL;
          }
        }
        if ( !v11 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v11 )
        {
          v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL);
          if ( v15 )
            v15(v11, a1);
        }
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
      v22 = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    result = (signed __int64)RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (signed __int64)NtCurrentPeb();
      v17 = *(_QWORD *)(result + 144) + 556LL;
    }
    else
    {
      v17 = 2147353478LL;
    }
    if ( *(_BYTE *)v17 )
      result = TppETWPoolClose(a1);
    if ( v22 )
    {
      if ( a1 == TppPoolpGlobalPool )
      {
        v18 = &TppPoolpGlobalPoolLock;
        v19 = &TppPoolpGlobalPool;
      }
      else
      {
        if ( a1 != TppPoolpSerializedPool )
        {
          result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            return TppPoolpFree(a1);
          return result;
        }
        v18 = &TppPoolpSerializedPoolLock;
        v19 = &TppPoolpSerializedPool;
      }
      return TppPoolpDereferenceGlobalPool((const void **)v19, v18);
    }
  }
  return result;
}
