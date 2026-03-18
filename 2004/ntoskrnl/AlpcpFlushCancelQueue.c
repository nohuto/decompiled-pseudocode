/*
 * XREFs of AlpcpFlushCancelQueue @ 0x140629790
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x140629478 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpFlushCancelQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  _QWORD **v8; // r8
  ULONG_PTR v9; // rcx

  v2 = (volatile signed __int64 *)(a1 + 136);
  v5 = (_QWORD **)(a1 + 384);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v6 = *v5;
  while ( v6 != v5 )
  {
    v8 = (_QWORD **)v6;
    v9 = (ULONG_PTR)(v6 - 10);
    v6 = (_QWORD *)*v6;
    if ( !a2 || *(_QWORD *)(v9 + 56) == a2 )
    {
      *v8[1] = v6;
      (*v8)[1] = v8[1];
      --*(_DWORD *)(a1 + 464);
      *(_QWORD *)(v9 + 56) = 0LL;
      *(_QWORD *)(v9 + 64) = 0LL;
      AlpcpDereferenceBlobEx(v9);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
