/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C01908F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        unsigned int *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct CPointerInputFrame *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rbx
  _BYTE v22[40]; // [rsp+20h] [rbp-58h] BYREF
  CInpLockGuard *v23; // [rsp+48h] [rbp-30h]
  int v24; // [rsp+50h] [rbp-28h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v22,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( a2 && (v10 = CTouchProcessor::ReferenceFrame(this, a2[7])) != 0LL )
  {
    v13 = a2[8];
    if ( (unsigned int)v13 >= *((_DWORD *)v10 + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11, v12);
      v13 = a2[8];
    }
    v14 = *((_QWORD *)v10 + 17) + 480 * v13;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v14) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
    v19 = *((unsigned __int16 *)a2 + 8);
    if ( *(_DWORD *)(v14 + 172) != v19 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
      LOWORD(v19) = *((_WORD *)a2 + 8);
    }
    *a3 = v19;
    *a4 = *((_DWORD *)v10 + 12);
    v20 = *(_QWORD *)(v14 + 192);
    CTouchProcessor::UnreferenceFrame(this, v10);
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v24 )
    CInpLockGuard::UnLock((PERESOURCE *)v23, (struct CRefUnRefPointerMsgId *)v22);
  return v20;
}
