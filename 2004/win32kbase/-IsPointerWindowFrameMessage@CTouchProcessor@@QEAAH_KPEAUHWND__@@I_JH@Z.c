/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C01953D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D142C (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0191B40 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C019E558 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        unsigned int *a2,
        HWND a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  const struct CPointerInputFrame *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rcx
  CTouchProcessor *v18; // rcx
  __int64 v19; // rax
  CPointerInfoNode *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const struct CPointerInputFrame *v25; // rdx
  int PointerEventTarget; // eax
  CInpLockGuard *v28[8]; // [rsp+20h] [rbp-58h] BYREF
  HWND v29; // [rsp+80h] [rbp+8h] BYREF

  v9 = 0;
  v29 = 0LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v28,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( (unsigned int)IsPointerInputMessageWithState(a4) && (!a6 || a4 - 585 > 1) )
  {
    if ( a2 )
    {
      v13 = CTouchProcessor::ReferenceFrame(this, a2[7]);
      if ( v13 )
      {
        v16 = a5;
        if ( !a5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14, v15);
        v17 = *((unsigned int *)v13 + 10);
        if ( *(_DWORD *)(v16 + 28) == (_DWORD)v17 )
        {
          v19 = *(unsigned int *)(v16 + 32);
          if ( (unsigned int)v19 >= *((_DWORD *)v13 + 12) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v11, v14, v15);
            v19 = *(unsigned int *)(v16 + 32);
          }
          v20 = (CPointerInfoNode *)(*((_QWORD *)v13 + 17) + 480 * v19);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v20) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
          v18 = this;
          if ( (*(_DWORD *)v20 & 0x100) != 0 )
          {
            PointerEventTarget = CTouchProcessor::GetPointerEventTarget((struct _KTHREAD **)this, v20, &v29, v24);
            v25 = v13;
            v18 = this;
            if ( PointerEventTarget )
            {
              CTouchProcessor::UnreferenceFrame(this, v13);
              LOBYTE(v9) = v29 == a3;
              goto LABEL_19;
            }
            goto LABEL_16;
          }
        }
        else
        {
          v18 = this;
        }
        v25 = v13;
LABEL_16:
        CTouchProcessor::UnreferenceFrame(v18, v25);
      }
    }
  }
LABEL_19:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v28);
  return v9;
}
