/*
 * XREFs of ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C0195380
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1390 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimary(CTouchProcessor *this, _DWORD *a2)
{
  _DWORD *v2; // rbx
  _BYTE v4[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]

  v2 = a2;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v4, (CTouchProcessor *)((char *)this + 40), a2);
  if ( v2 )
    LODWORD(v2) = -__CFSHR__(v2[9], 5);
  if ( !v6 )
    CInpLockGuard::UnLock((PERESOURCE *)v5, (struct CRefUnRefPointerMsgId *)v4);
  return (unsigned int)v2;
}
