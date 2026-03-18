/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0192250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0192394 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0193938 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        __int64 a1,
        _OWORD *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  struct CInputPointerNode *NodeById; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  char *v16; // rcx
  char *v17; // rax
  char *v18; // rdi
  _OWORD v20[7]; // [rsp+28h] [rbp-81h] BYREF
  char v21; // [rsp+98h] [rbp-11h]
  int v22; // [rsp+99h] [rbp-10h]
  __int16 v23; // [rsp+9Dh] [rbp-Ch]
  char v24; // [rsp+9Fh] [rbp-Ah]
  _BYTE v25[40]; // [rsp+A8h] [rbp-1h] BYREF
  CInpLockGuard *v26; // [rsp+D0h] [rbp+27h]
  int v27; // [rsp+D8h] [rbp+2Fh]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v25,
    (struct CInpLockGuard *)(a1 + 40),
    0LL);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v16 = (char *)NodeById + 224;
  v17 = (char *)*((_QWORD *)NodeById + 28);
  if ( v17 == v16 )
    goto LABEL_2;
  do
  {
    v18 = v17;
    if ( *((_DWORD *)v17 + 6) == a4 )
      break;
    v17 = *(char **)v17;
  }
  while ( v17 != v16 );
  if ( v17 == v16 )
  {
LABEL_2:
    v22 = 0;
    v23 = 0;
    v24 = 0;
    memset(v20, 0, sizeof(v20));
    v10 = v20[1];
    *a2 = v20[0];
    v21 = 0;
    v11 = v20[2];
    a2[1] = v10;
    v12 = v20[3];
    a2[2] = v11;
    v13 = v20[4];
    a2[3] = v12;
    v14 = v20[5];
    a2[4] = v13;
    v15 = v20[6];
    a2[5] = v14;
    a2[6] = v15;
    CInputDest::SetEmpty((CInputDest *)v20);
  }
  else
  {
    if ( *((_WORD *)v18 + 10) != a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    if ( *((_DWORD *)v18 + 6) != a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    CTouchProcessor::DelegateCaptureInt(a1, a2, v18, a5);
  }
  if ( !v27 )
    CInpLockGuard::UnLock((PERESOURCE *)v26, (struct CRefUnRefPointerMsgId *)v25);
  return a2;
}
