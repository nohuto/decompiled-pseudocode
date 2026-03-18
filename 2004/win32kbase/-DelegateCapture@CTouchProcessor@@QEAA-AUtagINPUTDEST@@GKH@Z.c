/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C018C550
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C018C694 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018DC38 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  char *v19; // rcx
  char *v20; // rax
  char *v21; // rdi
  _OWORD v23[7]; // [rsp+28h] [rbp-81h] BYREF
  char v24; // [rsp+98h] [rbp-11h]
  int v25; // [rsp+99h] [rbp-10h]
  __int16 v26; // [rsp+9Dh] [rbp-Ch]
  char v27; // [rsp+9Fh] [rbp-Ah]
  _BYTE v28[40]; // [rsp+A8h] [rbp-1h] BYREF
  CInpLockGuard *v29; // [rsp+D0h] [rbp+27h]
  int v30; // [rsp+D8h] [rbp+2Fh]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v28,
    (struct CInpLockGuard *)(a1 + 40),
    0LL);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v19 = (char *)NodeById + 224;
  v20 = (char *)*((_QWORD *)NodeById + 28);
  if ( v20 == v19 )
    goto LABEL_2;
  do
  {
    v21 = v20;
    if ( *((_DWORD *)v20 + 6) == a4 )
      break;
    v20 = *(char **)v20;
  }
  while ( v20 != v19 );
  if ( v20 == v19 )
  {
LABEL_2:
    v25 = 0;
    v26 = 0;
    v27 = 0;
    memset(v23, 0, sizeof(v23));
    v13 = v23[1];
    *a2 = v23[0];
    v24 = 0;
    v14 = v23[2];
    a2[1] = v13;
    v15 = v23[3];
    a2[2] = v14;
    v16 = v23[4];
    a2[3] = v15;
    v17 = v23[5];
    a2[4] = v16;
    v18 = v23[6];
    a2[5] = v17;
    a2[6] = v18;
    CInputDest::SetEmpty((CInputDest *)v23);
  }
  else
  {
    if ( *((_WORD *)v21 + 10) != a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v10, v11, v12);
    if ( *((_DWORD *)v21 + 6) != a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v10, v11, v12);
    CTouchProcessor::DelegateCaptureInt(a1, a2, v21, a5);
  }
  if ( !v30 )
    CInpLockGuard::UnLock((PERESOURCE *)v29, (struct CRefUnRefPointerMsgId *)v28);
  return a2;
}
