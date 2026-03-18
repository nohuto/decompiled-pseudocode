/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00A8868
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionPostInputMessage @ 0x1C00313C4 (ApiSetEditionPostInputMessage.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0031FC0 (PhysicalToLogicalDPIPoint.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C003374C (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0033BCC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     IsWindowDesktopComposed @ 0x1C0083710 (IsWindowDesktopComposed.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C00A898C (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C00A8A78 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C00A8B58 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00B69A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00BBA08 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v31; // eax
  int v32; // r8d
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  int v41; // edx
  unsigned int v42; // ebx
  int v43; // edx
  __int64 PtiFromInputDest; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  __int128 v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h]
  _OWORD v51[7]; // [rsp+90h] [rbp-70h] BYREF
  char v52[112]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v53[20]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v54; // [rsp+1C0h] [rbp+C0h]
  int v55; // [rsp+1CCh] [rbp+CCh]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v52);
    v11 = InputDestFromForegroundCapture[1];
    v51[0] = *InputDestFromForegroundCapture;
    v12 = InputDestFromForegroundCapture[2];
    v51[1] = v11;
    v13 = InputDestFromForegroundCapture[3];
    v51[2] = v12;
    v14 = InputDestFromForegroundCapture[4];
    v51[3] = v13;
    v15 = InputDestFromForegroundCapture[5];
    v51[4] = v14;
    v16 = InputDestFromForegroundCapture[6];
    v51[5] = v15;
    v51[6] = v16;
    CInputDest::CInputDest((CInputDest *)v53, (const struct tagINPUTDEST *)v51);
    v21 = 0;
    if ( !v53[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v53) )
      goto LABEL_3;
    v25 = v55;
    v26 = 0LL;
    v27 = v54;
    if ( v55 == 2 )
      v26 = v54;
    if ( !v26 || (unsigned int)IsWindowDesktopComposed(v26) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v53);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v29) & 0x1FF) != 0 )
        goto LABEL_23;
      if ( (CInputDest::GetDpiAwarenessContext(a2) & 0xF) == 2 )
        CInputDest::GetDpiAwarenessContext(a2);
      if ( (CInputDest::GetDpiAwarenessContext((CInputDest *)v53) & 0xF) != 2
        || (v31 = CInputDest::GetDpiAwarenessContext((CInputDest *)v53), v23 = (v31 & v32) == 0, v33 = 1, v23) )
      {
        v33 = 0;
      }
      if ( v30 != v33 )
      {
LABEL_23:
        v47 = 0LL;
        v34 = 0LL;
        if ( v25 == 2 )
          v34 = v27;
        if ( v34 )
          v35 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v34 + 40) + 256LL));
        else
          v35 = 0LL;
        v48 = v35;
        v36 = CInputDest::GetDpiAwarenessContext((CInputDest *)v53);
        PhysicalToLogicalDPIPoint((__int64)&v47, (__int64)&a5, v36, &v48);
        v25 = v55;
        LODWORD(v27) = v54;
        a4 = (unsigned __int16)v47 | (WORD2(v47) << 16);
      }
    }
    v37 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v37 + 108) != 1 )
    {
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v37 + 132), v53) )
        goto LABEL_37;
      v25 = v55;
      LODWORD(v27) = v54;
    }
    v40 = *((_QWORD *)a3 + 1);
    v50 = 0LL;
    v41 = 0;
    if ( v25 == 2 )
      v41 = v27;
    v42 = a6;
    v49 = 0LL;
    ApiSetEditionPostInputMessage((int)v53, v41, a6, 0, a4, 0, 0LL, 0LL, 0, (__int64 *)(v40 + 104), (__int64)&v49);
    v43 = 0;
    if ( v55 == 2 )
      v43 = v54;
    ApiSetEditionPostInputMessage(
      (int)v53,
      v43,
      v42 + 1,
      0,
      a4,
      0,
      0LL,
      0LL,
      0,
      (__int64 *)(*((_QWORD *)a3 + 1) + 104LL),
      (__int64)&v49);
LABEL_37:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v53, 2LL, v38, v39);
    if ( PtiFromInputDest )
    {
      if ( *(_QWORD *)(PtiFromInputDest + 672) )
      {
        v45 = anonymous_namespace_::GetPtiFromInputDest((__int64)v53, 2LL, v19, v20);
        if ( !v45 || (v46 = *(_QWORD *)(v45 + 608)) == 0 || (*(_DWORD *)(v46 + 8) & 1) == 0 )
        {
LABEL_8:
          CInputDest::SetEmpty((CInputDest *)v53, v17, v19, v20);
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
