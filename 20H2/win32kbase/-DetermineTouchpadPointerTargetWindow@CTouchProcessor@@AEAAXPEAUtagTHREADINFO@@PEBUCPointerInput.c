/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018AB64
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0180D48 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018A754 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01909AC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0196540 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  CInputDest *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct CInputDest *v27; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v28[128]; // [rsp+50h] [rbp-C8h] BYREF

  CInputDest::SetEmpty(a10, (__int64)a2, (__int64)a3, (__int64)a4);
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
    v27 = 0LL;
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v14, a7, &v27, a8) )
    {
      CTouchProcessor::GetPointerOffset(this, *((_WORD *)a4 + 86), a9);
      CInputDest::operator=((__int64)a10, (__int64)v27, v19, v20);
    }
    else if ( *((_DWORD *)a5 + 112) )
    {
      *a8 = 0;
      *a9 = 0LL;
      v21 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 57), 1);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 40);
        if ( *(char *)(v22 + 20) >= 0 && *(char *)(v22 + 19) >= 0 )
        {
          *a8 = *((_DWORD *)a5 + 116);
          *a9 = *(struct tagPOINT *)((char *)a5 + 468);
          v23 = CInputDest::CInputDest((CInputDest *)v28, (struct tagWND *const)v21);
          CInputDest::operator=((__int64)a10, v23);
          CInputDest::SetEmpty((CInputDest *)v28, v24, v25, v26);
        }
      }
    }
    else if ( *(_DWORD *)a10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
    }
  }
}
