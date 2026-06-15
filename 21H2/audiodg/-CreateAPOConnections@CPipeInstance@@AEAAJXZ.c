/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140007530
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005970 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007324 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z @ 0x1400078F8 (-CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x1400079D8 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x140047854 (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x1400479D0 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateAPOConnections(CPipeInstance *this)
{
  CPipeInstance *v1; // r13
  int v2; // esi
  unsigned __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 *v5; // rax
  __int64 **Prev; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  BOOL v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r15
  char v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v25; // rcx
  int v26; // eax
  CPipeInstance *v27; // rsi
  unsigned __int64 v28; // rax
  CConnectionInstance *v30; // rcx
  int Connection; // eax
  __int64 v32; // rdx
  __int64 v33; // rsi
  _QWORD *v34; // rcx
  wil::details::in1diag3 *v35; // rcx
  unsigned __int64 v36; // r9
  __int64 v37; // rdx
  CPipeInstance *v38; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v39; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 *v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-38h] BYREF
  char v43[8]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-28h]
  int v45; // [rsp+58h] [rbp-20h]
  CPipeInstance *v46; // [rsp+60h] [rbp-18h] BYREF
  int v47; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  CPipeInstance *v49; // [rsp+C0h] [rbp+48h]
  char v50; // [rsp+C8h] [rbp+50h]
  _QWORD *v51; // [rsp+D0h] [rbp+58h]
  __int64 v52; // [rsp+D8h] [rbp+60h] BYREF

  v49 = this;
  v1 = this;
  v2 = 0;
  v3 = 0LL;
  v40 = 0LL;
  v50 = 0;
  if ( *((_DWORD *)this + 3) )
    v4 = (__int64 *)*((_QWORD *)this + 9);
  else
    v4 = (__int64 *)*((_QWORD *)this + 8);
  v39 = v4;
  while ( v4 )
  {
    if ( *((_DWORD *)v1 + 3) )
    {
      Prev = (__int64 **)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                           this,
                           &v39);
      v4 = v39;
    }
    else
    {
      v5 = v4;
      v4 = (__int64 *)*v4;
      v39 = v4;
      Prev = (__int64 **)(v5 + 2);
    }
    v7 = **Prev;
    if ( !v7 )
LABEL_89:
      ATL::AtlThrowImpl(-2147467259);
    v8 = *(_QWORD **)v7;
    v51 = *(_QWORD **)v7;
    v9 = *(_QWORD *)(v7 + 16);
    if ( v4 )
    {
      v10 = *(_QWORD *)v4[2];
      if ( !v10 )
        goto LABEL_89;
      v11 = *(_QWORD *)(v10 + 16);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = 0;
    v38 = 0LL;
    v13 = 0LL;
    v52 = 0LL;
    v14 = *(_QWORD *)(v9 + 24);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v9 + 32);
      if ( !v15 || !v11 || *(_DWORD *)(v14 + 40) != 2 || *(_DWORD *)(v15 + 40) != 2 )
        goto LABEL_18;
      if ( *(_DWORD *)(v9 + 16) )
      {
        if ( (*(_BYTE *)(v14 + 48) & 1) != 0 )
        {
          v32 = *(_QWORD *)(v11 + 24);
          if ( v32 )
          {
            if ( *(_DWORD *)(v32 + 40) == 2 )
            {
              (*(void (__fastcall **)(_QWORD, CPipeInstance **))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)(v9 + 24), &v38);
              v33 = (*(__int64 (__fastcall **)(CPipeInstance *))(*(_QWORD *)v38 + 40LL))(v38);
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 16LL))(v14, &v52);
              v12 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 40LL))(v52) + 8) >= *(_DWORD *)(v33 + 8);
              v13 = v52;
            }
          }
        }
LABEL_18:
        v8 = v51;
        goto LABEL_19;
      }
      if ( (*(_BYTE *)(v15 + 48) & 1) == 0 )
        goto LABEL_18;
      v21 = *(_QWORD *)(v11 + 32);
      if ( !v21 || *(_DWORD *)(v21 + 40) != 2 )
        goto LABEL_18;
      (*(void (__fastcall **)(_QWORD, CPipeInstance **))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)(v9 + 32), &v38);
      v22 = (*(__int64 (__fastcall **)(CPipeInstance *))(*(_QWORD *)v38 + 40LL))(v38);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 16LL))(v15, &v52);
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 40LL))(v52);
      v8 = v51;
      v13 = v52;
      v12 = *(_DWORD *)(v22 + 8) >= *(_DWORD *)(v23 + 8);
    }
LABEL_19:
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    this = v38;
    if ( v38 )
      (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v38 + 16LL))(v38);
    if ( !v12 )
    {
      v16 = v50;
      if ( v3 )
        v16 = 0;
      v50 = v16;
      goto LABEL_27;
    }
    if ( v3 )
    {
      v16 = v50;
LABEL_27:
      v1 = v49;
      goto LABEL_28;
    }
    v26 = CConnectionInstance::CreateConnectionBuffer((CConnectionInstance *)v9, &v41, &v42);
    v2 = v26;
    if ( v26 < 0 )
    {
      v35 = retaddr;
      v36 = (unsigned int)v26;
      v37 = 2823LL;
LABEL_82:
      wil::details::in1diag3::Return_Hr(
        v35,
        (void *)v37,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)v36,
        (int)v38);
      break;
    }
    v3 = (unsigned __int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v1 = v49;
    this = 0LL;
    if ( v3 )
    {
      v27 = (CPipeInstance *)*((_QWORD *)v49 + 30);
      v28 = v41;
      v3[3] = 0LL;
      v3[1] = v28;
      *v3 = v42;
      *((_DWORD *)v3 + 4) = 1;
      this = (CPipeInstance *)v3[3];
      if ( this != v27 )
      {
        if ( v27 )
        {
          (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v27 + 8LL))(v27);
          this = (CPipeInstance *)v3[3];
        }
        if ( this )
          (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)this + 16LL))(this);
        v3[3] = (unsigned __int64)v27;
      }
    }
    else
    {
      v3 = 0LL;
    }
    v40 = v3;
    if ( !v3 )
    {
      v2 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)0x8007000ELL,
        (int)v38);
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)v49 + 30) + 48LL))(*((_QWORD *)v49 + 30), v41);
      break;
    }
    v16 = 1;
    v50 = 1;
LABEL_28:
    if ( !*(_DWORD *)v9 )
      goto LABEL_40;
    v45 = *(_DWORD *)(v9 + 40);
    v47 = 1094927443;
    v17 = 0LL;
    v46 = 0LL;
    if ( v3 )
      v17 = *v3;
    v44 = v17;
    v18 = *(_QWORD *)(v9 + 24);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, CPipeInstance **))(*(_QWORD *)v18 + 16LL))(v18, &v46);
      goto LABEL_33;
    }
    v25 = *(_QWORD *)(v9 + 32);
    if ( v25 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, CPipeInstance **))(*(_QWORD *)v25 + 8LL))(v25, &v46);
LABEL_33:
      v2 = v19;
      if ( v19 < 0 )
        goto LABEL_37;
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v9 + 48) + 56LL))(
           *(_QWORD *)(v9 + 48),
           v43,
           v9 + 8);
    if ( v2 >= 0 && v3 )
    {
      *(_QWORD *)(v9 + 56) = v3;
      ++*((_DWORD *)v3 + 4);
    }
LABEL_37:
    this = v46;
    if ( v46 )
    {
      (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v46 + 16LL))(v46);
      this = 0LL;
      v46 = 0LL;
    }
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_88dce1fc6c0c3cb9db34f37f49324232_Traceguids,
          (unsigned int)v2);
      }
      AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnection", 0x63u, v2);
      v35 = retaddr;
      v36 = (unsigned int)v2;
      v37 = 2845LL;
      goto LABEL_82;
    }
LABEL_40:
    if ( !v16 )
    {
      v20 = v3;
      v3 = 0LL;
      v40 = 0LL;
      if ( v20 )
      {
        if ( (*((_DWORD *)v20 + 4))-- == 1 )
        {
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)v20[3] + 48LL))(v20[3], v20[1]);
          v34 = (_QWORD *)v20[3];
          if ( v34 )
            (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
          operator delete(v20);
        }
      }
    }
    if ( v8 )
    {
      while ( 1 )
      {
        v30 = (CConnectionInstance *)v8[2];
        v8 = (_QWORD *)*v8;
        Connection = CConnectionInstance::CreateConnection(v30, 0LL);
        v2 = Connection;
        if ( Connection < 0 )
          break;
        if ( !v8 )
          goto LABEL_43;
      }
      v35 = retaddr;
      v36 = (unsigned int)Connection;
      v37 = 2857LL;
      goto LABEL_82;
    }
LABEL_43:
    v2 = 0;
  }
  if ( v3 )
    CInPlaceBuffer::Release((CInPlaceBuffer *)v3);
  return (unsigned int)v2;
}
