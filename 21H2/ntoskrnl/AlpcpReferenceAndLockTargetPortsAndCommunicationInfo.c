/*
 * XREFs of AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1406CEBDC
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x1406CEA30 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x14061461C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rsi
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 16);
  v6 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v4 - 2), 0LL);
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v8 = *v4;
      v9 = v4[1];
      goto LABEL_4;
    }
    v8 = v4[2];
  }
  else
  {
    v8 = *v4;
  }
  v9 = v8;
LABEL_4:
  if ( v8 )
    v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
  if ( v9 )
    v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
  if ( v8 && v9 )
  {
    ExAcquirePushLockSharedEx(v8 + 352, 0LL);
    if ( v9 != v8 )
      ExAcquirePushLockSharedEx(v9 + 352, 0LL);
    if ( (*(_DWORD *)(v8 + 416) & 0x20) == 0 && (*(_DWORD *)(v9 + 416) & 0x20) == 0 )
    {
      *a2 = v8;
      result = 0LL;
      *a3 = v9;
      return result;
    }
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v4, v8, v9);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    if ( v8 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v8);
    if ( v9 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v9);
  }
  return 3221225527LL;
}
