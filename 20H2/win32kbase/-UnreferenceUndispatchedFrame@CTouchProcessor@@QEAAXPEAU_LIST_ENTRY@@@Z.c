/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C019AC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C018C2EC (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0190568 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0191B38 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0192990 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AA68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionEdgyResetDataFrames @ 0x1C01C56A8 (ApiSetEditionEdgyResetDataFrames.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  __int64 v4; // rdx
  CTouchProcessor *v5; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned int i; // esi
  __int64 v8; // rbx
  PVOID CurrentProcess; // rax
  __int64 v10; // r9
  int v11; // r14d
  __int64 *PrevMsgId; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v15[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v15,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  p_Blink = &a2[-2].Blink;
  for ( i = 0; i < *((_DWORD *)p_Blink + 12); ++i )
  {
    v8 = (__int64)&p_Blink[17][30 * i];
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
    if ( !CurrentProcess
      || CurrentProcess != g_pepDwm
      || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v8) && (*(_DWORD *)(v8 + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(v8 + 16)
        || (v5 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                        v5,
                                                        (const struct CPointerInputFrame *)p_Blink,
                                                        (const struct CPointerInfoNode *)v8)
                                    + 35),
            ((unsigned __int8)v5 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v8) )
          CTouchProcessor::FreePointerInfoNode(this, v4, *((unsigned int *)p_Blink + 10), i);
      }
      else
      {
        v11 = *(_DWORD *)(v8 + 180) & 2;
        if ( (*(_DWORD *)(v8 + 180) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v5, *(__int64 **)(v8 + 16));
          if ( PrevMsgId )
          {
            v5 = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
            if ( ((unsigned __int8)v5 & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData(this, (__int64)PrevMsgId, 1LL, v10);
          }
        }
        if ( !v11 )
          CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(v8 + 16), 1LL, v10);
      }
    }
  }
  ApiSetEditionEdgyResetDataFrames(p_Blink);
  CTouchProcessor::UnreferenceFrame(this, (const struct CPointerInputFrame *)p_Blink, v13, v14);
  if ( !v17 )
    CInpLockGuard::UnLock((PERESOURCE *)v16, (struct CRefUnRefPointerMsgId *)v15);
}
