/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C01965F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        unsigned int *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  __int64 v8; // rcx
  const struct CPointerInputFrame *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  _BYTE v16[40]; // [rsp+20h] [rbp-58h] BYREF
  CInpLockGuard *v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+50h] [rbp-28h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v16,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( a2 && (v9 = CTouchProcessor::ReferenceFrame(this, a2[7])) != 0LL )
  {
    v10 = a2[8];
    if ( (unsigned int)v10 >= *((_DWORD *)v9 + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      v10 = a2[8];
    }
    v11 = *((_QWORD *)v9 + 17) + 480 * v10;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    v13 = *((unsigned __int16 *)a2 + 8);
    if ( *(_DWORD *)(v11 + 172) != v13 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      LOWORD(v13) = *((_WORD *)a2 + 8);
    }
    *a3 = v13;
    *a4 = *((_DWORD *)v9 + 12);
    v14 = *(_QWORD *)(v11 + 192);
    CTouchProcessor::UnreferenceFrame(this, v9);
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v18 )
    CInpLockGuard::UnLock((PERESOURCE *)v17, (struct CRefUnRefPointerMsgId *)v16);
  return v14;
}
