/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x1407333C4
 * Callers:
 *     ExpWnfGenerateStateName @ 0x14069D860 (ExpWnfGenerateStateName.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140663518 (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(struct _LIST_ENTRY *a1, unsigned __int64 *a2)
{
  int v3; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  struct _LIST_ENTRY *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *CurrentServerSiloGlobals; // rax
  char *v9; // rbx
  NTSTATUS v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  _RTL_BALANCED_NODE *v14; // rax
  _RTL_BALANCED_NODE *v15; // rsi
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // r14
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
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(v7, v6);
  v9 = (char *)(CurrentServerSiloGlobals + 114);
  Data = CurrentServerSiloGlobals[119];
  if ( Data )
    goto LABEL_8;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1LL, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_22;
  v14 = KeAbPreAcquire((ULONG_PTR)(v9 + 32), 0LL, 0);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9 + 8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v9 + 4, v14, (ULONG_PTR)(v9 + 32));
  if ( v15 )
    BYTE2(v15[1].Left) |= 1u;
  v3 = 1;
  if ( *((_QWORD *)v9 + 5) )
    goto LABEL_8;
  v10 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x18u,
          &ResultLength);
  NameStoreRegistryRoot = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741772 )
      goto LABEL_19;
    do
LABEL_8:
      v11 = _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    while ( !v11 );
    Data = *((_QWORD *)v9 + 5);
    if ( v11 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1LL, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_18;
      }
      if ( !v3 )
      {
        v16 = KeAbPreAcquire((ULONG_PTR)(v9 + 32), 0LL, 0);
        v17 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v9 + 8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v9 + 4, v16, (ULONG_PTR)(v9 + 32));
        if ( v17 )
          BYTE2(v17[1].Left) |= 1u;
        v3 = 1;
      }
      if ( v11 <= *((_QWORD *)v9 + 5) )
        goto LABEL_17;
      v12 = *((_QWORD *)v9 + 5) + 100LL;
      Data = v12;
      if ( v12 < v11 )
        Data = v12 + 100 * ((v11 - v12 - 1) / 0x64 + 1);
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
      _InterlockedExchange64((volatile __int64 *)v9 + 5, Data);
    }
LABEL_17:
    *a2 = v11;
    goto LABEL_18;
  }
  if ( *(_DWORD *)&KeyValueInformation[8] == 8 )
  {
    Data = *(_QWORD *)&KeyValueInformation[12];
    _InterlockedExchange64((volatile __int64 *)v9 + 3, *(__int64 *)&KeyValueInformation[12]);
    _InterlockedExchange64((volatile __int64 *)v9 + 5, Data);
    goto LABEL_8;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9 + 32);
  KeAbPostRelease((ULONG_PTR)(v9 + 32));
LABEL_22:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)NameStoreRegistryRoot;
}
