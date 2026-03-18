/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C019AE70
 * Callers:
 *     <none>
 * Callees:
 *     IsMiPActive @ 0x1C0031048 (IsMiPActive.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C019B2FC (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C01CDC9C (ApiSetEditionFindThreadPointerData.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned int *a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // ebx
  __int64 ThreadPointerData; // rax
  const struct CPointerInputFrame *v11; // rbp
  _BYTE v12[40]; // [rsp+20h] [rbp-38h] BYREF
  CInpLockGuard *v13; // [rsp+48h] [rbp-10h]

  IsTouchpad = 0;
  if ( (*((_DWORD *)a2 + 304) & 0x2000) != 0 )
    return 0LL;
  if ( !a3 )
  {
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v12,
      (CTouchProcessor *)((char *)this + 40),
      0LL);
    ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1072, a4);
    if ( ThreadPointerData )
      IsTouchpad = *(_DWORD *)(ThreadPointerData + 20) == 5;
LABEL_13:
    CInpLockGuard::UnLock((PERESOURCE *)v13, (struct CRefUnRefPointerMsgId *)v12);
    return IsTouchpad;
  }
  if ( a3 != (unsigned int *)-1LL )
  {
    if ( IsMiPActive((__int64)a2, 0LL) && a4 )
      return IsTouchpad;
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v12,
      (CTouchProcessor *)((char *)this + 40),
      a3);
    v11 = CTouchProcessor::ReferenceFrame(this, a3[7]);
    if ( !v11 )
    {
      CInpLockGuard::UnLock((PERESOURCE *)v13, (struct CRefUnRefPointerMsgId *)v12);
      return 0LL;
    }
    IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*((_QWORD *)v11 + 17) + 480LL * a3[8]));
    CTouchProcessor::UnreferenceFrame(this, v11);
    goto LABEL_13;
  }
  return 1;
}
