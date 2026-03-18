/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00472D0
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C0011B80 (PhysicalToLogicalDPIPoint.c)
 *     IsWindowDesktopComposed @ 0x1C001FA40 (IsWindowDesktopComposed.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0020888 (HMValidateSharedHandleNoRip.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C00473F4 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C00474E0 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C00475C0 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0056998 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006CDA4 (ApiSetEditionPostInputMessage.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C006E880 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00708C0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
  _OWORD *InputDestFromForegroundCapture; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // di
  int v22; // eax
  bool v23; // zf
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rbx
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v29; // dx
  int v30; // edx
  unsigned int v31; // eax
  int v32; // r8d
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // edx
  unsigned int v40; // ebx
  int v41; // edx
  __int64 PtiFromInputDest; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  __int128 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  _OWORD v49[7]; // [rsp+90h] [rbp-70h] BYREF
  char v50[112]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v51[20]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v52; // [rsp+1C0h] [rbp+C0h]
  int v53; // [rsp+1CCh] [rbp+CCh]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v50);
    v11 = InputDestFromForegroundCapture[1];
    v49[0] = *InputDestFromForegroundCapture;
    v12 = InputDestFromForegroundCapture[2];
    v49[1] = v11;
    v13 = InputDestFromForegroundCapture[3];
    v49[2] = v12;
    v14 = InputDestFromForegroundCapture[4];
    v49[3] = v13;
    v15 = InputDestFromForegroundCapture[5];
    v49[4] = v14;
    v16 = InputDestFromForegroundCapture[6];
    v49[5] = v15;
    v49[6] = v16;
    CInputDest::CInputDest((CInputDest *)v51, (const struct tagINPUTDEST *)v49);
    v21 = 0;
    if ( !v51[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v51) )
      goto LABEL_3;
    v25 = v53;
    v26 = 0LL;
    v27 = v52;
    if ( v53 == 2 )
      v26 = v52;
    if ( !v26 || (unsigned int)IsWindowDesktopComposed(v26) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v51);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v29) & 0x1FF) != 0 )
        goto LABEL_23;
      if ( (CInputDest::GetDpiAwarenessContext(a2) & 0xF) == 2 )
        CInputDest::GetDpiAwarenessContext(a2);
      if ( (CInputDest::GetDpiAwarenessContext((CInputDest *)v51) & 0xF) != 2
        || (v31 = CInputDest::GetDpiAwarenessContext((CInputDest *)v51), v23 = (v31 & v32) == 0, v33 = 1, v23) )
      {
        v33 = 0;
      }
      if ( v30 != v33 )
      {
LABEL_23:
        v45 = 0LL;
        v34 = 0LL;
        if ( v25 == 2 )
          v34 = v27;
        if ( v34 )
          v35 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v34 + 40) + 256LL));
        else
          v35 = 0LL;
        v46 = v35;
        v36 = CInputDest::GetDpiAwarenessContext((CInputDest *)v51);
        PhysicalToLogicalDPIPoint((__int64)&v45, (__int64)&a5, v36, &v46);
        v25 = v53;
        LODWORD(v27) = v52;
        a4 = (unsigned __int16)v45 | (WORD2(v45) << 16);
      }
    }
    v37 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v37 + 108) != 1 )
    {
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v37 + 132), v51) )
        goto LABEL_37;
      v25 = v53;
      LODWORD(v27) = v52;
    }
    v38 = *((_QWORD *)a3 + 1);
    v48 = 0LL;
    v39 = 0;
    if ( v25 == 2 )
      v39 = v27;
    v40 = a6;
    v47 = 0LL;
    ApiSetEditionPostInputMessage((unsigned int)v51, v39, a6, 0, a4, 0, 0LL, 0LL, 0, v38 + 104, (__int64)&v47);
    v41 = 0;
    if ( v53 == 2 )
      v41 = v52;
    ApiSetEditionPostInputMessage(
      (unsigned int)v51,
      v41,
      v40 + 1,
      0,
      a4,
      0,
      0LL,
      0LL,
      0,
      *((_QWORD *)a3 + 1) + 104LL,
      (__int64)&v47);
LABEL_37:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v51, 2LL);
    if ( PtiFromInputDest )
    {
      if ( *(_QWORD *)(PtiFromInputDest + 664) )
      {
        v43 = anonymous_namespace_::GetPtiFromInputDest(v51, 2LL);
        if ( !v43 || (v44 = *(_QWORD *)(v43 + 600)) == 0 || (*(_DWORD *)(v44 + 8) & 1) == 0 )
        {
LABEL_8:
          CInputDest::SetEmpty((CInputDest *)v51);
          return v21;
        }
      }
    }
LABEL_3:
    v22 = *((_DWORD *)a3 + 7);
    if ( !v22 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
      v22 = *((_DWORD *)a3 + 7);
    }
    v23 = (v22 | *((_DWORD *)this + 891)) == 0;
    *((_DWORD *)this + 891) |= v22;
    if ( v23 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3568), a2);
    v21 = 1;
    goto LABEL_8;
  }
  return 1;
}
