/*
 * XREFs of ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015E50
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180016010 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::CheckPendingRequestsThreadpoolCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  DWORD v5; // ebx
  _QWORD *Value; // rdi
  _QWORD *v7; // rax
  DWORD v9; // ebx
  _OWORD TlsValue[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-28h]

  v3 = HampLockTrackerId;
  memset(TlsValue, 0, sizeof(TlsValue));
  v11 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v3, TlsValue);
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v5) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800B4118 = GetCurrentThreadId();
  if ( *((_DWORD *)a2 + 4) == 1 )
    *(_DWORD *)(a2[3] + 160LL) &= ~1u;
  ExecutionModel::BaseResourceSet::CheckAllPendingRequests((ExecutionModel::BaseResourceSet *)a2);
  dword_1800B4118 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v7 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v7 & 1) == 0 )
      __int2c();
    if ( v7[1]-- == 1LL )
      *v7 &= ~1uLL;
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
}
