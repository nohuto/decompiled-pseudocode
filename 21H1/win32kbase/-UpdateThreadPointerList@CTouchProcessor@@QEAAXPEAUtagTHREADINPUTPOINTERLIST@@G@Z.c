/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0009750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C019ACC0 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C01CDC9C (ApiSetEditionFindThreadPointerData.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C01D09CC (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  struct tagTHREADINPUTPOINTERLIST *v4; // rbx
  unsigned __int64 v6; // rdx
  int v7; // ebp
  struct tagTHREADINPUTPOINTERLIST *v8; // rdi
  PDEVICE_OBJECT v9; // rcx
  int v10; // r9d
  __int64 v11; // r15
  __int64 ThreadPointerData; // rdi
  struct tagTHREADINPUTPOINTERLIST *v13; // rax
  int v14; // r12d
  struct tagTHREADINPUTPOINTERLIST *v15; // rsi
  int v16; // ecx
  __int64 v18; // r14
  _BYTE v19[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v20; // [rsp+58h] [rbp-30h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      116,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v19,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v7 = 0;
  if ( a3 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 117;
        goto LABEL_37;
      }
    }
  }
  else
  {
    v8 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 == v4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      v9 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      v10 = 118;
LABEL_37:
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_(v9->DeviceExtension, v6, 7, v10, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      goto LABEL_8;
    }
    v11 = 0LL;
    if ( a3 )
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData(v4, a3);
      if ( !ThreadPointerData )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v11 = *(_QWORD *)(ThreadPointerData + 24);
      v8 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    }
    while ( v8 != v4 )
    {
      v13 = v8;
      v14 = v7++;
      v15 = v8;
      v8 = *(struct tagTHREADINPUTPOINTERLIST **)v8;
      v6 = *((_QWORD *)v13 + 3);
      v16 = *((_DWORD *)v13 + 12);
      if ( v11 == v6 )
      {
        *((_DWORD *)v13 + 12) = v16 | 2;
      }
      else if ( (v16 & 2) != 0 && (!v6 || !v11 || *(_DWORD *)(v6 + 28) != *(_DWORD *)(v11 + 28)) )
      {
        if ( (unsigned int)CTouchProcessor::IsLastMsgData(this, v6) )
          goto LABEL_30;
        v18 = *((_QWORD *)v15 + 3);
        if ( *((struct _KTHREAD **)this + 9) != KeGetCurrentThread() )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( (*(_DWORD *)(v18 + 36) & 0x20) != 0 )
        {
LABEL_30:
          ApiSetEditionUnlinkAndFreeThreadPointerData(v4, v15);
          v7 = v14;
        }
      }
    }
    if ( v7 != *((_DWORD *)v4 + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 119;
        goto LABEL_37;
      }
    }
  }
LABEL_8:
  CInpLockGuard::UnLock(v20, (struct CRefUnRefPointerMsgId *)v19);
}
