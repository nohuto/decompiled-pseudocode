/*
 * XREFs of _RtlpRemoveVectoredHandler@8 @ 0x4B2AB233
 * Callers:
 *     _RtlRemoveVectoredExceptionHandler@4 @ 0x4B2AB220 (_RtlRemoveVectoredExceptionHandler@4.c)
 *     _RtlRemoveVectoredContinueHandler@4 @ 0x4B3383F0 (_RtlRemoveVectoredContinueHandler@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _LdrProtectMrdataHeap@4 @ 0x4B2EC610 (_LdrProtectMrdataHeap@4.c)
 */

int __fastcall RtlpRemoveVectoredHandler(void **a1, int a2)
{
  int v2; // ebx
  void **v3; // edi
  void **v4; // esi
  int v5; // ecx
  void **v6; // ecx
  void **v7; // eax
  void **v8; // edi
  int v9; // eax

  v2 = 12 * a2;
  v3 = (void **)(&off_4B3A9340 + 3 * a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*(&LdrpVectorHandlerList + 3 * a2));
  v4 = (void **)*v3;
  if ( *v3 == v3 )
  {
LABEL_18:
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)((char *)&LdrpVectorHandlerList + v2));
    return 0;
  }
  else
  {
    while ( v4 != a1 )
    {
      v4 = (void **)*v4;
      if ( v4 == v3 )
        goto LABEL_18;
    }
    LdrProtectMrdataHeap(0);
    v4[3] = (void *)1;
    v5 = _InterlockedDecrement((volatile signed __int32 *)v4[2]);
    if ( v5 > 0 )
    {
      LdrProtectMrdataHeap(1);
      v8 = 0;
    }
    else
    {
      if ( v5 )
        __fastfail(0xEu);
      LdrProtectMrdata(0);
      v6 = (void **)*v4;
      v7 = (void **)v4[1];
      if ( *((void ***)*v4 + 1) != v4 || *v7 != v4 )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      if ( v7 == v6 )
        _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->40, a2 + 2);
      v8 = v4;
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)((char *)&LdrpVectorHandlerList + v2));
    if ( v8 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8[2]);
      LOBYTE(v9) = LdrControlFlowGuardEnforced();
      if ( v9 )
        RtlFreeHeap(LdrpMrdataHeap, 0, v4);
      else
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      LdrProtectMrdata(1);
      LdrProtectMrdataHeap(1);
    }
    return 1;
  }
}
