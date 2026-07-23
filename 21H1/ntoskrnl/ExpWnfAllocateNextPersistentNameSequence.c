/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x14071F104
 * Callers:
 *     ExpWnfGenerateStateName @ 0x14066B970 (ExpWnfGenerateStateName.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14068A3D4 (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(struct _LIST_ENTRY *a1, unsigned __int64 *a2)
{
  int v3; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  struct _LIST_ENTRY *v5; // r12
  _QWORD *CurrentServerSiloGlobals; // rax
  char *v7; // rbx
  NTSTATUS v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-28h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v3 = 0;
  NameStoreRegistryRoot = 0;
  v5 = PsAttachSiloToCurrentThread(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (char *)(CurrentServerSiloGlobals + 114);
  Data = CurrentServerSiloGlobals[119];
  if ( Data )
    goto LABEL_8;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_22;
  v12 = KeAbPreAcquire((ULONG_PTR)(v7 + 32), 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7 + 4, v12, (ULONG_PTR)(v7 + 32));
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v3 = 1;
  if ( *((_QWORD *)v7 + 5) )
    goto LABEL_8;
  v8 = ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x18u,
         &ResultLength);
  NameStoreRegistryRoot = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_19;
    do
LABEL_8:
      v9 = _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
    while ( !v9 );
    Data = *((_QWORD *)v7 + 5);
    if ( v9 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_18;
      }
      if ( !v3 )
      {
        v14 = KeAbPreAcquire((ULONG_PTR)(v7 + 32), 0LL, 0);
        v15 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7 + 4, v14, (ULONG_PTR)(v7 + 32));
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        v3 = 1;
      }
      if ( v9 <= *((_QWORD *)v7 + 5) )
        goto LABEL_17;
      v10 = *((_QWORD *)v7 + 5) + 100LL;
      Data = v10;
      if ( v10 < v9 )
        Data = v10 + 100 * ((v9 - v10 - 1) / 0x64 + 1);
      NameStoreRegistryRoot = ZwSetValueKey(
                                KeyHandle,
                                (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                0,
                                3u,
                                &Data,
                                8u);
      if ( NameStoreRegistryRoot < 0 )
      {
LABEL_18:
        if ( !v3 )
          goto LABEL_22;
        goto LABEL_19;
      }
      _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    }
LABEL_17:
    *a2 = v9;
    goto LABEL_18;
  }
  if ( *(_DWORD *)&KeyValueInformation[8] == 8 )
  {
    Data = *(_QWORD *)&KeyValueInformation[12];
    _InterlockedExchange64((volatile __int64 *)v7 + 3, *(__int64 *)&KeyValueInformation[12]);
    _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    goto LABEL_8;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7 + 32);
  KeAbPostRelease((ULONG_PTR)(v7 + 32));
LABEL_22:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)NameStoreRegistryRoot;
}
