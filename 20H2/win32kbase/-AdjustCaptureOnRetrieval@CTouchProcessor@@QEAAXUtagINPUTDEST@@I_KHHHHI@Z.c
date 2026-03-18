/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C0185CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D11E4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C0196AB0 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0197FF8 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0198D34 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 */

void __fastcall CTouchProcessor::AdjustCaptureOnRetrieval(
        __int64 a1,
        const struct tagINPUTDEST *a2,
        int a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[40]; // [rsp+30h] [rbp-D8h] BYREF
  CInpLockGuard *v17; // [rsp+58h] [rbp-B0h]
  _BYTE v18[128]; // [rsp+60h] [rbp-A8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v16, (struct CInpLockGuard *)(a1 + 40), a4);
  if ( !a6 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      CInputDest::CInputDest((CInputDest *)v18, a2);
      CTouchProcessor::SetPointerImplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v18,
        a5,
        a7);
LABEL_6:
      CInputDest::SetEmpty((CInputDest *)v18, v13, v14, v15);
      goto LABEL_12;
    }
    if ( a9 == 593 )
    {
      CInputDest::CInputDest((CInputDest *)v18, a2);
      CTouchProcessor::SetPointerExplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v18,
        a5,
        a7);
      goto LABEL_6;
    }
  }
  if ( a8 && a6 && (a9 == 583 || a9 == 594) )
    CTouchProcessor::ReleasePointerCapture((CTouchProcessor *)a1, (unsigned __int64)a4, a7);
LABEL_12:
  CInpLockGuard::UnLock((PERESOURCE *)v17, (struct CRefUnRefPointerMsgId *)v16);
}
