/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C001F380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C0194FC0 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C01C7D1C (ApiSetEditionFindThreadPointerData.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C01CAA4C (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  struct tagTHREADINPUTPOINTERLIST *v4; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebp
  struct tagTHREADINPUTPOINTERLIST *v10; // rdi
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 ThreadPointerData; // rdi
  struct tagTHREADINPUTPOINTERLIST *v16; // rax
  int v17; // r12d
  struct tagTHREADINPUTPOINTERLIST *v18; // rsi
  int v19; // ecx
  __int64 v21; // rcx
  __int64 v22; // r14
  _BYTE v23[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v24; // [rsp+58h] [rbp-30h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      117,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v23,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v9 = 0;
  if ( a3 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 118;
        goto LABEL_37;
      }
    }
  }
  else
  {
    v10 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 == v4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      v12 = 119;
LABEL_37:
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_(v11->DeviceExtension, v6, 7, v12, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      goto LABEL_8;
    }
    v13 = 0LL;
    if ( a3 )
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData(v4, a3);
      if ( !ThreadPointerData )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v6, v7, v8);
      v13 = *(_QWORD *)(ThreadPointerData + 24);
      v10 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    }
    while ( v10 != v4 )
    {
      v16 = v10;
      v17 = v9++;
      v18 = v10;
      v10 = *(struct tagTHREADINPUTPOINTERLIST **)v10;
      v6 = *((_QWORD *)v16 + 3);
      v19 = *((_DWORD *)v16 + 12);
      if ( v13 == v6 )
      {
        *((_DWORD *)v16 + 12) = v19 | 2;
      }
      else if ( (v19 & 2) != 0 && (!v6 || !v13 || *(_DWORD *)(v6 + 28) != *(_DWORD *)(v13 + 28)) )
      {
        if ( (unsigned int)CTouchProcessor::IsLastMsgData(this, v6) )
          goto LABEL_30;
        v22 = *((_QWORD *)v18 + 3);
        if ( *((struct _KTHREAD **)this + 9) != KeGetCurrentThread() )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v6, v7, v8);
        if ( (*(_DWORD *)(v22 + 36) & 0x20) != 0 )
        {
LABEL_30:
          ApiSetEditionUnlinkAndFreeThreadPointerData(v4, v18);
          v9 = v17;
        }
      }
    }
    if ( v9 != *((_DWORD *)v4 + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v6, v7, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 120;
        goto LABEL_37;
      }
    }
  }
LABEL_8:
  CInpLockGuard::UnLock(v24, (struct CRefUnRefPointerMsgId *)v23);
}
