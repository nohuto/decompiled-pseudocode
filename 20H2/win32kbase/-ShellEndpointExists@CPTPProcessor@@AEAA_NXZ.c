/*
 * XREFs of ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C01A23AC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A1020 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01C9284 (ApiSetGetPTPShellTarget.c)
 */

bool __fastcall CPTPProcessor::ShellEndpointExists(CPTPProcessor *this)
{
  _OWORD *PTPShellTarget; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD v13[7]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v14[112]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v15[32]; // [rsp+100h] [rbp+0h] BYREF

  PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v14);
  v2 = PTPShellTarget[1];
  v13[0] = *PTPShellTarget;
  v3 = PTPShellTarget[2];
  v13[1] = v2;
  v4 = PTPShellTarget[3];
  v13[2] = v3;
  v5 = PTPShellTarget[4];
  v13[3] = v4;
  v6 = PTPShellTarget[5];
  v13[4] = v5;
  v7 = PTPShellTarget[6];
  v13[5] = v6;
  v13[6] = v7;
  CInputDest::CInputDest((CInputDest *)v15, (const struct tagINPUTDEST *)v13);
  v8 = v15[0] != 0;
  CInputDest::SetEmpty((CInputDest *)v15, v9, v10, v11);
  return v8;
}
