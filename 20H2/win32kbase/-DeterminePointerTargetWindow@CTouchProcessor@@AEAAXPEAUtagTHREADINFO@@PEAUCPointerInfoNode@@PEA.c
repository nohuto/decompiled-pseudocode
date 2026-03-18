/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018A754
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018AB64 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C00A6F80 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C018117C (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01909AC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019303C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0193820 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0196540 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0196D58 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0199758 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C01C7158 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C01CB644 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  CTouchProcessor *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r14d
  __int64 v36; // rcx
  __int64 v37; // rbx
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // r12
  struct CInputDest *v40; // rdx
  struct tagTHREADINFO *v41; // rbx
  _OWORD *v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  CPointerInfoNode *v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // [rsp+38h] [rbp-C8h]
  int v69; // [rsp+48h] [rbp-B8h]
  char *v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  int v72; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v73; // [rsp+74h] [rbp-8Ch]
  struct tagPOINT v74; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v75; // [rsp+80h] [rbp-80h]
  struct CInputDest *v76; // [rsp+88h] [rbp-78h] BYREF
  struct tagTHREADINFO *v77; // [rsp+90h] [rbp-70h]
  struct tagQ *v78; // [rsp+98h] [rbp-68h]
  int *v79; // [rsp+A0h] [rbp-60h]
  _OWORD v80[7]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v81[40]; // [rsp+120h] [rbp+20h] BYREF
  CInpLockGuard *v82; // [rsp+148h] [rbp+48h]
  _BYTE v83[64]; // [rsp+150h] [rbp+50h] BYREF
  char v84; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v85[16]; // [rsp+200h] [rbp+100h] BYREF

  v9 = *((unsigned __int16 *)a3 + 86);
  v10 = a4;
  v74 = 0LL;
  v72 = 0;
  v79 = a6;
  v73 = v9;
  v78 = a4;
  v77 = a2;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
  CInputDest::SetEmpty(a8, v17, v19, v20);
  v21 = *((_QWORD *)a3 + 2);
  v76 = 0LL;
  v22 = CTouchProcessor::RecheckPointerCapture(this, v21, a5, &v76, &v72);
  if ( v22 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v76, v23, v24);
  }
  else
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
    v29 = *((_DWORD *)a3 + 45);
    if ( (v29 & 0x40004) != 0 && (v29 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 86), &v74);
  if ( !v22 )
  {
    v31 = CTouchProcessor::PointerFlagsToMessage(v30, *((_DWORD *)a3 + 45));
    v35 = *((unsigned __int16 *)a3 + 90);
    v36 = *((unsigned __int16 *)a3 + 100);
    v37 = *((_QWORD *)a3 + 25);
    v75 = v31;
    v38 = v9 | ((unsigned __int64)(v35 & 0xFFFFE1F7) << 16);
    v39 = v36 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v32, v33, v34);
    v40 = (struct CPointerInfoNode *)((char *)a3 + 352);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v83, v40, v33, v34);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v81,
        (CTouchProcessor *)((char *)this + 40),
        0LL);
      v71 = *((_QWORD *)a3 + 2);
      v70 = (char *)a3 + 160;
      v69 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v83, v40, v33, v34);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v81,
        (CTouchProcessor *)((char *)this + 40),
        0LL);
      v71 = *((_QWORD *)a3 + 2);
      v70 = (char *)a3 + 160;
      v69 = 1;
    }
    v68 = v37;
    v41 = v77;
    v42 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v84,
                      (_DWORD)v77,
                      (int)a3 + 352,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v75,
                      v38,
                      v39,
                      v68,
                      (__int64)&v72,
                      v69,
                      (__int64)v70,
                      v71,
                      (__int64)&v74);
    v43 = v42[1];
    v80[0] = *v42;
    v44 = v42[2];
    v80[1] = v43;
    v45 = v42[3];
    v80[2] = v44;
    v46 = v42[4];
    v80[3] = v45;
    v47 = v42[5];
    v80[4] = v46;
    v48 = v42[6];
    v80[5] = v47;
    v80[6] = v48;
    CInputDest::CInputDest((CInputDest *)v85, (const struct tagINPUTDEST *)v80);
    CInputDest::operator=((__int64)a8, v85);
    CInputDest::SetEmpty((CInputDest *)v85, v49, v50, v51);
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v82, (struct CRefUnRefPointerMsgId *)v81);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v83);
    InputTraceLogging::Pointer::SecondaryHitTest((struct CPointerInfoNode *)((char *)a3 + 168), a8, &v74);
    if ( *(_DWORD *)a8 )
    {
      if ( v72 == -1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v54, v55);
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8, v56, v57, v58);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v73, &v74);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v60, v41) )
    {
      CInputDest::SetEmpty(a8, v59, v61, v62);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v76, &v72) )
      CInputDest::operator=((__int64)a8, (__int64)v76, v63, v64);
    v10 = v78;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 25),
                        (char *)a3 + 160,
                        v74,
                        a7) )
  {
    a7->x = 0;
    a7->y = 0;
  }
  LODWORD(v65) = *(_DWORD *)a8;
  if ( *(_DWORD *)a8 && v10 && !CInputDest::UsesQueue(a8, v10) )
  {
    CInputDest::SetEmpty(a8, v66, v67, v65);
    LODWORD(v65) = *(_DWORD *)a8;
  }
  if ( (_DWORD)v65 )
    *v79 = v72;
}
