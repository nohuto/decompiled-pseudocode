/*
 * XREFs of ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C0193158
 * Callers:
 *     NtUserGetPointerProprietaryId @ 0x1C0134390 (NtUserGetPointerProprietaryId.c)
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1390 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018DC38 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

char __fastcall CTouchProcessor::GetPointerProprietaryId(CTouchProcessor *this, unsigned __int16 a2, struct _GUID *a3)
{
  struct _KTHREAD **v3; // rbx
  struct CInputPointerNode *NodeById; // rax
  __int64 v7; // rdx
  char v8; // bl
  _BYTE v10[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+50h] [rbp-18h]

  v3 = (struct _KTHREAD **)gpTouchProcessor;
  *a3 = 0LL;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v10, (struct CInpLockGuard *)(v3 + 5), 0LL);
  NodeById = CTouchProcessor::FindNodeById(v3, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_6;
  v7 = *(_QWORD *)((char *)NodeById + 36) - *(_QWORD *)&a3->Data1;
  if ( !v7 )
    v7 = *(_QWORD *)((char *)NodeById + 44) - *(_QWORD *)a3->Data4;
  if ( v7 )
  {
    v8 = 1;
    *a3 = *(struct _GUID *)((char *)NodeById + 36);
  }
  else
  {
LABEL_6:
    v8 = 0;
  }
  if ( !v12 )
    CInpLockGuard::UnLock((PERESOURCE *)v11, (struct CRefUnRefPointerMsgId *)v10);
  return v8;
}
