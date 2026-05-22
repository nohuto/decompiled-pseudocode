/*
 * XREFs of ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017ABB4
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180178380 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z @ 0x18017B1CC (-OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z.c)
 *     ?QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z @ 0x18017B580 (-QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x18017BB70 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x18017BD2C (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     ?HasCandidates@EdgyImpl@@QEAA_NXZ @ 0x18017BDFC (-HasCandidates@EdgyImpl@@QEAA_NXZ.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x18017BF58 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x18019ABAC (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x18019AC30 (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnContextualInput(
        EdgyProcessorTarget *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  int v11; // ecx
  int v12; // ecx
  __int128 v13; // xmm0
  SessionBasedPointerDeviceArbitration *v14; // rcx
  __int128 v15; // xmm1
  int v16; // eax
  unsigned int v17; // r14d
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  EdgyImpl *v21; // rcx
  __int64 v22; // rcx
  const char *v23; // r9
  __m256i v24; // [rsp+28h] [rbp-29h] BYREF
  __int16 v25; // [rsp+48h] [rbp-9h] BYREF
  __int64 v26; // [rsp+50h] [rbp-1h]
  __int64 v27; // [rsp+58h] [rbp+7h]
  __int64 v28; // [rsp+60h] [rbp+Fh]
  __int128 v29; // [rsp+68h] [rbp+17h]
  __int128 v30; // [rsp+78h] [rbp+27h]
  __int64 v31; // [rsp+88h] [rbp+37h]
  __int64 v32; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v24.m256i_i32[0] = -1;
  *(_OWORD *)((char *)v24.m256i_i64 + 4) = 0uLL;
  v24.m256i_i64[3] = 0LL;
  if ( !a2 )
  {
    v8 = 226LL;
LABEL_3:
    v9 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( !a4 )
  {
    v8 = 227LL;
    goto LABEL_3;
  }
  v11 = *((_DWORD *)a3 + 26);
  if ( (unsigned int)(v11 - 2) <= 1 )
  {
    *((_DWORD *)a4 + 2) = v11;
  }
  else
  {
    if ( EdgyProcessorTarget::QualifyEdgyInputReport(this, a2, (struct EdgyPointerInfo *)&v24) )
    {
      v13 = *(_OWORD *)v24.m256i_i8;
      v14 = (SessionBasedPointerDeviceArbitration *)*((_QWORD *)this + 17);
      v15 = *(_OWORD *)&v24.m256i_u64[2];
      *((_DWORD *)this + 9) = *((_DWORD *)a3 + 26);
      *((_OWORD *)this + 3) = v13;
      *((_OWORD *)this + 4) = v15;
      v16 = SessionBasedPointerDeviceArbitration::OnInputReport(v14, a2);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x107,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
          (const char *)(unsigned int)v16);
        return v17;
      }
      v18 = *((_DWORD *)this + 8);
      v19 = v18;
      if ( v18 != 1 )
      {
        EdgyProcessorTarget::InteractionContext::OnInput((EdgyProcessorTarget *)((char *)this + 168), a2);
        v18 = *((_DWORD *)this + 8);
        v19 = v18;
      }
      v20 = v18;
      v12 = v19;
      if ( v18 != 1 && *((_DWORD *)a2 + 2) >= *((_DWORD *)this + 10) && !v18 )
      {
        v21 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
        *((_DWORD *)this + 8) = 1;
        EdgyImpl::Reset(v21);
        v12 = *((_DWORD *)this + 8);
        v20 = v12;
      }
      if ( v20 == 3 )
      {
        v22 = *((_QWORD *)this + 15);
        v25 = 0;
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        v29 = 0LL;
        v31 = 0LL;
        v30 = 0LL;
        v32 = 0LL;
        if ( EdgyImpl::GetCandidateEdgyDetectedInfo((EdgyImpl *)(v22 + 80), (struct CandidateEdgyDetectedInfo *)&v25) )
        {
          if ( !v26 )
            *((_DWORD *)this + 8) = 2;
        }
        else
        {
          *((_DWORD *)this + 8) = 1;
          *((_DWORD *)this + 20) = -1;
          *(_QWORD *)((char *)this + 84) = 0LL;
          *(_QWORD *)((char *)this + 92) = 0LL;
          *((_QWORD *)this + 13) = 0LL;
          EdgyImpl::Reset((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL));
        }
        v12 = *((_DWORD *)this + 8);
      }
    }
    else
    {
      *((_DWORD *)this + 8) = 1;
      v12 = 1;
    }
    if ( v12 == 2 )
    {
      if ( EdgyImpl::EnsureInputTargeting((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL), a4) >= 0 )
      {
        if ( *((_DWORD *)a4 + 2) == 1 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            328LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
            v23);
          __debugbreak();
        }
      }
      else
      {
        *((_DWORD *)a4 + 2) = 0;
      }
      v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
             *((SessionBasedPointerDeviceArbitration **)this + 17),
             *((_DWORD *)a2 + 1));
      if ( v9 < 0 )
      {
        v8 = 342LL;
        goto LABEL_4;
      }
    }
    else if ( !v12 || v12 == 3 )
    {
      if ( EdgyImpl::HasCandidates((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL)) )
      {
        *((_DWORD *)a4 + 2) = 1;
      }
      else
      {
        *((_DWORD *)a4 + 2) = 0;
        v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
               *((SessionBasedPointerDeviceArbitration **)this + 17),
               *((_DWORD *)a2 + 1));
        if ( v9 < 0 )
        {
          v8 = 365LL;
          goto LABEL_4;
        }
      }
    }
    else
    {
      *((_DWORD *)a4 + 2) = 0;
      v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
             *((SessionBasedPointerDeviceArbitration **)this + 17),
             *((_DWORD *)a2 + 1));
      if ( v9 < 0 )
      {
        v8 = 388LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
