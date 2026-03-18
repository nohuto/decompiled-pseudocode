/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018BCDC
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01A04A4 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A1B84 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D131C (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C018420C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C018C28C (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C018C460 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C018C4B4 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2, char a3)
{
  __int64 v6; // rdx
  CTouchProcessor *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct CPointerInfoNode *v21; // rdx
  struct CPointerQFrame *v22; // rdx
  CInpLockGuard *v23[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+8h] BYREF
  int v25; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v23,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v7, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  if ( (unsigned int)dword_1C0244A70 > 5 && tlgKeywordOn((__int64)&dword_1C0244A70, 32LL) )
  {
    v25 = *((_DWORD *)a2 + 10);
    v24 = *((_QWORD *)a2 + 9);
    v26 = *((_QWORD *)a2 + 14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0244A70,
      byte_1C02171D2,
      v12,
      v13,
      (__int64)&v26,
      (__int64)&v24,
      (__int64)&v25);
  }
  if ( !a3 )
  {
    if ( *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    v14 = (_QWORD *)((char *)a2 + 8);
    v15 = *((_QWORD *)a2 + 1);
    if ( *(struct CPointerInputFrame **)(v15 + 8) != (struct CPointerInputFrame *)((char *)a2 + 8) )
      goto LABEL_21;
    v16 = (_QWORD *)*((_QWORD *)a2 + 2);
    if ( (_QWORD *)*v16 != v14
      || (*v16 = v15,
          *(_QWORD *)(v15 + 8) = v16,
          *((_QWORD *)a2 + 2) = (char *)a2 + 8,
          *v14 = v14,
          v17 = (_QWORD *)((char *)a2 + 24),
          v10 = *((_QWORD *)a2 + 3),
          *(struct CPointerInputFrame **)(v10 + 8) != (struct CPointerInputFrame *)((char *)a2 + 24))
      || (v11 = (CTouchProcessor *)*((_QWORD *)a2 + 4), *(_QWORD **)v11 != v17) )
    {
LABEL_21:
      __fastfail(3u);
    }
    *(_QWORD *)v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *((_QWORD *)a2 + 4) = (char *)a2 + 24;
    *v17 = v17;
  }
  v18 = *((_DWORD *)a2 + 30);
  if ( (v18 & 0x100) == 0 )
  {
    if ( (v18 & 0x80u) == 0 )
    {
      v20 = *((_DWORD *)this + 57);
      if ( !v20 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
        v20 = *((_DWORD *)this + 57);
      }
      *((_DWORD *)this + 57) = v20 - 1;
    }
    else
    {
      v19 = *((_DWORD *)this + 56);
      if ( !v19 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
        v19 = *((_DWORD *)this + 56);
      }
      *((_DWORD *)this + 56) = v19 - 1;
    }
  }
  v21 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
  if ( v21 )
    CTouchProcessor::FreePointerInfoList(v11, v21, *((_DWORD *)a2 + 12));
  v22 = (struct CPointerQFrame *)*((_QWORD *)a2 + 18);
  if ( v22 )
    CTouchProcessor::FreePointerQFrameList(v11, v22, *((_DWORD *)a2 + 12));
  HMAssignmentUnlock((__int64 *)a2 + 19, (__int64)v22, v12, v13);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)a2 + 16));
  Win32FreePool((__int64)a2);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v23);
}
