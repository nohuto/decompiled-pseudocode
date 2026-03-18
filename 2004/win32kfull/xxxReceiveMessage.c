/*
 * XREFs of xxxReceiveMessage @ 0x1C0097200
 * Callers:
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C003B140 (xxxWaitForDITMouseInjectionFlush.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C01220F4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01EAF8C (xxxUserYield.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0098440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0098820 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     SfnDWORD @ 0x1C00A3480 (SfnDWORD.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     UnlinkSendListSms @ 0x1C00BEB58 (UnlinkSendListSms.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C021E480 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  _QWORD *v4; // rbx
  __int64 *v5; // rsi
  struct tagSMS *v6; // r12
  __int64 *v7; // rcx
  __int64 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // eax
  _DWORD *v15; // rax
  int v16; // ebx
  __int64 *v17; // rax
  _QWORD *v18; // rdi
  ULONG_PTR v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  int *v26; // rdx
  int v27; // ebx
  __int64 v28; // r8
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int *v33; // rdx
  unsigned int v34; // ecx
  int *v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v42; // rcx
  int v43; // edi
  unsigned int v44; // r10d
  __int64 v45; // r8
  _DWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  char v52; // bl
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  void *v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // r10
  __m128i *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v68; // ecx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  __m128i *v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // ecx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rax
  char v81; // al
  char v82; // al
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v96; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v98; // zf
  __int64 v99; // rax
  __int64 *v100; // rax
  __int64 v102; // [rsp+50h] [rbp-1C8h]
  __m128i *v103; // [rsp+50h] [rbp-1C8h]
  __int64 v104; // [rsp+58h] [rbp-1C0h]
  int v105; // [rsp+60h] [rbp-1B8h]
  __int64 v106; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v107; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned int v108; // [rsp+78h] [rbp-1A0h]
  __int64 v109; // [rsp+80h] [rbp-198h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-190h]
  __int64 v111; // [rsp+90h] [rbp-188h] BYREF
  int v112; // [rsp+98h] [rbp-180h] BYREF
  __int128 v113; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-168h]
  int v115; // [rsp+B8h] [rbp-160h]
  __int64 v116; // [rsp+C0h] [rbp-158h]
  __int64 v117[2]; // [rsp+C8h] [rbp-150h] BYREF
  int v118; // [rsp+D8h] [rbp-140h]
  __int64 v119; // [rsp+E0h] [rbp-138h]
  __int64 *v120; // [rsp+E8h] [rbp-130h]
  _QWORD v121[3]; // [rsp+F0h] [rbp-128h] BYREF
  __int128 v122; // [rsp+108h] [rbp-110h] BYREF
  __int64 v123; // [rsp+118h] [rbp-100h]
  _QWORD v124[3]; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v125[3]; // [rsp+138h] [rbp-E0h] BYREF
  __int64 v126[3]; // [rsp+150h] [rbp-C8h] BYREF
  int v127; // [rsp+168h] [rbp-B0h]
  __int64 v128; // [rsp+170h] [rbp-A8h]
  __int64 *v129; // [rsp+178h] [rbp-A0h]
  _DWORD v130[2]; // [rsp+180h] [rbp-98h] BYREF
  __int64 v131; // [rsp+188h] [rbp-90h]
  __int64 v132; // [rsp+190h] [rbp-88h]
  __int64 v133; // [rsp+198h] [rbp-80h]
  __int128 v134; // [rsp+1A0h] [rbp-78h]
  __m128i v135; // [rsp+1B8h] [rbp-60h] BYREF
  __m128i v136; // [rsp+1C8h] [rbp-50h]
  __int64 v137; // [rsp+1D8h] [rbp-40h]

  v2 = a1;
  v109 = a1;
  v3 = 0LL;
  v111 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v4 = (_QWORD *)(a1 + 512);
  v5 = *(__int64 **)(a1 + 512);
  if ( v5 == (__int64 *)(a1 + 512) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= ~0x40u;
    v37 = *(_QWORD *)(a1 + 440);
    *(_WORD *)(v37 + 4) &= ~0x40u;
    return v37;
  }
  v6 = (struct tagSMS *)(v5 - 2);
  v107 = (__int64)(v5 - 2);
  --*(_DWORD *)(a1 + 528);
  v7 = (__int64 *)*v5;
  v8 = (__int64 **)v5[1];
  if ( *(__int64 **)(*v5 + 8) != v5 || *v8 != v5 )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = (__int64)v8;
  *v5 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v5 - 2);
  *((_DWORD *)v5 + 17) |= 0x4010u;
  if ( (_QWORD *)*v4 == v4 )
  {
    *(_WORD *)(*(_QWORD *)(v2 + 440) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(v2 + 440) + 4LL) &= ~0x40u;
  }
  v11 = v5[2];
  v106 = v11;
  if ( v11 )
  {
    v12 = *(unsigned __int64 **)(a1 + 472);
    v13 = *v12;
    if ( (*(_DWORD *)(v11 + 480) & 0x100) != 0 )
      v9 = v13 | 0x1000;
    else
      v9 = v13 & 0xFFFFFFFFFFFFEFFFuLL;
    *v12 = v9;
  }
  v14 = *((_DWORD *)v5 + 17);
  if ( (v14 & 0x200) != 0 )
  {
    if ( !v11 )
    {
      v40 = v5[12];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v113 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v113;
      *((_QWORD *)&v113 + 1) = v40;
      if ( v40 )
        HMLockObject(v40);
    }
    if ( (*((_DWORD *)v5 + 17) & 0x400) != 0 )
    {
      v42 = *(_DWORD **)(gptiCurrent + 440LL);
      v43 = *v42 & 8;
      *v42 |= 4u;
      **(_DWORD **)(gptiCurrent + 440LL) |= 8u;
      v44 = *((_DWORD *)v5 + 22);
      if ( v44 == 576 || v44 == 281 )
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v44]])(
          v5[12],
          v44,
          v5[5],
          v5[7],
          v5[4],
          *(_QWORD *)(gpsi + 752LL),
          1,
          0LL);
      else
        SfnDWORD(v5[12], v44, v5[5], v5[7], v5[4], *(_QWORD *)(gpsi + 752LL));
      **(_DWORD **)(gptiCurrent + 440LL) &= ~4u;
      v46 = *(_DWORD **)(gptiCurrent + 440LL);
      v47 = *v46 | 8u;
      if ( !v43 )
        v47 = *v46 & 0xFFFFFFF7;
      *v46 = v47;
    }
    else
    {
      v58 = (__int64 *)v5[12];
      if ( v58 )
        v3 = *v58;
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v5[4])(v3, *((unsigned int *)v5 + 22), v5[5], v5[7]);
    }
    if ( !v11 )
      ThreadUnlock1(v47, v46, v45);
    goto LABEL_42;
  }
  if ( (v14 & 7) == 0 )
  {
    v15 = *(_DWORD **)(a1 + 440);
    v16 = *v15 & 8;
    v105 = v16;
    v116 = *(_QWORD *)(a1 + 504);
    *(_QWORD *)(a1 + 504) = v6;
    *v15 |= 2u;
    **(_DWORD **)(a1 + 440) |= 8u;
    if ( !v11 )
    {
      v102 = v5[12];
      v39 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v9 = *(_QWORD *)(v39 + 408);
      *(_QWORD *)&v113 = v9;
      *(_QWORD *)(v39 + 408) = &v113;
      *((_QWORD *)&v113 + 1) = v102;
      if ( v102 )
        HMLockObject(v102);
    }
    if ( *((_DWORD *)v5 + 22) == 788 )
    {
      v135 = 0LL;
      v136 = 0LL;
      v137 = 0LL;
      v112 = 0;
      v59 = 0LL;
      v60 = 0LL;
      v61 = v5[10];
      v104 = v61;
      v62 = *(__m128i **)(v61 + 16);
      v103 = v62;
      v63 = *(int *)(*(_QWORD *)v61 + 48LL);
      v108 = v63;
      BugCheckParameter3 = *(_QWORD *)(a1 + 1368);
      switch ( (int)v63 )
      {
        case 0:
        case 1:
          if ( !v62 )
            goto LABEL_124;
          v135 = *v62;
          v136.m128i_i64[0] = v62[1].m128i_i64[0];
          if ( (unsigned int)(_mm_cvtsi128_si32(v135) - 512) > 0xE )
            goto LABEL_101;
          v64 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 280) >> 8;
          LOWORD(v64) = v64 & 0x1FF;
          v65 = *((unsigned int *)v5 + 29);
          if ( (_WORD)v64 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_99;
          v66 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v64) + 280);
          LOBYTE(v66) = v66 & 0xF;
          if ( (_BYTE)v66 != 2
            || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v66),
                v68 = 1,
                (*(_DWORD *)(CurrentProcessWin32Process + 280) & 0x20000000) == 0) )
          {
            v68 = 0;
          }
          v65 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v69 = 1, (v65 & 0x20000000) == 0) )
            v69 = 0;
          if ( v68 != v69 )
          {
LABEL_99:
            v106 = *(__int64 *)((char *)v135.m128i_i64 + 4);
            LogicalToPhysicalDPIPoint(&v106, &v106, v65, 0LL);
            v71 = PsGetCurrentProcessWin32Process(v70);
            PhysicalToLogicalDPIPoint(&v106, &v106, *(unsigned int *)(v71 + 280), 0LL);
            *(__int64 *)((char *)v135.m128i_i64 + 4) = v106;
          }
          goto LABEL_100;
        case 2:
        case 10:
          goto LABEL_123;
        case 7:
          if ( !v62 )
            goto LABEL_124;
          v135 = *v62;
          v136 = v62[1];
          v137 = v62[2].m128i_i64[0];
          v73 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 280) >> 8;
          LOWORD(v73) = v73 & 0x1FF;
          v74 = *((unsigned int *)v5 + 29);
          if ( (_WORD)v73 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_112;
          v75 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v73) + 280);
          LOBYTE(v75) = v75 & 0xF;
          if ( (_BYTE)v75 != 2
            || (v76 = PsGetCurrentProcessWin32Process(v75), v77 = 1, (*(_DWORD *)(v76 + 280) & 0x20000000) == 0) )
          {
            v77 = 0;
          }
          v74 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v78 = 1, (v74 & 0x20000000) == 0) )
            v78 = 0;
          if ( v77 != v78 )
          {
LABEL_112:
            LogicalToPhysicalDPIPoint(&v135, &v135, v74, 0LL);
            v80 = PsGetCurrentProcessWin32Process(v79);
            PhysicalToLogicalDPIPoint(&v135, &v135, *(unsigned int *)(v80 + 280), 0LL);
          }
LABEL_100:
          v61 = v104;
          v62 = v103;
          goto LABEL_101;
        case 13:
          if ( v62 )
          {
            v135 = *v62;
            v136.m128i_i64[0] = v62[1].m128i_i64[0];
            if ( *(_DWORD *)(v61 + 24) != -1 )
            {
              v81 = CheckAccess(v61 + 24, *(_QWORD *)(a1 + 416) + 880LL);
              v62 = v103;
              v61 = v104;
              if ( !v81 )
                v135.m128i_i32[2] |= 2u;
            }
          }
          goto LABEL_117;
        case 14:
          InputTraceLogging::Mouse::HandleLowLevelHook();
          v62 = v103;
          v61 = v104;
          if ( v103 )
          {
            v135 = *v103;
            v136 = v103[1];
            if ( *(_DWORD *)(v104 + 24) != -1 )
            {
              v82 = CheckAccess(v104 + 24, *(_QWORD *)(a1 + 416) + 880LL);
              v62 = v103;
              v61 = v104;
              if ( !v82 )
                v135.m128i_i32[3] |= 2u;
            }
          }
LABEL_117:
          v59 = *(_QWORD *)(a1 + 1352);
          v60 = *(_QWORD *)(a1 + 1360);
          *(_QWORD *)(a1 + 1352) = *(_QWORD *)(v61 + 24);
          *(_QWORD *)(a1 + 1360) = *(_QWORD *)(v61 + 32);
          *(_QWORD *)(a1 + 1368) = &v135;
LABEL_101:
          if ( !v62 )
            goto LABEL_124;
          v72 = &v135;
          break;
        default:
          UserSetLastError(87LL, v63, 0x1C0000000LL);
          v61 = v104;
LABEL_123:
          v103 = 0LL;
LABEL_124:
          v72 = *(__m128i **)(v61 + 16);
          break;
      }
      v111 = xxxCallHook2(*(struct tagHOOK **)v61, *(_DWORD *)(v61 + 8), v5[9], (__int64)v72, &v112, 0);
      v83 = v108;
      if ( v108 - 13 <= 1 )
      {
        *(_QWORD *)(a1 + 1352) = v59;
        *(_QWORD *)(a1 + 1360) = v60;
        *(_QWORD *)(a1 + 1368) = BugCheckParameter3;
      }
      if ( (*((_DWORD *)v5 + 17) & 5) != 0 || !v103 || (int)v83 < 0 )
        goto LABEL_33;
      if ( (int)v83 <= 1 )
      {
        if ( (unsigned int)(v135.m128i_i32[0] - 512) <= 0xE )
        {
          v89 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 280) >> 8;
          LOWORD(v89) = v89 & 0x1FF;
          if ( (_WORD)v89 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_154;
          v90 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v89) + 280);
          LOBYTE(v90) = v90 & 0xF;
          if ( (_BYTE)v90 != 2
            || (v91 = PsGetCurrentProcessWin32Process(v90), v9 = 1LL, (*(_DWORD *)(v91 + 280) & 0x20000000) == 0) )
          {
            v9 = 0LL;
          }
          v89 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v92 = 1, (v89 & 0x20000000) == 0) )
            v92 = 0;
          if ( (_DWORD)v9 != v92 )
          {
LABEL_154:
            v107 = *(__int64 *)((char *)v135.m128i_i64 + 4);
            v93 = PsGetCurrentProcessWin32Process(v89);
            LogicalToPhysicalDPIPoint(&v107, &v107, *(unsigned int *)(v93 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v107, &v107, *((unsigned int *)v5 + 29), 0LL);
            *(__int64 *)((char *)v135.m128i_i64 + 4) = v107;
          }
        }
      }
      else
      {
        if ( (_DWORD)v83 == 7 )
        {
          v84 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 280) >> 8;
          LOWORD(v84) = v84 & 0x1FF;
          if ( (_WORD)v84 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_143;
          v85 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v84) + 280);
          LOBYTE(v85) = v85 & 0xF;
          if ( (_BYTE)v85 != 2
            || (v86 = PsGetCurrentProcessWin32Process(v85), v9 = 1LL, (*(_DWORD *)(v86 + 280) & 0x20000000) == 0) )
          {
            v9 = 0LL;
          }
          v84 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v87 = 1, (v84 & 0x20000000) == 0) )
            v87 = 0;
          if ( (_DWORD)v9 != v87 )
          {
LABEL_143:
            v88 = PsGetCurrentProcessWin32Process(v84);
            LogicalToPhysicalDPIPoint(&v135, &v135, *(unsigned int *)(v88 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v135, &v135, *((unsigned int *)v5 + 29), 0LL);
          }
          *v103 = v135;
          v103[1] = v136;
          v103[2].m128i_i64[0] = v137;
          goto LABEL_33;
        }
        if ( (_DWORD)v83 != 13 )
        {
          if ( (_DWORD)v83 == 14 )
          {
            *v103 = v135;
            v103[1] = v136;
          }
          goto LABEL_33;
        }
      }
      *v103 = v135;
      v103[1].m128i_i64[0] = v136.m128i_i64[0];
    }
    else
    {
      v108 = *(_DWORD *)(gptiCurrent + 1404LL);
      *(_DWORD *)(gptiCurrent + 1404LL) = *((_DWORD *)v5 + 28);
      if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x20) != 0 )
      {
        v9 = *((unsigned int *)v5 + 22);
        if ( (unsigned int)v9 >= 0x400
          || (v10 = 0x4000LL, (MessageTable[v9] & 0x4000) == 0)
          || (*(_BYTE *)(*(_QWORD *)(v5[12] + 40) + 18LL) & 4) == 0 )
        {
          v17 = (__int64 *)v5[12];
          if ( v17 )
            v119 = *v17;
          else
            v119 = 0LL;
          v118 = v9;
          v117[1] = v5[9];
          v117[0] = v5[10];
          v120 = v5 - 2;
          xxxCallHook(0, 1uLL, (__int64)v117, 4);
        }
      }
      if ( (*((_DWORD *)v5 + 17) & 7) != 0 )
        goto LABEL_35;
      v18 = (_QWORD *)v5[12];
      if ( !v18 )
      {
LABEL_34:
        v2 = v109;
LABEL_35:
        v31 = *((unsigned int *)v5 + 17);
        if ( (*((_DWORD *)v5 + 17) & 0x101) == 0x100 )
        {
          v130[1] = 0;
          v134 = 0LL;
          v31 = (unsigned int)v31 | 1;
          *((_DWORD *)v5 + 17) = v31;
          if ( (v31 & 4) == 0 )
          {
            v125[2] = 0LL;
            v130[0] = 33;
            if ( (v31 & 0x400) != 0 )
              v130[0] = 289;
            v131 = v5[4];
            v132 = v5[5];
            v133 = v111;
            BugCheckParameter3 = v5[12];
            v48 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v125[0] = *(_QWORD *)(v48 + 408);
            *(_QWORD *)(v48 + 408) = v125;
            v125[1] = BugCheckParameter3;
            if ( BugCheckParameter3 )
              HMLockObject(BugCheckParameter3);
            xxxInterSendMsgEx(
              v5[12],
              *((unsigned int *)v5 + 22),
              0LL,
              0LL,
              0,
              v5[6],
              v130,
              1,
              *((_DWORD *)v5 + 17) & 0x10000);
            ThreadUnlock1(v50, v49, v51);
          }
        }
        if ( !v11 )
          ThreadUnlock1(v31, v9, v10);
        v32 = v116;
        *(_QWORD *)(a1 + 504) = v116;
        v33 = *(unsigned int **)(v2 + 440);
        v34 = *v33 | 2;
        if ( !v32 )
          v34 = *v33 & 0xFFFFFFFD;
        *v33 = v34;
        v35 = *(int **)(v2 + 440);
        v36 = *v35;
        if ( v16 )
          *v35 = v36 | 8;
        else
          *v35 = v36 & 0xFFFFFFF7;
        goto LABEL_42;
      }
      v19 = 0LL;
      BugCheckParameter3 = 0LL;
      v20 = (unsigned __int16)*v18;
      v115 = (unsigned __int16)*v18;
      if ( v20 >= *(_QWORD *)(gpsi + 8LL)
        || (v19 = gSharedInfo[1] + (unsigned int)(v20 * LODWORD(gSharedInfo[2])),
            *(_QWORD **)(gpKernelHandleTable + 24 * v20) != v18)
        || *(_BYTE *)(v19 + 24) != 1 )
      {
        KeBugCheckEx(0x197u, 1uLL, v5[12], v19, 1uLL);
      }
      if ( (*(_BYTE *)(v18[5] + 18LL) & 4) != 0 )
      {
        v121[2] = 0LL;
        v122 = 0LL;
        v123 = 0LL;
        v52 = 0;
        v53 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v121[0] = *(_QWORD *)(v53 + 408);
        *(_QWORD *)(v53 + 408) = v121;
        v121[1] = v18;
        HMLockObject(v18);
        v54 = *((unsigned int *)v5 + 22);
        v29 = (_DWORD *)0x1C0000000LL;
        if ( (unsigned int)v54 < 0x400 )
        {
          v28 = 512LL;
          if ( (MessageTable[v54] & 0x200) != 0 || (_DWORD)v54 == 537 && (v5[9] & 0x8000) != 0 )
          {
            *((_DWORD *)v5 + 17) |= 0x20u;
            if ( v11 )
            {
              v57 = *(void **)v11;
              PushW32ThreadLock(*(_QWORD *)v11, &v122, (__int64)DereferenceKernelStack);
              ObfReferenceObject(v57);
              PsReferenceKernelStack(v57);
              v52 = 1;
              v29 = (_DWORD *)0x1C0000000LL;
            }
          }
        }
        v30 = v5[12];
        v55 = *(_QWORD *)(*(_QWORD *)(v30 + 40) + 120LL);
        if ( v55 >= 7 )
          v56 = 0LL;
        else
          v56 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))(&gServerHandlers)[v55])(
                  v30,
                  *((unsigned int *)v5 + 22),
                  v5[9],
                  v5[10]);
        v111 = v56;
        if ( v52 )
          PopAndFreeW32ThreadLock(&v122);
      }
      else
      {
        v124[2] = 0LL;
        BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread();
        v21 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(gpKernelHandleTable)
          || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v96),
              v98 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
              v21 = 0LL,
              v98) )
        {
          v25 = (__int64 *)PsGetThreadWin32Thread(BugCheckParameter3);
          if ( v25 )
            v21 = *v25;
        }
        v124[0] = *(_QWORD *)(v21 + 408);
        *(_QWORD *)(v21 + 408) = v124;
        v124[1] = v18;
        HMLockObject(v18);
        v26 = *(int **)(gptiCurrent + 440LL);
        v27 = *v26;
        *v26 |= 0x10u;
        xxxSendMessageToClient((struct tagWND *)v5[12], *((_DWORD *)v5 + 22), v5[9], v5[10], v6, 1, &v111);
        v29 = *(_DWORD **)(gptiCurrent + 440LL);
        v30 = *v29 ^ ((unsigned __int8)v27 ^ (unsigned __int8)*v29) & 0x10u;
        *v29 = v30;
      }
      ThreadUnlock1(v30, v29, v28);
      v9 = (unsigned int)(*(_DWORD *)(a1 + 672) | *(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL));
      if ( ((*(_WORD *)(a1 + 672) | *(_WORD *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x2000) != 0
        && (*((_DWORD *)v5 + 17) & 4) == 0 )
      {
        v9 = *((unsigned int *)v5 + 22);
        if ( (unsigned int)v9 >= 0x400
          || (v10 = 0x1C0000000uLL, (MessageTable[v9] & 0x4000) == 0)
          || (v99 = v5[12]) != 0 && (*(_BYTE *)(*(_QWORD *)(v99 + 40) + 18LL) & 4) == 0 )
        {
          v100 = (__int64 *)v5[12];
          if ( v100 )
            v128 = *v100;
          else
            v128 = 0LL;
          v127 = v9;
          v126[2] = v5[9];
          v126[1] = v5[10];
          v126[0] = v111;
          v129 = v5 - 2;
          xxxCallHook(0, 1uLL, (__int64)v126, 12);
        }
      }
      *(_DWORD *)(gptiCurrent + 1404LL) = v108;
    }
LABEL_33:
    v16 = v105;
    goto LABEL_34;
  }
LABEL_42:
  LODWORD(v37) = EtwTraceEndRetrieveSendMessage(v6);
  v38 = *((_DWORD *)v5 + 17) & 0xFFFFBFFF;
  *((_DWORD *)v5 + 17) = v38;
  if ( (v38 & 8) != 0 )
  {
    LODWORD(v37) = UnlinkSendListSms(v6);
  }
  else if ( (v38 & 1) == 0 )
  {
    LODWORD(v37) = v111;
    v5[7] = v111;
    *((_DWORD *)v5 + 17) = v38 | 1;
    if ( v11 )
    {
      LODWORD(v37) = *(_DWORD *)(v11 + 480);
      if ( (v37 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v11 + 440) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v11 + 440) + 4LL) |= 0x200u;
        v37 = *(_QWORD *)(v11 + 440);
        if ( (*(_WORD *)(v37 + 10) & 0x200) != 0 )
          LODWORD(v37) = KeSetEvent(*(PRKEVENT *)(v11 + 728), 2, 0);
      }
    }
  }
  return v37;
}
