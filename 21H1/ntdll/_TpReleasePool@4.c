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

_PEB_LDR_DATA *__stdcall TpReleasePool(int a1)
{
  int v1; // edi
  _PEB_LDR_DATA *result; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  int v5; // eax
  void *v6; // edx
  int *v7; // ecx
  unsigned int v8; // esi
  signed __int64 v9; // rax
  int v10; // eax
  int i; // esi
  unsigned int j; // ebx
  int v13; // eax
  void (__thiscall *v14)(_DWORD, int, int); // esi
  unsigned int v15; // [esp+28h] [ebp-24h]
  volatile signed __int64 *v16; // [esp+2Ch] [ebp-20h]
  _UNKNOWN *retaddr; // [esp+50h] [ebp+4h]

  v1 = a1;
  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = NtCurrentPeb()->Ldr;
    if ( !result->ShutdownInProgress )
      TppRaiseInvalidParameter();
    return result;
  }
  RtlAcquireSRWLockExclusive(a1 + 224);
  if ( *(_BYTE *)(a1 + 229) )
    TppRaiseInvalidParameter();
  if ( !*(_BYTE *)(a1 + 228) )
  {
    *(_BYTE *)(a1 + 228) = 1;
    NtShutdownWorkerFactory(*(_DWORD *)(a1 + 36), a1);
  }
LABEL_10:
  v16 = (volatile signed __int64 *)(v1 + 8);
  v3 = *(_DWORD *)(v1 + 8);
  v4 = *(_DWORD *)(v1 + 12);
  while ( v4 )
  {
    v8 = v3;
    v15 = v4;
    v9 = _InterlockedCompareExchange64(v16, __SPAIR64__(v4 - 1, v3), __SPAIR64__(v4, v3));
    v4 = HIDWORD(v9);
    v3 = v9;
    v1 = a1;
    if ( v9 == __PAIR64__(v15, v8) )
    {
      if ( !HIDWORD(v9) )
        break;
      v10 = 0;
      for ( i = 0; i < 3; ++i )
      {
        if ( v10 )
          goto LABEL_38;
        for ( j = 0; j < TppNumberNodes && !v10; ++j )
        {
          v13 = TppQueueRemoveHead(*(_DWORD *)(a1 + 4 * i + 16) + 12 * j);
          if ( v13 )
            v10 = v13 - 12;
          else
            v10 = 0;
        }
      }
      if ( !v10 )
        goto LABEL_10;
LABEL_38:
      if ( *(_DWORD *)v10 )
      {
        v14 = *(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)v10 + 4);
        if ( v14 )
          v14(v14, v10, a1);
      }
      goto LABEL_10;
    }
  }
  *(_DWORD *)(v1 + 244) = retaddr;
  *(_BYTE *)(v1 + 229) = 1;
  RtlReleaseSRWLockExclusive(v1 + 224);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478;
  if ( *(_BYTE *)v5 )
    TppETWPoolClose(v1);
  if ( v1 == TppPoolpGlobalPool )
  {
    v6 = &TppPoolpGlobalPoolLock;
    v7 = &TppPoolpGlobalPool;
    return (_PEB_LDR_DATA *)TppPoolpDereferenceGlobalPool(v7, v6);
  }
  if ( v1 == TppPoolpSerializedPool )
  {
    v6 = &TppPoolpSerializedPoolLock;
    v7 = &TppPoolpSerializedPool;
    return (_PEB_LDR_DATA *)TppPoolpDereferenceGlobalPool(v7, v6);
  }
  result = (_PEB_LDR_DATA *)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( !result )
    return (_PEB_LDR_DATA *)TppPoolpFree(v1);
  return result;
}
