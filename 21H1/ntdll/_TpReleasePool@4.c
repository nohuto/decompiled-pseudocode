/*
 * XREFs of _TpReleasePool@4 @ 0x4B2AAE00
 * Callers:
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 * Callees:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 *     _TppPoolpFree@4 @ 0x4B2AB6C5 (_TppPoolpFree@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtShutdownWorkerFactory@8 @ 0x4B2F44D0 (_NtShutdownWorkerFactory@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _TppETWPoolClose@4 @ 0x4B384B9B (_TppETWPoolClose@4.c)
 *     _TppQueueRemoveHead@4 @ 0x4B38508E (_TppQueueRemoveHead@4.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  PTP_POOL v1; // edi
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  int v4; // eax
  _RTL_SRWLOCK *v5; // edx
  int *v6; // ecx
  unsigned int v7; // esi
  signed __int64 v8; // rax
  int v9; // eax
  int i; // esi
  unsigned int j; // ebx
  int v12; // eax
  void (__thiscall *v13)(_DWORD, int, PTP_POOL); // esi
  unsigned int v14; // [esp+28h] [ebp-24h]
  volatile signed __int64 *v15; // [esp+2Ch] [ebp-20h]
  _UNKNOWN *retaddr; // [esp+50h] [ebp+4h]

  v1 = Pool;
  if ( !Pool
    || Pool == (PTP_POOL)TppPoolpGlobalPool
    || Pool == (PTP_POOL)TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
    return;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 56);
  if ( *((_BYTE *)Pool + 229) )
    TppRaiseInvalidParameter();
  if ( !*((_BYTE *)Pool + 228) )
  {
    *((_BYTE *)Pool + 228) = 1;
    NtShutdownWorkerFactory(*((HANDLE *)Pool + 9), (LONG *)Pool);
  }
LABEL_10:
  v15 = (volatile signed __int64 *)((char *)v1 + 8);
  v2 = *((_DWORD *)v1 + 2);
  v3 = *((_DWORD *)v1 + 3);
  while ( v3 )
  {
    v7 = v2;
    v14 = v3;
    v8 = _InterlockedCompareExchange64(v15, __SPAIR64__(v3 - 1, v2), __SPAIR64__(v3, v2));
    v3 = HIDWORD(v8);
    v2 = v8;
    v1 = Pool;
    if ( v8 == __PAIR64__(v14, v7) )
    {
      if ( !HIDWORD(v8) )
        break;
      v9 = 0;
      for ( i = 0; i < 3; ++i )
      {
        if ( v9 )
          goto LABEL_38;
        for ( j = 0; j < TppNumberNodes && !v9; ++j )
        {
          v12 = TppQueueRemoveHead(*((_DWORD *)Pool + i + 4) + 12 * j);
          if ( v12 )
            v9 = v12 - 12;
          else
            v9 = 0;
        }
      }
      if ( !v9 )
        goto LABEL_10;
LABEL_38:
      if ( *(_DWORD *)v9 )
      {
        v13 = *(void (__thiscall **)(_DWORD, int, PTP_POOL))(*(_DWORD *)v9 + 4);
        if ( v13 )
          v13(v13, v9, Pool);
      }
      goto LABEL_10;
    }
  }
  *((_DWORD *)v1 + 61) = retaddr;
  *((_BYTE *)v1 + 229) = 1;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v1 + 56);
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478;
  if ( *(_BYTE *)v4 )
    TppETWPoolClose(v1);
  if ( v1 == (PTP_POOL)TppPoolpGlobalPool )
  {
    v5 = &TppPoolpGlobalPoolLock;
    v6 = &TppPoolpGlobalPool;
    goto LABEL_20;
  }
  if ( v1 == (PTP_POOL)TppPoolpSerializedPool )
  {
    v5 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
    v6 = &TppPoolpSerializedPool;
LABEL_20:
    TppPoolpDereferenceGlobalPool(v6, v5);
    return;
  }
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) )
    TppPoolpFree(v1);
}
