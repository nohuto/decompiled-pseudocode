/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192D84
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0188F88 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192974 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0198BCC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C019E760 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        struct tagQ *a5,
        unsigned int a6,
        int a7,
        int *a8,
        struct tagPOINT *a9,
        struct CInputDest *a10)
{
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  CInputDest *v18; // rax
  struct CInputDest *v19; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v20[128]; // [rsp+50h] [rbp-C8h] BYREF

  CInputDest::SetEmpty(a10);
  if ( (*((_DWORD *)a3 + 30) & 0x10) != 0 && !a6 )
  {
    *((_OWORD *)a5 + 28) = 0LL;
    *((_OWORD *)a5 + 29) = 0LL;
  }
  if ( (*((_DWORD *)a4 + 45) & 0x2000) != 0 )
  {
    CTouchProcessor::DeterminePointerTargetWindow(this, a2, a4, a5, a7, a8, a9, a10);
    if ( (*((_DWORD *)a4 + 45) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 112) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 57) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 116) = *a8;
        *(struct tagPOINT *)((char *)a5 + 468) = *a9;
      }
    }
  }
  else
  {
    v14 = *((_QWORD *)a4 + 2);
    v19 = 0LL;
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v14, a7, &v19, a8) )
    {
      CTouchProcessor::GetPointerOffset(this, *((_WORD *)a4 + 86), a9);
      CInputDest::operator=((__int64)a10, (__int64)v19);
    }
    else if ( *((_DWORD *)a5 + 112) )
    {
      *a8 = 0;
      *a9 = 0LL;
      v16 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 57), 1);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 40);
        if ( *(char *)(v17 + 20) >= 0 && *(char *)(v17 + 19) >= 0 )
        {
          *a8 = *((_DWORD *)a5 + 116);
          *a9 = *(struct tagPOINT *)((char *)a5 + 468);
          v18 = CInputDest::CInputDest((CInputDest *)v20, (struct tagWND *const)v16);
          CInputDest::operator=((__int64)a10, v18);
          CInputDest::SetEmpty((CInputDest *)v20);
        }
      }
    }
    else if ( *(_DWORD *)a10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    }
  }
}
