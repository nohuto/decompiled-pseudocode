/*
 * XREFs of xxxReceiveMessage @ 0x1C0052EE0
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C0114314 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0123444 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01EA31C (xxxUserYield.c)
 * Callees:
 *     SfnDWORD @ 0x1C004CB10 (SfnDWORD.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0054120 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     UnlinkSendListSms @ 0x1C00D705C (UnlinkSendListSms.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C021D5F0 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
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
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v70; // ecx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __m128i *v76; // r9
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // ecx
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rax
  char v89; // al
  char v90; // al
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v106; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v108; // zf
  __int64 v109; // rax
  __int64 *v110; // rax
  __int64 v112; // [rsp+50h] [rbp-1C8h]
  __m128i *v113; // [rsp+50h] [rbp-1C8h]
  __int64 v114; // [rsp+58h] [rbp-1C0h]
  int v115; // [rsp+60h] [rbp-1B8h]
  __int64 v116; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v117; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned int v118; // [rsp+78h] [rbp-1A0h]
  __int64 v119; // [rsp+80h] [rbp-198h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-190h]
  __int64 v121; // [rsp+90h] [rbp-188h] BYREF
  int v122; // [rsp+98h] [rbp-180h] BYREF
  __int128 v123; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v124; // [rsp+B0h] [rbp-168h]
  int v125; // [rsp+B8h] [rbp-160h]
  __int64 v126; // [rsp+C0h] [rbp-158h]
  __int64 v127[2]; // [rsp+C8h] [rbp-150h] BYREF
  int v128; // [rsp+D8h] [rbp-140h]
  __int64 v129; // [rsp+E0h] [rbp-138h]
  __int64 *v130; // [rsp+E8h] [rbp-130h]
  _QWORD v131[3]; // [rsp+F0h] [rbp-128h] BYREF
  __int128 v132; // [rsp+108h] [rbp-110h] BYREF
  __int64 v133; // [rsp+118h] [rbp-100h]
  _QWORD v134[3]; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v135[3]; // [rsp+138h] [rbp-E0h] BYREF
  __int64 v136[3]; // [rsp+150h] [rbp-C8h] BYREF
  int v137; // [rsp+168h] [rbp-B0h]
  __int64 v138; // [rsp+170h] [rbp-A8h]
  __int64 *v139; // [rsp+178h] [rbp-A0h]
  _DWORD v140[2]; // [rsp+180h] [rbp-98h] BYREF
  __int64 v141; // [rsp+188h] [rbp-90h]
  __int64 v142; // [rsp+190h] [rbp-88h]
  __int64 v143; // [rsp+198h] [rbp-80h]
  __int128 v144; // [rsp+1A0h] [rbp-78h]
  __m128i v145; // [rsp+1B8h] [rbp-60h] BYREF
  __m128i v146; // [rsp+1C8h] [rbp-50h]
  __int64 v147; // [rsp+1D8h] [rbp-40h]

  v2 = a1;
  v119 = a1;
  v3 = 0LL;
  v121 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v4 = (_QWORD *)(a1 + 520);
  v5 = *(__int64 **)(a1 + 520);
  if ( v5 == (__int64 *)(a1 + 520) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) &= ~0x40u;
    v37 = *(_QWORD *)(a1 + 448);
    *(_WORD *)(v37 + 4) &= ~0x40u;
    return v37;
  }
  v6 = (struct tagSMS *)(v5 - 2);
  v117 = (__int64)(v5 - 2);
  --*(_DWORD *)(a1 + 536);
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
    *(_WORD *)(*(_QWORD *)(v2 + 448) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(v2 + 448) + 4LL) &= ~0x40u;
  }
  v11 = v5[2];
  v116 = v11;
  if ( v11 )
  {
    v12 = *(unsigned __int64 **)(a1 + 480);
    v13 = *v12;
    if ( (*(_DWORD *)(v11 + 488) & 0x100) != 0 )
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
      *(_QWORD *)&v123 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v123;
      *((_QWORD *)&v123 + 1) = v40;
      if ( v40 )
        HMLockObject(v40);
    }
    if ( (*((_DWORD *)v5 + 17) & 0x400) != 0 )
    {
      v42 = *(_DWORD **)(gptiCurrent + 448LL);
      v43 = *v42 & 8;
      *v42 |= 4u;
      **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
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
        SfnDWORD((__int64 *)v5[12], v44, v5[5], v5[7], v5[4], *(_QWORD *)(gpsi + 752LL));
      **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
      v46 = *(_DWORD **)(gptiCurrent + 448LL);
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
    v15 = *(_DWORD **)(a1 + 448);
    v16 = *v15 & 8;
    v115 = v16;
    v126 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = v6;
    *v15 |= 2u;
    **(_DWORD **)(a1 + 448) |= 8u;
    if ( !v11 )
    {
      v112 = v5[12];
      v39 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v9 = *(_QWORD *)(v39 + 416);
      *(_QWORD *)&v123 = v9;
      *(_QWORD *)(v39 + 416) = &v123;
      *((_QWORD *)&v123 + 1) = v112;
      if ( v112 )
        HMLockObject(v112);
    }
    if ( *((_DWORD *)v5 + 22) == 788 )
    {
      v145 = 0LL;
      v146 = 0LL;
      v147 = 0LL;
      v122 = 0;
      v59 = 0LL;
      v60 = 0LL;
      v61 = v5[10];
      v114 = v61;
      v62 = *(__m128i **)(v61 + 16);
      v113 = v62;
      v63 = *(int *)(*(_QWORD *)v61 + 48LL);
      v118 = v63;
      BugCheckParameter3 = *(_QWORD *)(a1 + 1376);
      switch ( (int)v63 )
      {
        case 0:
        case 1:
          if ( !v62 )
            goto LABEL_124;
          v145 = *v62;
          v146.m128i_i64[0] = v62[1].m128i_i64[0];
          if ( (unsigned int)(_mm_cvtsi128_si32(v145) - 512) > 0xE )
            goto LABEL_101;
          v64 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v62, v63, 0x1C0000000uLL) + 280) >> 8;
          LOWORD(v64) = v64 & 0x1FF;
          v65 = *((unsigned int *)v5 + 29);
          if ( (_WORD)v64 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_99;
          v68 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v64, 511LL, v65) + 280);
          LOBYTE(v68) = v68 & 0xF;
          if ( (_BYTE)v68 != 2
            || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v68, v66, v67),
                v70 = 1,
                (*(_DWORD *)(CurrentProcessWin32Process + 280) & 0x20000000) == 0) )
          {
            v70 = 0;
          }
          v65 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v71 = 1, (v65 & 0x20000000) == 0) )
            v71 = 0;
          if ( v70 != v71 )
          {
LABEL_99:
            v116 = *(__int64 *)((char *)v145.m128i_i64 + 4);
            LogicalToPhysicalDPIPoint(&v116, &v116, v65, 0LL);
            v75 = PsGetCurrentProcessWin32Process(v73, v72, v74);
            PhysicalToLogicalDPIPoint(&v116, &v116, *(unsigned int *)(v75 + 280), 0LL);
            *(__int64 *)((char *)v145.m128i_i64 + 4) = v116;
          }
          goto LABEL_100;
        case 2:
        case 10:
          goto LABEL_123;
        case 7:
          if ( !v62 )
            goto LABEL_124;
          v145 = *v62;
          v146 = v62[1];
          v147 = v62[2].m128i_i64[0];
          v77 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v62, v63, 0x1C0000000uLL) + 280) >> 8;
          LOWORD(v77) = v77 & 0x1FF;
          v78 = *((unsigned int *)v5 + 29);
          if ( (_WORD)v77 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_112;
          v81 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v77, 511LL, v78) + 280);
          LOBYTE(v81) = v81 & 0xF;
          if ( (_BYTE)v81 != 2
            || (v82 = PsGetCurrentProcessWin32Process(v81, v79, v80), v83 = 1,
                                                                      (*(_DWORD *)(v82 + 280) & 0x20000000) == 0) )
          {
            v83 = 0;
          }
          v78 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v84 = 1, (v78 & 0x20000000) == 0) )
            v84 = 0;
          if ( v83 != v84 )
          {
LABEL_112:
            LogicalToPhysicalDPIPoint(&v145, &v145, v78, 0LL);
            v88 = PsGetCurrentProcessWin32Process(v86, v85, v87);
            PhysicalToLogicalDPIPoint(&v145, &v145, *(unsigned int *)(v88 + 280), 0LL);
          }
LABEL_100:
          v61 = v114;
          v62 = v113;
          goto LABEL_101;
        case 13:
          if ( v62 )
          {
            v145 = *v62;
            v146.m128i_i64[0] = v62[1].m128i_i64[0];
            if ( *(_DWORD *)(v61 + 24) != -1 )
            {
              v89 = CheckAccess(v61 + 24, *(_QWORD *)(a1 + 424) + 880LL);
              v62 = v113;
              v61 = v114;
              if ( !v89 )
                v145.m128i_i32[2] |= 2u;
            }
          }
          goto LABEL_117;
        case 14:
          InputTraceLogging::Mouse::HandleLowLevelHook();
          v62 = v113;
          v61 = v114;
          if ( v113 )
          {
            v145 = *v113;
            v146 = v113[1];
            if ( *(_DWORD *)(v114 + 24) != -1 )
            {
              v90 = CheckAccess(v114 + 24, *(_QWORD *)(a1 + 424) + 880LL);
              v62 = v113;
              v61 = v114;
              if ( !v90 )
                v145.m128i_i32[3] |= 2u;
            }
          }
LABEL_117:
          v59 = *(_QWORD *)(a1 + 1360);
          v60 = *(_QWORD *)(a1 + 1368);
          *(_QWORD *)(a1 + 1360) = *(_QWORD *)(v61 + 24);
          *(_QWORD *)(a1 + 1368) = *(_QWORD *)(v61 + 32);
          *(_QWORD *)(a1 + 1376) = &v145;
LABEL_101:
          if ( !v62 )
            goto LABEL_124;
          v76 = &v145;
          break;
        default:
          UserSetLastError(87LL);
          v61 = v114;
LABEL_123:
          v113 = 0LL;
LABEL_124:
          v76 = *(__m128i **)(v61 + 16);
          break;
      }
      v121 = xxxCallHook2(*(struct tagHOOK **)v61, *(_DWORD *)(v61 + 8), v5[9], (__int64)v76, &v122, 0);
      v91 = v118;
      if ( v118 - 13 <= 1 )
      {
        *(_QWORD *)(a1 + 1360) = v59;
        *(_QWORD *)(a1 + 1368) = v60;
        *(_QWORD *)(a1 + 1376) = BugCheckParameter3;
      }
      if ( (*((_DWORD *)v5 + 17) & 5) != 0 || !v113 || (int)v91 < 0 )
        goto LABEL_33;
      if ( (int)v91 <= 1 )
      {
        if ( (unsigned int)(v145.m128i_i32[0] - 512) <= 0xE )
        {
          v98 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v91, v9, v10) + 280) >> 8;
          v9 = 511LL;
          LOWORD(v98) = v98 & 0x1FF;
          if ( (_WORD)v98 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_154;
          v100 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v98, 511LL, v10) + 280);
          LOBYTE(v100) = v100 & 0xF;
          if ( (_BYTE)v100 != 2
            || (v101 = PsGetCurrentProcessWin32Process(v100, v99, v10),
                v9 = 1LL,
                (*(_DWORD *)(v101 + 280) & 0x20000000) == 0) )
          {
            v9 = 0LL;
          }
          v98 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v102 = 1, (v98 & 0x20000000) == 0) )
            v102 = 0;
          if ( (_DWORD)v9 != v102 )
          {
LABEL_154:
            v117 = *(__int64 *)((char *)v145.m128i_i64 + 4);
            v103 = PsGetCurrentProcessWin32Process(v98, v9, v10);
            LogicalToPhysicalDPIPoint(&v117, &v117, *(unsigned int *)(v103 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v117, &v117, *((unsigned int *)v5 + 29), 0LL);
            *(__int64 *)((char *)v145.m128i_i64 + 4) = v117;
          }
        }
      }
      else
      {
        if ( (_DWORD)v91 == 7 )
        {
          v92 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v91, v9, v10) + 280) >> 8;
          v9 = 511LL;
          LOWORD(v92) = v92 & 0x1FF;
          if ( (_WORD)v92 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_143;
          v94 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v92, 511LL, v10) + 280);
          LOBYTE(v94) = v94 & 0xF;
          if ( (_BYTE)v94 != 2
            || (v95 = PsGetCurrentProcessWin32Process(v94, v93, v10),
                v9 = 1LL,
                (*(_DWORD *)(v95 + 280) & 0x20000000) == 0) )
          {
            v9 = 0LL;
          }
          v92 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v96 = 1, (v92 & 0x20000000) == 0) )
            v96 = 0;
          if ( (_DWORD)v9 != v96 )
          {
LABEL_143:
            v97 = PsGetCurrentProcessWin32Process(v92, v9, v10);
            LogicalToPhysicalDPIPoint(&v145, &v145, *(unsigned int *)(v97 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v145, &v145, *((unsigned int *)v5 + 29), 0LL);
          }
          *v113 = v145;
          v113[1] = v146;
          v113[2].m128i_i64[0] = v147;
          goto LABEL_33;
        }
        if ( (_DWORD)v91 != 13 )
        {
          if ( (_DWORD)v91 == 14 )
          {
            *v113 = v145;
            v113[1] = v146;
          }
          goto LABEL_33;
        }
      }
      *v113 = v145;
      v113[1].m128i_i64[0] = v146.m128i_i64[0];
    }
    else
    {
      v118 = *(_DWORD *)(gptiCurrent + 1412LL);
      *(_DWORD *)(gptiCurrent + 1412LL) = *((_DWORD *)v5 + 28);
      if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x20) != 0 )
      {
        v9 = *((unsigned int *)v5 + 22);
        if ( (unsigned int)v9 >= 0x400
          || (v10 = 0x4000LL, (MessageTable[v9] & 0x4000) == 0)
          || (*(_BYTE *)(*(_QWORD *)(v5[12] + 40) + 18LL) & 4) == 0 )
        {
          v17 = (__int64 *)v5[12];
          if ( v17 )
            v129 = *v17;
          else
            v129 = 0LL;
          v128 = v9;
          v127[1] = v5[9];
          v127[0] = v5[10];
          v130 = v5 - 2;
          xxxCallHook(0, 1uLL, (__int64)v127, 4);
        }
      }
      if ( (*((_DWORD *)v5 + 17) & 7) != 0 )
        goto LABEL_35;
      v18 = (_QWORD *)v5[12];
      if ( !v18 )
      {
LABEL_34:
        v2 = v119;
LABEL_35:
        v31 = *((unsigned int *)v5 + 17);
        if ( (*((_DWORD *)v5 + 17) & 0x101) == 0x100 )
        {
          v140[1] = 0;
          v144 = 0LL;
          v31 = (unsigned int)v31 | 1;
          *((_DWORD *)v5 + 17) = v31;
          if ( (v31 & 4) == 0 )
          {
            v135[2] = 0LL;
            v140[0] = 33;
            if ( (v31 & 0x400) != 0 )
              v140[0] = 289;
            v141 = v5[4];
            v142 = v5[5];
            v143 = v121;
            BugCheckParameter3 = v5[12];
            v48 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v135[0] = *(_QWORD *)(v48 + 416);
            *(_QWORD *)(v48 + 416) = v135;
            v135[1] = BugCheckParameter3;
            if ( BugCheckParameter3 )
              HMLockObject(BugCheckParameter3);
            xxxInterSendMsgEx(
              v5[12],
              *((unsigned int *)v5 + 22),
              0LL,
              0LL,
              0,
              v5[6],
              v140,
              1,
              *((_DWORD *)v5 + 17) & 0x10000);
            ThreadUnlock1(v50, v49, v51);
          }
        }
        if ( !v11 )
          ThreadUnlock1(v31, v9, v10);
        v32 = v126;
        *(_QWORD *)(a1 + 512) = v126;
        v33 = *(unsigned int **)(v2 + 448);
        v34 = *v33 | 2;
        if ( !v32 )
          v34 = *v33 & 0xFFFFFFFD;
        *v33 = v34;
        v35 = *(int **)(v2 + 448);
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
      v125 = (unsigned __int16)*v18;
      if ( v20 >= *(_QWORD *)(gpsi + 8LL)
        || (v19 = gSharedInfo[1] + (unsigned int)(v20 * LODWORD(gSharedInfo[2])),
            *(_QWORD **)(gpKernelHandleTable + 24 * v20) != v18)
        || *(_BYTE *)(v19 + 24) != 1 )
      {
        KeBugCheckEx(0x197u, 1uLL, v5[12], v19, 1uLL);
      }
      if ( (*(_BYTE *)(v18[5] + 18LL) & 4) != 0 )
      {
        v131[2] = 0LL;
        v132 = 0LL;
        v133 = 0LL;
        v52 = 0;
        v53 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v131[0] = *(_QWORD *)(v53 + 416);
        *(_QWORD *)(v53 + 416) = v131;
        v131[1] = v18;
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
              PushW32ThreadLock(*(_QWORD *)v11, &v132, DereferenceKernelStack);
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
        v121 = v56;
        if ( v52 )
          PopAndFreeW32ThreadLock(&v132);
      }
      else
      {
        v134[2] = 0LL;
        BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread();
        v21 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(gpKernelHandleTable)
          || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v106),
              v108 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
              v21 = 0LL,
              v108) )
        {
          v25 = (__int64 *)PsGetThreadWin32Thread(BugCheckParameter3);
          if ( v25 )
            v21 = *v25;
        }
        v134[0] = *(_QWORD *)(v21 + 416);
        *(_QWORD *)(v21 + 416) = v134;
        v134[1] = v18;
        HMLockObject(v18);
        v26 = *(int **)(gptiCurrent + 448LL);
        v27 = *v26;
        *v26 |= 0x10u;
        xxxSendMessageToClient((struct tagWND *)v5[12], *((_DWORD *)v5 + 22), v5[9], v5[10], v6, 1, &v121);
        v29 = *(_DWORD **)(gptiCurrent + 448LL);
        v30 = *v29 ^ ((unsigned __int8)v27 ^ (unsigned __int8)*v29) & 0x10u;
        *v29 = v30;
      }
      ThreadUnlock1(v30, v29, v28);
      v9 = (unsigned int)(*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL));
      if ( ((*(_WORD *)(a1 + 680) | *(_WORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x2000) != 0
        && (*((_DWORD *)v5 + 17) & 4) == 0 )
      {
        v9 = *((unsigned int *)v5 + 22);
        if ( (unsigned int)v9 >= 0x400
          || (v10 = 0x1C0000000uLL, (MessageTable[v9] & 0x4000) == 0)
          || (v109 = v5[12]) != 0 && (*(_BYTE *)(*(_QWORD *)(v109 + 40) + 18LL) & 4) == 0 )
        {
          v110 = (__int64 *)v5[12];
          if ( v110 )
            v138 = *v110;
          else
            v138 = 0LL;
          v137 = v9;
          v136[2] = v5[9];
          v136[1] = v5[10];
          v136[0] = v121;
          v139 = v5 - 2;
          xxxCallHook(0, 1uLL, (__int64)v136, 12);
        }
      }
      *(_DWORD *)(gptiCurrent + 1412LL) = v118;
    }
LABEL_33:
    v16 = v115;
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
    LODWORD(v37) = v121;
    v5[7] = v121;
    *((_DWORD *)v5 + 17) = v38 | 1;
    if ( v11 )
    {
      LODWORD(v37) = *(_DWORD *)(v11 + 488);
      if ( (v37 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v11 + 448) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v11 + 448) + 4LL) |= 0x200u;
        v37 = *(_QWORD *)(v11 + 448);
        if ( (*(_WORD *)(v37 + 10) & 0x200) != 0 )
          LODWORD(v37) = KeSetEvent(*(PRKEVENT *)(v11 + 736), 2, 0);
      }
    }
  }
  return v37;
}
