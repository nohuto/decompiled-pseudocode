/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0199538
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0199430 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C019B1D8 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0181058 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTargetInt(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        const struct CInputDest *a3,
        int a4,
        const struct tagPOINT *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  HWND WindowHandle; // rax
  __int64 v17; // rdx
  CInputDest *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  HWND v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // edx
  int v30; // eax
  _QWORD v31[14]; // [rsp+20h] [rbp-A8h] BYREF
  char v32; // [rsp+90h] [rbp-38h]

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  *((_DWORD *)a2 + 1) &= ~0x100u;
  WindowHandle = CInputDest::GetWindowHandle(a3);
  v21 = *((_DWORD *)a2 + 111) == 0;
  *((_QWORD *)a2 + 24) = WindowHandle;
  if ( !v21 )
  {
    v22 = CInputDest::GetWindowHandle(v18);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)a2 + 352)) != v22 )
    {
      memset(v31, 0, sizeof(v31));
      v32 = 0;
      CInputDest::SetupFromInputDestAndWindow(v31, (__int64)a2 + 352, v22, 1LL);
      CInputDest::operator=((__int64)a2 + 352, (__int64)v31, v23, v24);
      CInputDest::SetEmpty((CInputDest *)v31, v25, v26, v27);
    }
  }
  v28 = *(unsigned int *)a2;
  LODWORD(v28) = v28 | 0x100;
  *((_DWORD *)a2 + 36) = a4;
  *(_DWORD *)a2 = v28;
  if ( a9 )
  {
    LODWORD(v28) = v28 | 0x200;
    *(_DWORD *)a2 = v28;
  }
  if ( !a8 )
  {
    if ( a9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v17, v19, v20);
      LODWORD(v28) = *(_DWORD *)a2;
    }
    LODWORD(v28) = v28 & 0xFFFFFDFF;
    *(_DWORD *)a2 = v28;
  }
  if ( a7 )
  {
    LODWORD(v28) = v28 & 0xFFFFF3FF | 0x400;
    *(_DWORD *)a2 = v28;
  }
  if ( a5 )
    *(struct tagPOINT *)((char *)a2 + 148) = *a5;
  if ( a8 )
  {
    v29 = 0x40000;
    if ( (v28 & 0x40000) != 0 )
      return;
    v30 = a6 << 18;
  }
  else
  {
    v29 = 0x20000;
    if ( (v28 & 0x20000) != 0 )
      return;
    v30 = a6 << 17;
  }
  *(_DWORD *)a2 = v28 ^ v29 & (v28 ^ v30);
}
