/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0193EFC
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01A8584 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A9C64 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMAssignmentUnlock @ 0x1C0073400 (HMAssignmentUnlock.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D0B7C (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C018C44C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C01944AC (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C0194680 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01946D4 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2, char a3)
{
  CTouchProcessor *v6; // rcx
  CTouchProcessor *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct CPointerInfoNode *v18; // rdx
  struct CPointerQFrame *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  CInpLockGuard *v22[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+8h] BYREF
  int v24; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+20h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v22,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v6, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  if ( (unsigned int)dword_1C024C960 > 5 && tlgKeywordOn((__int64)&dword_1C024C960, 32LL) )
  {
    v24 = *((_DWORD *)a2 + 10);
    v23 = *((_QWORD *)a2 + 9);
    v25 = *((_QWORD *)a2 + 14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024C960,
      byte_1C021EBB1,
      v8,
      v9,
      (__int64)&v25,
      (__int64)&v23,
      (__int64)&v24);
  }
  if ( !a3 )
  {
    if ( *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    v10 = (_QWORD *)((char *)a2 + 8);
    v11 = *((_QWORD *)a2 + 1);
    if ( *(struct CPointerInputFrame **)(v11 + 8) != (struct CPointerInputFrame *)((char *)a2 + 8) )
      goto LABEL_21;
    v12 = (_QWORD *)*((_QWORD *)a2 + 2);
    if ( (_QWORD *)*v12 != v10
      || (*v12 = v11,
          *(_QWORD *)(v11 + 8) = v12,
          *((_QWORD *)a2 + 2) = (char *)a2 + 8,
          *v10 = v10,
          v13 = (_QWORD *)((char *)a2 + 24),
          v14 = *((_QWORD *)a2 + 3),
          *(struct CPointerInputFrame **)(v14 + 8) != (struct CPointerInputFrame *)((char *)a2 + 24))
      || (v7 = (CTouchProcessor *)*((_QWORD *)a2 + 4), *(_QWORD **)v7 != v13) )
    {
LABEL_21:
      __fastfail(3u);
    }
    *(_QWORD *)v7 = v14;
    *(_QWORD *)(v14 + 8) = v7;
    *((_QWORD *)a2 + 4) = (char *)a2 + 24;
    *v13 = v13;
  }
  v15 = *((_DWORD *)a2 + 30);
  if ( (v15 & 0x100) == 0 )
  {
    if ( (v15 & 0x80u) == 0 )
    {
      v17 = *((_DWORD *)this + 57);
      if ( !v17 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
        v17 = *((_DWORD *)this + 57);
      }
      *((_DWORD *)this + 57) = v17 - 1;
    }
    else
    {
      v16 = *((_DWORD *)this + 56);
      if ( !v16 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
        v16 = *((_DWORD *)this + 56);
      }
      *((_DWORD *)this + 56) = v16 - 1;
    }
  }
  v18 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
  if ( v18 )
    CTouchProcessor::FreePointerInfoList(v7, v18, *((_DWORD *)a2 + 12));
  v19 = (struct CPointerQFrame *)*((_QWORD *)a2 + 18);
  if ( v19 )
    CTouchProcessor::FreePointerQFrameList(v7, v19, *((_DWORD *)a2 + 12));
  HMAssignmentUnlock((__int64 *)a2 + 19);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)a2 + 16));
  Win32FreePool((__int64)a2, v20, v21);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v22);
}
