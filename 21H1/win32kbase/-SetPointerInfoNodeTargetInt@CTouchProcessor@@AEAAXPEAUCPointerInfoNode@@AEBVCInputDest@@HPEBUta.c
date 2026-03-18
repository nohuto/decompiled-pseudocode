/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1798
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1690 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C01A3438 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0189298 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rcx
  HWND WindowHandle; // rax
  CInputDest *v14; // rcx
  bool v15; // zf
  HWND v16; // rsi
  __int64 v17; // rcx
  int v18; // edx
  int v19; // eax
  __int64 v20[14]; // [rsp+20h] [rbp-A8h] BYREF
  char v21; // [rsp+90h] [rbp-38h]

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  *((_DWORD *)a2 + 1) &= ~0x100u;
  WindowHandle = CInputDest::GetWindowHandle(a3);
  v15 = *((_DWORD *)a2 + 111) == 0;
  *((_QWORD *)a2 + 24) = WindowHandle;
  if ( !v15 )
  {
    v16 = CInputDest::GetWindowHandle(v14);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)a2 + 352)) != v16 )
    {
      memset(v20, 0, sizeof(v20));
      v21 = 0;
      CInputDest::SetupFromInputDestAndWindow(v20, (__int64)a2 + 352, v16, 1);
      CInputDest::operator=((__int64)a2 + 352, (__int64)v20);
      CInputDest::SetEmpty((CInputDest *)v20);
    }
  }
  v17 = *(unsigned int *)a2;
  LODWORD(v17) = v17 | 0x100;
  *((_DWORD *)a2 + 36) = a4;
  *(_DWORD *)a2 = v17;
  if ( a9 )
  {
    LODWORD(v17) = v17 | 0x200;
    *(_DWORD *)a2 = v17;
  }
  if ( !a8 )
  {
    if ( a9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
      LODWORD(v17) = *(_DWORD *)a2;
    }
    LODWORD(v17) = v17 & 0xFFFFFDFF;
    *(_DWORD *)a2 = v17;
  }
  if ( a7 )
  {
    LODWORD(v17) = v17 & 0xFFFFF3FF | 0x400;
    *(_DWORD *)a2 = v17;
  }
  if ( a5 )
    *(struct tagPOINT *)((char *)a2 + 148) = *a5;
  if ( a8 )
  {
    v18 = 0x40000;
    if ( (v17 & 0x40000) != 0 )
      return;
    v19 = a6 << 18;
  }
  else
  {
    v18 = 0x20000;
    if ( (v17 & 0x20000) != 0 )
      return;
    v19 = a6 << 17;
  }
  *(_DWORD *)a2 = v17 ^ v18 & (v17 ^ v19);
}
