/*
 * XREFs of ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18036A190
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18035F500 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x180058918 (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18006BC34 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800B4844 (--$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU.c)
 *     ??$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAI1@Z @ 0x180365FE8 (--$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180366ED4 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@IUViewState@KeyboardHosting@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180366FD4 (--$_Try_emplace@AEBI$$V@-$unordered_map@IUViewState@KeyboardHosting@@U-$hash@I@std@@U-$equal_to@.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180367710 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180367984 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180368744 (-IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositio.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x18036955C (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18036AC70 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        _OWORD *a5,
        _BYTE *a6)
{
  char v8; // r12
  __m128i *v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int128 v12; // xmm4
  __int128 v13; // xmm3
  __int128 v14; // xmm2
  _OWORD *v15; // rax
  char v16; // cl
  int v17; // r10d
  int ViewRectFromPositionAndSizeRequest; // ebx
  __int64 v19; // rdx
  char v21; // di
  int v22; // ebx
  float v23; // xmm3_4
  float v24; // xmm6_4
  unsigned __int32 v25; // xmm7_4
  unsigned __int32 v26; // xmm8_4
  unsigned __int32 v27; // xmm9_4
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // r9d
  unsigned int FloatingBottomPositionIfNecessary; // eax
  unsigned int v33; // eax
  __int128 v34; // xmm0
  int v35; // [rsp+38h] [rbp-D0h]
  int v36; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-98h] BYREF
  __m128 v38; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v39[8]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v41[64]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD *v42; // [rsp+E8h] [rbp-20h]
  __int128 v43; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v44; // [rsp+100h] [rbp-8h] BYREF
  __int128 v45; // [rsp+110h] [rbp+8h]
  __int128 v46; // [rsp+120h] [rbp+18h]
  _OWORD v47[3]; // [rsp+130h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v37 = a3;
  v42 = a5;
  v8 = 0;
  if ( !KeyboardHosting::TabTipAdapterPolicy::IgnoreInputAppRequestedShow(
          (RTL_SRWLOCK *)a1,
          a3,
          (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
  {
    if ( !KeyboardHosting::TabTipAdapterPolicy::CheckRequest(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
    {
      *a6 = 0;
      LODWORD(v40) = a2[5];
      v38.m128_i32[0] = *a2;
      TouchKeyboardExperienceTelemetryLogger::InputAppRequestedShowBadRequest<unsigned int,unsigned int,unsigned int &,unsigned int &>(
        &v38,
        (int *)&v40,
        a2 + 2,
        a2 + 1);
      return 0LL;
    }
    v38.m128_u64[0] = *(_QWORD *)(a1 + 280);
    v9 = (__m128i *)(a1 + 328);
    *(_QWORD *)&v40 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)&v43 = *(_QWORD *)(a1 + 232);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
      (unsigned __int64 *)&v43,
      (struct Windows::Foundation::Rect *)(a1 + 240),
      (unsigned int *)(a1 + 272),
      (unsigned __int64 *)&v40,
      (struct Windows::Foundation::Rect *)(a1 + 336),
      (unsigned int *)(a1 + 368),
      (unsigned __int64 *)&v38,
      (struct Windows::Foundation::Rect *)(a1 + 288),
      (unsigned int *)(a1 + 320),
      (bool *)(a1 + 500),
      (bool *)(a1 + 448));
    v10 = *(_BYTE *)(a1 + 500) != 0 ? 280LL : 232LL;
    v47[0] = *(_OWORD *)(v10 + a1);
    v47[1] = *(_OWORD *)(v10 + a1 + 16);
    v47[2] = *(_OWORD *)(v10 + a1 + 32);
    v11 = -(__int64)(*(_BYTE *)(a1 + 448) != 0) & 0xFFFFFFFFFFFFFFA0uLL;
    v44 = *(_OWORD *)(v11 + a1 + 328);
    v12 = v44;
    v45 = *(_OWORD *)(v11 + a1 + 344);
    v13 = v45;
    v46 = *(_OWORD *)(v11 + a1 + 360);
    v14 = v46;
    v15 = *(_OWORD **)(a1 + 224);
    v15[1] = *(_OWORD *)(v10 + a1);
    v15[2] = *(_OWORD *)(v10 + a1 + 16);
    v15[3] = *(_OWORD *)(v10 + a1 + 32);
    v15[4] = v12;
    v15[5] = v13;
    v15[6] = v14;
    v15[7] = *(_OWORD *)(a1 + 328);
    v15[8] = *(_OWORD *)(a1 + 344);
    v15[9] = *(_OWORD *)(a1 + 360);
    v43 = 0LL;
    if ( !*(_BYTE *)(a1 + 509) || *a2 != 2 || (v16 = 1, a2[5] != 6) )
      v16 = 0;
    v17 = *(_DWORD *)(a1 + 208);
    *(_OWORD *)v41 = *(_OWORD *)a2;
    *(_OWORD *)&v41[16] = *((_OWORD *)a2 + 1);
    *(_OWORD *)&v41[32] = *((_OWORD *)a2 + 2);
    *(_QWORD *)&v41[48] = *((_QWORD *)a2 + 6);
    *(_DWORD *)&v41[56] = a2[14];
    LOBYTE(v35) = v16;
    ViewRectFromPositionAndSizeRequest = KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
                                           *(_QWORD *)(a1 + 224),
                                           a1 + 144,
                                           a1 + 176,
                                           a1 + 192,
                                           v41,
                                           v17,
                                           v35,
                                           &v43,
                                           &v36,
                                           v39);
    if ( ViewRectFromPositionAndSizeRequest < 0 )
    {
      v19 = 366LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)ViewRectFromPositionAndSizeRequest);
      return (unsigned int)ViewRectFromPositionAndSizeRequest;
    }
    v21 = *((_BYTE *)a2 + 36);
    if ( v21 || *((_BYTE *)a2 + 37) )
    {
      v8 = 1;
      v22 = *a2;
      v9 = (__m128i *)&v44;
      if ( *a2 == 1 )
        v9 = (__m128i *)v47;
    }
    else
    {
      v22 = *a2;
    }
    *(__m128i *)v41 = *v9;
    *(__m128i *)&v41[16] = v9[1];
    v23 = (float)_mm_cvtsi128_si32(_mm_srli_si128(v9[2], 8));
    v38.m128_f32[0] = (float)(v23 * *(float *)&v43) / 100.0;
    v38.m128_f32[1] = (float)(v23 * *((float *)&v43 + 1)) / 100.0;
    v38.m128_f32[2] = (float)(v23 * *((float *)&v43 + 2)) / 100.0;
    v38.m128_f32[3] = (float)(v23 * *((float *)&v43 + 3)) / 100.0;
    v24 = v38.m128_f32[0];
    *(float *)&v40 = v38.m128_f32[0];
    v25 = _mm_shuffle_ps(v38, v38, 85).m128_u32[0];
    DWORD1(v40) = v25;
    v26 = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
    DWORD2(v40) = v26;
    v27 = _mm_shuffle_ps(v38, v38, 255).m128_u32[0];
    HIDWORD(v40) = v27;
    *a6 = 1;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 440));
    *(_QWORD *)&v43 = a1 + 440;
    v41[0] = 1;
    *(_OWORD *)&v41[4] = *(_OWORD *)a2;
    *(_OWORD *)&v41[20] = *((_OWORD *)a2 + 1);
    *(_OWORD *)&v41[36] = *((_OWORD *)a2 + 2);
    *(_QWORD *)&v41[52] = *((_QWORD *)a2 + 6);
    *(_DWORD *)&v41[60] = a2[14];
    std::unordered_map<unsigned int,KeyboardHosting::ViewState>::_Try_emplace<unsigned int const &,>(
      a1 + 376,
      (__int64)&v38,
      &v37);
    v28 = v38.m128_u64[0];
    *(_OWORD *)(v38.m128_u64[0] + 20) = *(_OWORD *)v41;
    *(_OWORD *)(v28 + 36) = *(_OWORD *)&v41[16];
    *(_OWORD *)(v28 + 52) = *(_OWORD *)&v41[32];
    *(_OWORD *)(v28 + 68) = *(_OWORD *)&v41[48];
    if ( a1 != -440 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 440));
    if ( v22 == 1 )
    {
      if ( v8 )
      {
        std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
          (__int64 **)(a1 + 480),
          (__int64)&v43,
          &v37);
        v29 = v43;
        *(_DWORD *)(v43 + 32) = v26;
        *(_DWORD *)(v29 + 36) = v27;
        FloatingBottomPositionIfNecessary = KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
                                              (KeyboardHosting::TabTipAdapterPolicy *)a1,
                                              v37,
                                              v30,
                                              v31);
        if ( (int)(FloatingBottomPositionIfNecessary + 0x80000000) >= 0
          && FloatingBottomPositionIfNecessary != -2147024894 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x183,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)FloatingBottomPositionIfNecessary);
        }
        std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
          (__int64 **)(a1 + 464),
          (__int64)&v43,
          &v37);
        if ( *(_BYTE *)(v43 + 40) )
        {
          KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            (struct Windows::Foundation::Point *)&v38,
            v37);
          if ( v21 )
            LODWORD(v40) = v38.m128_i32[0];
          if ( *((_BYTE *)a2 + 37) )
            DWORD1(v40) = v38.m128_i32[1];
        }
        else
        {
          v38.m128_u64[0] = __PAIR64__(v25, LODWORD(v24));
          ViewRectFromPositionAndSizeRequest = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
                                                 (KeyboardHosting::TabTipAdapterPolicy *)a1,
                                                 (const struct Windows::Foundation::Point *)&v38,
                                                 v37);
          if ( ViewRectFromPositionAndSizeRequest < 0 )
          {
            v19 = 400LL;
            goto LABEL_10;
          }
        }
      }
    }
    else if ( v22 == 2 )
    {
      v33 = v37;
      if ( v37 == *(_DWORD *)(a1 + 496) && *(_BYTE *)(a1 + 460) && (v21 || *((_BYTE *)a2 + 37)) )
      {
        *(_QWORD *)&v40 = *(_QWORD *)(a1 + 452);
      }
      else if ( !(_BYTE)v36 )
      {
        *(float *)(a1 + 452) = v24;
        *(_DWORD *)(a1 + 456) = v25;
        *(_BYTE *)(a1 + 460) = 1;
        *(_DWORD *)(a1 + 496) = v33;
      }
    }
    v34 = v40;
    *v42 = v40;
    *(_OWORD *)(a1 + 596) = v34;
    return 0LL;
  }
  *a6 = 0;
  return 0LL;
}
