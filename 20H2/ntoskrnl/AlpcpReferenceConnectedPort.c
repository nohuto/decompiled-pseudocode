/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x1405F1540
 * Callers:
 *     AlpcpExposeHandleAttribute @ 0x1405F0030 (AlpcpExposeHandleAttribute.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1405F1050 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpImpersonateMessage @ 0x1405F1220 (AlpcpImpersonateMessage.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1406A6E3C (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406A6FD8 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1402FB390 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // eax

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( !v3 )
      return v2;
    ExAcquirePushLockSharedEx(v3 - 16, 0LL);
    v4 = *(_DWORD *)(a1 + 416) & 6;
    if ( v4 == 4 )
    {
      v2 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      if ( v4 != 6 )
      {
LABEL_9:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 - 16));
        KeAbPostRelease(v3 - 16);
        return v2;
      }
      v2 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 && !ObReferenceObjectSafe(v2) )
      v2 = 0LL;
    goto LABEL_9;
  }
  ObfReferenceObject((PVOID)a1);
  return a1;
}
