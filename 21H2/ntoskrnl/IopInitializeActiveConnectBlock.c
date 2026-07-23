/*
 * XREFs of IopInitializeActiveConnectBlock @ 0x1407629C4
 * Callers:
 *     IoDisconnectInterrupt @ 0x140761BD0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4C40 (IopAcquireReleaseConnectLockInternal.c)
 */

void *__fastcall IopInitializeActiveConnectBlock(__int64 a1, __int64 *a2)
{
  void *result; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 **v10; // rax
  __int64 **v11; // rcx

  result = memset(a2, 0, 0x50uLL);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    a2[1] = (__int64)a2;
    *a2 = (__int64)a2;
    KeInitializeEvent((PRKEVENT)(a2 + 5), SynchronizationEvent, 1u);
    *((_DWORD *)a2 + 16) = 1;
    LOBYTE(v5) = 1;
    v6 = *(_DWORD *)(a1 + 64);
    *((_DWORD *)a2 + 4) = v6;
    IopAcquireReleaseConnectLockInternal(0LL, v5, 2LL);
    v7 = ActiveConnectList;
    v8 = 0LL;
    while ( (__int64 *)v7 != &ActiveConnectList )
    {
      if ( *(_DWORD *)(v7 + 16) == v6 )
      {
        v8 = v7;
        break;
      }
      if ( *(_DWORD *)(v7 + 16) > v6 )
        break;
      v7 = *(_QWORD *)v7;
    }
    if ( v8 )
    {
      a2[3] = *(_QWORD *)(v8 + 24);
      a2[4] = *(_QWORD *)(v8 + 32);
      _InterlockedIncrement(*(volatile signed __int32 **)(v8 + 32));
    }
    else
    {
      a2[3] = (__int64)(a2 + 5);
      a2[4] = (__int64)(a2 + 8);
    }
    v9 = ActiveConnectList;
    if ( (__int64 *)ActiveConnectList != &ActiveConnectList )
    {
      while ( *(_DWORD *)(v9 + 16) <= *((_DWORD *)a2 + 4) )
      {
        v9 = *(_QWORD *)v9;
        if ( (__int64 *)v9 == &ActiveConnectList )
          goto LABEL_21;
      }
      v11 = *(__int64 ***)(v9 + 8);
      if ( *v11 != (__int64 *)v9 )
        goto LABEL_23;
      *a2 = v9;
      a2[1] = (__int64)v11;
      *v11 = a2;
      *(_QWORD *)(v9 + 8) = a2;
LABEL_21:
      if ( (__int64 *)v9 != &ActiveConnectList )
        return (void *)IopAcquireReleaseConnectLockInternal(0LL, 0LL, 2LL);
    }
    v10 = (__int64 **)qword_140C45568;
    if ( *(__int64 **)qword_140C45568 == &ActiveConnectList )
    {
      *a2 = (__int64)&ActiveConnectList;
      a2[1] = (__int64)v10;
      *v10 = a2;
      qword_140C45568 = (__int64)a2;
      return (void *)IopAcquireReleaseConnectLockInternal(0LL, 0LL, 2LL);
    }
LABEL_23:
    __fastfail(3u);
  }
  return result;
}
