/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0196460
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D131C (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ApiSetEditionPromotePointer @ 0x1C01C7A00 (ApiSetEditionPromotePointer.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, __int64 a2, unsigned int a3)
{
  CInpLockGuard *v3; // r14
  unsigned int v6; // esi
  int v7; // eax
  int v8; // eax
  unsigned __int16 v9; // di
  unsigned int v10; // ebx
  _QWORD v12[4]; // [rsp+20h] [rbp-78h] BYREF
  char v13; // [rsp+40h] [rbp-58h]
  CInpLockGuard *v14; // [rsp+48h] [rbp-50h]
  CInpLockGuard *v15[8]; // [rsp+50h] [rbp-48h] BYREF

  v3 = (CTouchProcessor *)((char *)this + 40);
  CInpLockGuardShared::CInpLockGuardShared(
    (CInpLockGuardShared *)v15,
    (CTouchProcessor *)((char *)this + 40),
    (void *)a2);
  v6 = 0;
  if ( a2 )
  {
    if ( a3 == 0x10000000 )
    {
      v7 = *(_DWORD *)(a2 + 36);
      if ( (v7 & 1) != 0 )
      {
        a3 = 0;
      }
      else if ( (v7 & 2) == 0 && (v7 & 4) == 0 )
      {
        goto LABEL_13;
      }
    }
    v8 = *(_DWORD *)(a2 + 36);
    if ( (v8 & 0x10) != 0 )
    {
      if ( (v8 & 1) != 0 )
      {
        if ( !a3 )
          goto LABEL_12;
      }
      else if ( a3 )
      {
LABEL_12:
        v9 = *(_WORD *)(a2 + 16);
        v10 = *(_DWORD *)(a2 + 28);
        v12[0] = 0LL;
        v13 = 0;
        v14 = v3;
        CInpLockGuard::UnLock((PERESOURCE *)v3, (struct CRefUnRefPointerMsgId *)v12);
        v6 = ApiSetEditionPromotePointer(v9, v10, a3);
        CInpLockGuard::LockShared(v14, (struct CRefUnRefPointerMsgId *)v12);
      }
    }
  }
LABEL_13:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v15);
  return v6;
}
