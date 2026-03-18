/*
 * XREFs of GetNextFrameId @ 0x1C01B1550
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01D2890 (ApiSetResetLastSeenFrameId.c)
 */

__int64 GetNextFrameId()
{
  struct A0xad387374::CFrameIdGenerator *v0; // rbx
  unsigned int v1; // edi
  int v2; // ecx
  _BYTE v4[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]

  v0 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v4,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
    0LL);
  v1 = *(_DWORD *)v0;
  v2 = *(_DWORD *)v0 + 1;
  *(_DWORD *)v0 = v2;
  if ( v1 == -1 )
  {
    *(_DWORD *)v0 = v2 + 1;
    ApiSetResetLastSeenFrameId();
  }
  if ( !v6 )
    CInpLockGuard::UnLock((PERESOURCE *)v5, (struct CRefUnRefPointerMsgId *)v4);
  return v1;
}
