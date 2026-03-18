/*
 * XREFs of ?_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z @ 0x14DECE
 * Callers:
 *     _NtUserUndelegateInput@8 @ 0x82826 (_NtUserUndelegateInput@8.c)
 *     _NtUserHandleDelegatedInput@8 @ 0x164E8C (_NtUserHandleDelegatedInput@8.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QAE@AAUCInpLockGuard@@PAX@Z @ 0xF0ED2 (--0CInpLockGuardExclusive@@QAE@AAUCInpLockGuard@@PAX@Z.c)
 *     ?_FindQMsgFromMsg@@YGHQAUtagTHREADINFO@@QAUtagMSG@@PAPAUtagQMSG@@@Z @ 0x14DE52 (-_FindQMsgFromMsg@@YGHQAUtagTHREADINFO@@QAUtagMSG@@PAPAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 */

int __thiscall _HandleDelegatedInput(_DWORD *this, _DWORD *a2)
{
  struct tagTHREADINFO *v2; // esi
  int DLT; // eax
  void *v5; // ecx
  struct CInpLockGuard *TouchProcessorLock; // eax
  struct tagTHREADINFO *i; // eax
  void *v9; // [esp-4h] [ebp-2Ch]
  struct tagMSG *v10; // [esp+0h] [ebp-28h]
  struct tagQMSG **v11; // [esp+4h] [ebp-24h]
  struct tagTHREADINFO *v12; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v13[20]; // [esp+10h] [ebp-18h] BYREF
  CInpLockGuard *v14; // [esp+24h] [ebp-4h]

  v2 = 0;
  v12 = 0;
  DLT = DLT_QUEUE::getDLT();
  GetDomainLockRef(DLT);
  if ( a2 )
  {
    if ( !_FindQMsgFromMsg(a2, (int)this, (struct tagTHREADINFO *const)&v12, v10, v11) )
      return (int)v2;
    v2 = v12;
  }
  v9 = v5;
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(_gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v13, TouchProcessorLock, v9);
  for ( i = *(struct tagTHREADINFO **)(this[59] + 12);
        i != v2;
        i = _HandleDelegatedInputWorker(i, (unsigned int)v10, (struct tagQMSG *)v11) )
  {
    ;
  }
  CInpLockGuard::UnLock(v14, (struct CRefUnRefPointerMsgId *)v13);
  return 1;
}
