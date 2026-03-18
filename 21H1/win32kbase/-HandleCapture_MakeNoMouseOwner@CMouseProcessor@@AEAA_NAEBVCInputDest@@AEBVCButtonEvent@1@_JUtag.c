/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C005D080
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     IsWindowDesktopComposed @ 0x1C0009F40 (IsWindowDesktopComposed.c)
 *     HMValidateSharedHandleNoRip @ 0x1C000EC88 (HMValidateSharedHandleNoRip.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0048FC8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C005C774 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C005D1A4 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C005D290 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C0060544 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0069A84 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C006C050 (PhysicalToLogicalDPIPoint.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v17; // rcx
  char v18; // di
  int v19; // eax
  bool v20; // zf
  int v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v26; // dx
  int v27; // edx
  unsigned int v28; // eax
  int v29; // r8d
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // edx
  unsigned int v37; // ebx
  int v38; // edx
  __int64 PtiFromInputDest; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  __int128 v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  _OWORD v46[7]; // [rsp+90h] [rbp-70h] BYREF
  char v47[112]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v48[20]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v49; // [rsp+1C0h] [rbp+C0h]
  int v50; // [rsp+1CCh] [rbp+CCh]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v47);
    v11 = InputDestFromForegroundCapture[1];
    v46[0] = *InputDestFromForegroundCapture;
    v12 = InputDestFromForegroundCapture[2];
    v46[1] = v11;
    v13 = InputDestFromForegroundCapture[3];
    v46[2] = v12;
    v14 = InputDestFromForegroundCapture[4];
    v46[3] = v13;
    v15 = InputDestFromForegroundCapture[5];
    v46[4] = v14;
    v16 = InputDestFromForegroundCapture[6];
    v46[5] = v15;
    v46[6] = v16;
    CInputDest::CInputDest((CInputDest *)v48, (const struct tagINPUTDEST *)v46);
    v18 = 0;
    if ( !v48[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v48) )
      goto LABEL_3;
    v22 = v50;
    v23 = 0LL;
    v24 = v49;
    if ( v50 == 2 )
      v23 = v49;
    if ( !v23 || (unsigned int)IsWindowDesktopComposed(v23) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v48);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v26) & 0x1FF) != 0 )
        goto LABEL_23;
      if ( (CInputDest::GetDpiAwarenessContext(a2) & 0xF) == 2 )
        CInputDest::GetDpiAwarenessContext(a2);
      if ( (CInputDest::GetDpiAwarenessContext((CInputDest *)v48) & 0xF) != 2
        || (v28 = CInputDest::GetDpiAwarenessContext((CInputDest *)v48), v20 = (v28 & v29) == 0, v30 = 1, v20) )
      {
        v30 = 0;
      }
      if ( v27 != v30 )
      {
LABEL_23:
        v42 = 0LL;
        v31 = 0LL;
        if ( v22 == 2 )
          v31 = v24;
        if ( v31 )
          v32 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v31 + 40) + 256LL));
        else
          v32 = 0LL;
        v43 = v32;
        v33 = CInputDest::GetDpiAwarenessContext((CInputDest *)v48);
        PhysicalToLogicalDPIPoint(&v42, &a5, v33, &v43);
        v22 = v50;
        LODWORD(v24) = v49;
        a4 = (unsigned __int16)v42 | (WORD2(v42) << 16);
      }
    }
    v34 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v34 + 108) != 1 )
    {
      if ( !anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v34 + 132), v48) )
        goto LABEL_37;
      v22 = v50;
      LODWORD(v24) = v49;
    }
    v35 = *((_QWORD *)a3 + 1);
    v45 = 0LL;
    v36 = 0;
    if ( v22 == 2 )
      v36 = v24;
    v37 = a6;
    v44 = 0LL;
    ApiSetEditionPostInputMessage((unsigned int)v48, v36, a6, 0, a4, 0, 0LL, 0LL, 0, v35 + 104, (__int64)&v44);
    v38 = 0;
    if ( v50 == 2 )
      v38 = v49;
    ApiSetEditionPostInputMessage(
      (unsigned int)v48,
      v38,
      v37 + 1,
      0,
      a4,
      0,
      0LL,
      0LL,
      0,
      *((_QWORD *)a3 + 1) + 104LL,
      (__int64)&v44);
LABEL_37:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v48, 2LL);
    if ( PtiFromInputDest )
    {
      if ( *(_QWORD *)(PtiFromInputDest + 664) )
      {
        v40 = anonymous_namespace_::GetPtiFromInputDest(v48, 2LL);
        if ( !v40 || (v41 = *(_QWORD *)(v40 + 600)) == 0 || (*(_DWORD *)(v41 + 8) & 1) == 0 )
        {
LABEL_8:
          CInputDest::SetEmpty((CInputDest *)v48);
          return v18;
        }
      }
    }
LABEL_3:
    v19 = *((_DWORD *)a3 + 7);
    if ( !v19 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
      v19 = *((_DWORD *)a3 + 7);
    }
    v20 = (v19 | *((_DWORD *)this + 909)) == 0;
    *((_DWORD *)this + 909) |= v19;
    if ( v20 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3640), a2);
    v18 = 1;
    goto LABEL_8;
  }
  return 1;
}
