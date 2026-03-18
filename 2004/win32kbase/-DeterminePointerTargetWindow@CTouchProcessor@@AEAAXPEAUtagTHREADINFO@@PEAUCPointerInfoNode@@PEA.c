/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018CC74
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018D084 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019A590 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00692B8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C006939C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C01836BC (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0192ECC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019556C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0195D50 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0198A70 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0199288 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C019BC58 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C01C94D8 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C01CD9C4 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  CTouchProcessor *v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // rbx
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r12
  struct CInputDest *v38; // rdx
  struct tagTHREADINFO *v39; // rbx
  _OWORD *v40; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  CPointerInfoNode *v51; // rcx
  int v52; // r9d
  __int64 v53; // [rsp+38h] [rbp-C8h]
  int v54; // [rsp+48h] [rbp-B8h]
  char *v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v58; // [rsp+74h] [rbp-8Ch]
  tagPOINT v59; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v60; // [rsp+80h] [rbp-80h]
  struct CInputDest *v61; // [rsp+88h] [rbp-78h] BYREF
  struct tagTHREADINFO *v62; // [rsp+90h] [rbp-70h]
  struct tagQ *v63; // [rsp+98h] [rbp-68h]
  int *v64; // [rsp+A0h] [rbp-60h]
  _OWORD v65[7]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v66[40]; // [rsp+120h] [rbp+20h] BYREF
  CInpLockGuard *v67; // [rsp+148h] [rbp+48h]
  _BYTE v68[64]; // [rsp+150h] [rbp+50h] BYREF
  char v69; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v70[16]; // [rsp+200h] [rbp+100h] BYREF

  v9 = *((unsigned __int16 *)a3 + 86);
  v10 = a4;
  v59 = 0LL;
  v57 = 0;
  v64 = a6;
  v58 = v9;
  v63 = a4;
  v62 = a2;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
  CInputDest::SetEmpty(a8);
  v21 = *((_QWORD *)a3 + 2);
  v61 = 0LL;
  v22 = CTouchProcessor::RecheckPointerCapture(this, v21, a5, &v61, &v57);
  if ( v22 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v61);
  }
  else
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
    v27 = *((_DWORD *)a3 + 45);
    if ( (v27 & 0x40004) != 0 && (v27 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 86), &v59);
  if ( !v22 )
  {
    v29 = CTouchProcessor::PointerFlagsToMessage(v28, *((_DWORD *)a3 + 45));
    v33 = *((unsigned __int16 *)a3 + 90);
    v34 = *((unsigned __int16 *)a3 + 100);
    v35 = *((_QWORD *)a3 + 25);
    v60 = v29;
    v36 = v9 | ((unsigned __int64)(v33 & 0xFFFFE1F7) << 16);
    v37 = v34 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v30, v31, v32);
    v38 = (struct CPointerInfoNode *)((char *)a3 + 352);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v68, v38, v31, v32);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v66,
        (CTouchProcessor *)((char *)this + 40),
        0LL);
      v56 = *((_QWORD *)a3 + 2);
      v55 = (char *)a3 + 160;
      v54 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v68, v38, v31, v32);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v66,
        (CTouchProcessor *)((char *)this + 40),
        0LL);
      v56 = *((_QWORD *)a3 + 2);
      v55 = (char *)a3 + 160;
      v54 = 1;
    }
    v53 = v35;
    v39 = v62;
    v40 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v69,
                      (_DWORD)v62,
                      (int)a3 + 352,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v60,
                      v36,
                      v37,
                      v53,
                      (__int64)&v57,
                      v54,
                      (__int64)v55,
                      v56,
                      (__int64)&v59);
    v41 = v40[1];
    v65[0] = *v40;
    v42 = v40[2];
    v65[1] = v41;
    v43 = v40[3];
    v65[2] = v42;
    v44 = v40[4];
    v65[3] = v43;
    v45 = v40[5];
    v65[4] = v44;
    v46 = v40[6];
    v65[5] = v45;
    v65[6] = v46;
    CInputDest::CInputDest((CInputDest *)v70, (const struct tagINPUTDEST *)v65);
    CInputDest::operator=((__int64)a8, v70);
    CInputDest::SetEmpty((CInputDest *)v70);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v67, (struct CRefUnRefPointerMsgId *)v66);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v68);
    InputTraceLogging::Pointer::SecondaryHitTest((struct CPointerInfoNode *)((char *)a3 + 168), a8, &v59);
    if ( *(_DWORD *)a8 )
    {
      if ( v57 == -1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v58, &v59);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v51, v39) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v61, &v57) )
      CInputDest::operator=((__int64)a8, (__int64)v61);
    v10 = v63;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 25),
                        (char *)a3 + 160,
                        v59,
                        a7) )
  {
    a7->x = 0;
    a7->y = 0;
  }
  v52 = *(_DWORD *)a8;
  if ( *(_DWORD *)a8 && v10 && !CInputDest::UsesQueue(a8, v10) )
  {
    CInputDest::SetEmpty(a8);
    v52 = *(_DWORD *)a8;
  }
  if ( v52 )
    *v64 = v57;
}
