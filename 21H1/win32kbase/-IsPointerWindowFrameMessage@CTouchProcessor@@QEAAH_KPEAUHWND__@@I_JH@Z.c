/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C019B0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0197840 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01A42B8 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        unsigned int *a2,
        HWND a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  CPointerInfoNode *v15; // rbx
  __int64 v16; // rcx
  BOOL v17; // ebx
  _BYTE v19[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-18h]
  HWND v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v19,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( !(unsigned int)IsPointerInputMessageWithState(a4) || a6 && a4 - 585 <= 1 )
    goto LABEL_16;
  if ( !a2 )
    goto LABEL_16;
  v11 = CTouchProcessor::ReferenceFrame(this, a2[7]);
  if ( !v11 )
    goto LABEL_16;
  v12 = a5;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  v13 = *((unsigned int *)v11 + 10);
  if ( *(_DWORD *)(v12 + 28) != (_DWORD)v13 )
    goto LABEL_16;
  v14 = *(unsigned int *)(v12 + 32);
  if ( (unsigned int)v14 >= *((_DWORD *)v11 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v14 = *(unsigned int *)(v12 + 32);
  }
  v15 = (CPointerInfoNode *)(*((_QWORD *)v11 + 17) + 480 * v14);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v15) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
  if ( (*(_DWORD *)v15 & 0x100) != 0
    && (unsigned int)CTouchProcessor::GetPointerEventTarget((struct _KTHREAD **)this, v15, &v22) )
  {
    v17 = v22 == a3;
  }
  else
  {
LABEL_16:
    v17 = 0;
  }
  if ( !v21 )
    CInpLockGuard::UnLock((PERESOURCE *)v20, (struct CRefUnRefPointerMsgId *)v19);
  return v17;
}
