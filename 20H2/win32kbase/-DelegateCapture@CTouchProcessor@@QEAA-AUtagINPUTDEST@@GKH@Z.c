/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C018A030
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C018A174 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        __int64 a1,
        _OWORD *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rcx
  char *v23; // rax
  char *v24; // rdi
  _OWORD v26[7]; // [rsp+28h] [rbp-81h] BYREF
  char v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+99h] [rbp-10h]
  __int16 v29; // [rsp+9Dh] [rbp-Ch]
  char v30; // [rsp+9Fh] [rbp-Ah]
  _BYTE v31[40]; // [rsp+A8h] [rbp-1h] BYREF
  CInpLockGuard *v32; // [rsp+D0h] [rbp+27h]
  int v33; // [rsp+D8h] [rbp+2Fh]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v31,
    (struct CInpLockGuard *)(a1 + 40),
    0LL);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v22 = (char *)NodeById + 224;
  v23 = (char *)*((_QWORD *)NodeById + 28);
  if ( v23 == v22 )
    goto LABEL_2;
  do
  {
    v24 = v23;
    if ( *((_DWORD *)v23 + 6) == a4 )
      break;
    v23 = *(char **)v23;
  }
  while ( v23 != v22 );
  if ( v23 == v22 )
  {
LABEL_2:
    v28 = 0;
    v29 = 0;
    v30 = 0;
    memset(v26, 0, sizeof(v26));
    v13 = v26[1];
    *a2 = v26[0];
    v27 = 0;
    v14 = v26[2];
    a2[1] = v13;
    v15 = v26[3];
    a2[2] = v14;
    v16 = v26[4];
    a2[3] = v15;
    v17 = v26[5];
    a2[4] = v16;
    v18 = v26[6];
    a2[5] = v17;
    a2[6] = v18;
    CInputDest::SetEmpty((CInputDest *)v26, v19, v20, v21);
  }
  else
  {
    if ( *((_WORD *)v24 + 10) != a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v10, v11, v12);
    if ( *((_DWORD *)v24 + 6) != a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v10, v11, v12);
    CTouchProcessor::DelegateCaptureInt(a1, a2, v24, a5);
  }
  if ( !v33 )
    CInpLockGuard::UnLock((PERESOURCE *)v32, (struct CRefUnRefPointerMsgId *)v31);
  return a2;
}
