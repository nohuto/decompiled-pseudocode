/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192974
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192D84 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C005F858 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C01893BC (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0198BCC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019B254 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C019BA40 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C019E760 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C019EF78 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01A19B8 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C01CF458 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C01D3944 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  __int64 v9; // r12
  const struct tagQ *v10; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // ecx
  CTouchProcessor *v19; // rcx
  unsigned int v20; // eax
  int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r12
  struct CInputDest *v26; // rdx
  struct tagTHREADINFO *v27; // rbx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v35; // rcx
  CPointerInfoNode *v36; // rcx
  int v37; // r9d
  __int64 v38; // [rsp+38h] [rbp-C8h]
  int v39; // [rsp+48h] [rbp-B8h]
  char *v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v43; // [rsp+74h] [rbp-8Ch]
  tagPOINT v44; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+80h] [rbp-80h]
  struct CInputDest *v46; // [rsp+88h] [rbp-78h] BYREF
  struct tagTHREADINFO *v47; // [rsp+90h] [rbp-70h]
  struct tagQ *v48; // [rsp+98h] [rbp-68h]
  int *v49; // [rsp+A0h] [rbp-60h]
  _OWORD v50[7]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v51[40]; // [rsp+120h] [rbp+20h] BYREF
  CInpLockGuard *v52; // [rsp+148h] [rbp+48h]
  _BYTE v53[64]; // [rsp+150h] [rbp+50h] BYREF
  char v54; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v55[16]; // [rsp+200h] [rbp+100h] BYREF

  v9 = *((unsigned __int16 *)a3 + 86);
  v10 = a4;
  v44 = 0LL;
  v42 = 0;
  v49 = a6;
  v43 = v9;
  v48 = a4;
  v47 = a2;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  CInputDest::SetEmpty(a8);
  v15 = *((_QWORD *)a3 + 2);
  v46 = 0LL;
  v16 = CTouchProcessor::RecheckPointerCapture(this, v15, a5, &v46, &v42);
  if ( v16 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v46);
  }
  else
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
    v18 = *((_DWORD *)a3 + 45);
    if ( (v18 & 0x40004) != 0 && (v18 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 86), &v44);
  if ( !v16 )
  {
    v20 = CTouchProcessor::PointerFlagsToMessage(v19, *((_DWORD *)a3 + 45));
    v21 = *((unsigned __int16 *)a3 + 90);
    v22 = *((unsigned __int16 *)a3 + 100);
    v23 = *((_QWORD *)a3 + 25);
    v45 = v20;
    v24 = v9 | ((unsigned __int64)(v21 & 0xFFFFE1F7) << 16);
    v25 = v22 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
    v26 = (struct CPointerInfoNode *)((char *)a3 + 352);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v53, v26);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v51,
        (CTouchProcessor *)((char *)this + 40),
        0LL);
      v41 = *((_QWORD *)a3 + 2);
      v40 = (char *)a3 + 160;
      v39 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v53, v26);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v51,
        (CTouchProcessor *)((char *)this + 40),
        0LL);
      v41 = *((_QWORD *)a3 + 2);
      v40 = (char *)a3 + 160;
      v39 = 1;
    }
    v38 = v23;
    v27 = v47;
    v28 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v54,
                      (_DWORD)v47,
                      (int)a3 + 352,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v45,
                      v24,
                      v25,
                      v38,
                      (__int64)&v42,
                      v39,
                      (__int64)v40,
                      v41,
                      (__int64)&v44);
    v29 = v28[1];
    v50[0] = *v28;
    v30 = v28[2];
    v50[1] = v29;
    v31 = v28[3];
    v50[2] = v30;
    v32 = v28[4];
    v50[3] = v31;
    v33 = v28[5];
    v50[4] = v32;
    v34 = v28[6];
    v50[5] = v33;
    v50[6] = v34;
    CInputDest::CInputDest((CInputDest *)v55, (const struct tagINPUTDEST *)v50);
    CInputDest::operator=((__int64)a8, v55);
    CInputDest::SetEmpty((CInputDest *)v55);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v52, (struct CRefUnRefPointerMsgId *)v51);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v53);
    InputTraceLogging::Pointer::SecondaryHitTest((struct CPointerInfoNode *)((char *)a3 + 168), a8, &v44);
    if ( *(_DWORD *)a8 )
    {
      if ( v42 == -1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v43, &v44);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v36, v27) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v46, &v42) )
      CInputDest::operator=((__int64)a8, (__int64)v46);
    v10 = v48;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 25),
                        (char *)a3 + 160,
                        v44,
                        a7) )
  {
    a7->x = 0;
    a7->y = 0;
  }
  v37 = *(_DWORD *)a8;
  if ( *(_DWORD *)a8 && v10 && !CInputDest::UsesQueue(a8, v10) )
  {
    CInputDest::SetEmpty(a8);
    v37 = *(_DWORD *)a8;
  }
  if ( v37 )
    *v49 = v42;
}
