/*
 * XREFs of ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E1CDC
 * Callers:
 *     NtUserUndelegateInput @ 0x1C01238F0 (NtUserUndelegateInput.c)
 *     NtUserHandleDelegatedInput @ 0x1C01FD870 (NtUserHandleDelegatedInput.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0158AA0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01E1C3C (-_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1DB4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 */

__int64 __fastcall _HandleDelegatedInput(__int64 a1, unsigned int a2, struct tagMSG *a3)
{
  struct tagQMSG *v3; // rbx
  unsigned int DLT; // eax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v9; // r8
  struct tagQMSG *i; // rax
  _BYTE v12[40]; // [rsp+20h] [rbp-38h] BYREF
  CInpLockGuard *v13; // [rsp+48h] [rbp-10h]
  struct tagQMSG *v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
  v14 = 0LL;
  DLT = DLT_QUEUE::getDLT(a1);
  GetDomainLockRef(DLT);
  if ( a3 )
  {
    if ( !(unsigned int)_FindQMsgFromMsg((struct tagTHREADINFO *const)a1, a3, &v14) )
      return (unsigned int)v3;
    v3 = v14;
  }
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v12, TouchProcessorLock, v9);
  for ( i = *(struct tagQMSG **)(*(_QWORD *)(a1 + 424) + 24LL);
        i != v3;
        i = _HandleDelegatedInputWorker((struct tagTHREADINFO *)a1, a2, i) )
  {
    ;
  }
  CInpLockGuard::UnLock(v13, (struct CRefUnRefPointerMsgId *)v12);
  LODWORD(v3) = 1;
  return (unsigned int)v3;
}
