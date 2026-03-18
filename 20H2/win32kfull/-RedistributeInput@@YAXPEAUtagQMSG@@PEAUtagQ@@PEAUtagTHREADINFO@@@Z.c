/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00F661C
 * Callers:
 *     zzzReattachThreads @ 0x1C00BF898 (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C00057A8 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C000777C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0052550 (WPP_RECORDER_SF_qiqdd.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00D77F8 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D899C (WPP_RECORDER_SF_qqq.c)
 *     IsProcessedByInputService @ 0x1C00F69D4 (IsProcessedByInputService.c)
 *     IsHiddenByInputService @ 0x1C00F6C74 (IsHiddenByInputService.c)
 *     FreeQEntry @ 0x1C00F6C9C (FreeQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6CF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  __int64 v3; // r10
  struct tagTHREADINFO *v4; // r9
  struct tagQMSG *v6; // rbx
  __int64 v7; // r12
  struct tagQMSG *v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rdx
  _UNKNOWN **v12; // r11
  __int64 v13; // r8
  struct tagTHREADINFO *v14; // rdx
  struct tagTHREADINFO *v15; // rsi
  int v16; // eax
  void *v17; // r11
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rdx
  struct tagQMSG *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct tagQMSG *v25; // rcx
  struct tagQMSG *v26; // rsi
  int v27; // eax
  struct tagQMSG *v28; // rdx
  unsigned int v29; // eax
  struct tagQMSG *v30; // rax
  __int64 v31; // rcx
  struct tagQMSG *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+64h] [rbp-9Ch] BYREF
  int v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  int *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  int *v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  int *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  int *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  int *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]

  v3 = 0LL;
  v4 = a3;
  v6 = a1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = gptiCurrent;
  v10 = 0LL;
  v52 = gptiCurrent;
  if ( a1 )
  {
    v12 = &WPP_RECORDER_INITIALIZED;
    do
    {
      v13 = *((_QWORD *)v6 + 13);
      v14 = (struct tagTHREADINFO *)v13;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 1232) & 0x20000000) != 0 && (unsigned int)IsHiddenByInputService(v6) )
        {
          *(_DWORD *)(v38 + 1232) = v39 & 0xDFFFFFFF;
          v14 = (struct tagTHREADINFO *)*((_QWORD *)v6 + 13);
        }
        v4 = a3;
      }
      v15 = v14;
      if ( (*(_DWORD *)(v9 + 1232) & 0x40000) != 0 )
      {
        v29 = *((_DWORD *)v6 + 6);
        if ( v14 == (struct tagTHREADINFO *)v9 )
        {
          if ( v29 >= 0x100 && v29 <= 0x102 && v4 )
          {
            *((_QWORD *)v6 + 13) = v4;
            v15 = v4;
          }
        }
        else
        {
          if ( v29 == 513 || v29 == 516 )
          {
            v40 = HMValidateHandleNoSecure(*((_QWORD *)v6 + 2), 1);
            v3 = 0LL;
            v12 = &WPP_RECORDER_INITIALIZED;
            if ( v40 )
            {
              if ( *(_QWORD *)(v40 + 16) == v9 )
                *((_QWORD *)v6 + 13) = v9;
            }
          }
          v15 = (struct tagTHREADINFO *)*((_QWORD *)v6 + 13);
        }
      }
      if ( v6 == *((struct tagQMSG **)a2 + 10) )
      {
        v33 = *((_QWORD *)v15 + 54);
        if ( a2 != (struct tagQ *)v33 && *(_QWORD *)(v33 + 64) == v3 )
        {
          v34 = *((_QWORD *)a2 + 8);
          if ( v34 )
          {
            if ( *(_QWORD *)(v34 + 432) == v33 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v12 )
              {
                WPP_RECORDER_SF_qqq(
                  v34,
                  4u,
                  0x12u,
                  0x21u,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  v33,
                  v9,
                  *((_QWORD *)a2 + 8));
                v33 = *((_QWORD *)v15 + 54);
                v12 = &WPP_RECORDER_INITIALIZED;
                v34 = *((_QWORD *)a2 + 8);
                v3 = 0LL;
              }
              *(_QWORD *)(v33 + 64) = v34;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v12 )
              {
                WPP_RECORDER_SF_qqq(
                  v34,
                  4u,
                  0x12u,
                  0x22u,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  a2,
                  v9,
                  *((_QWORD *)a2 + 8));
                v3 = 0LL;
              }
              *((_QWORD *)a2 + 8) = v3;
            }
          }
        }
      }
      v16 = IsProcessedByInputService(v6);
      v18 = 4LL;
      v19 = v3;
      v20 = v3;
      if ( *((_DWORD *)v6 + 24) != 4 )
        v19 = (__int64)v15;
      if ( !v16 )
        v20 = v19;
      if ( v20 )
      {
        if ( !v8 || v7 != v20 )
        {
          v21 = *(_QWORD *)(v20 + 432);
          v8 = *(struct tagQMSG **)(v21 + 32);
          if ( v8 && *((_DWORD *)v6 + 12) - *((_DWORD *)v8 + 12) >= 0 )
          {
            v10 = v21 + 24;
          }
          else
          {
            v8 = (struct tagQMSG *)(v21 + 24);
            v10 = v21 + 24;
          }
        }
        v22 = *(struct tagQMSG **)v8;
        if ( *(_QWORD *)v8 )
        {
          do
          {
            if ( *((_DWORD *)v6 + 12) - *((_DWORD *)v22 + 12) < 0 )
              break;
            v8 = v22;
            v22 = *(struct tagQMSG **)v22;
          }
          while ( v22 );
        }
        *((_DWORD *)v6 + 25) &= 0xFFF0FFFF;
        v23 = *((unsigned int *)v6 + 6);
        v24 = *((unsigned int *)v6 + 25);
        if ( ((unsigned int)(v23 - 256) <= 9 || InputTraceLogging::IsMouseInputMessage(v23))
          && dword_1C032FB30 > (unsigned int)v18
          && (qword_1C032FB40 & 0x10) != 0
          && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
        {
          v50 = v23;
          v46 = (_DWORD)v24 << 13 >> 31;
          v47 = (_DWORD)v24 << 14 >> 31;
          v48 = (_DWORD)v24 << 15 >> 31;
          v51 = *((_QWORD *)v6 + 17);
          v64 = &v46;
          v62 = &v47;
          v60 = &v48;
          v58 = &v49;
          v56 = &v50;
          v54 = &v51;
          v49 = (_DWORD)v24 << 12 >> 31;
          v65 = v18;
          v63 = v18;
          v61 = v18;
          v59 = v18;
          v57 = v18;
          v55 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032FB30, (int)&dword_1C02EF333, 0, 0, 8u, &v53);
          v3 = 0LL;
        }
        v25 = v6;
        v26 = v6;
        v6 = *(struct tagQMSG **)v6;
        *(_QWORD *)v25 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v25 + 1) = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
          *(_QWORD *)(*(_QWORD *)v8 + 8LL) = v26;
        }
        else
        {
          *((_QWORD *)v25 + 1) = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v25;
        }
        *(_QWORD *)v8 = v26;
        v8 = v26;
        v27 = *(_DWORD *)(v10 + 16) + 1;
        *(_DWORD *)(v10 + 16) = v27;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v44) = v27;
          LODWORD(v43) = *(_DWORD *)(v10 + 20);
          WPP_RECORDER_SF_qiqdd(
            (__int64)v25,
            v23,
            v24,
            0x24u,
            (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
            v26,
            *((_QWORD *)v26 + 17),
            v10,
            v43,
            v44);
          v3 = 0LL;
        }
        if ( *((_DWORD *)v26 + 24) != (_DWORD)v3 && (*(_WORD *)(*(_QWORD *)(v20 + 448) + 6LL) & 0x2000) == 0 )
        {
          SetWakeBit(v20, 0x2040u);
          v3 = 0LL;
        }
        v28 = (struct tagQMSG *)*((_QWORD *)a2 + 10);
        if ( v26 == v28 )
        {
          v35 = *(_QWORD *)(v20 + 432);
          if ( a2 != (struct tagQ *)v35 )
          {
            if ( *(_QWORD *)(v35 + 80) == v3 )
            {
              v36 = *(_QWORD *)(v20 + 432);
              v37 = *((_QWORD *)a2 + 10);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v3 )
              {
                WPP_RECORDER_SF_qqq(
                  v35,
                  5u,
                  0x12u,
                  0x25u,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  v28,
                  v35,
                  v3);
                v36 = *(_QWORD *)(v20 + 432);
                v3 = 0LL;
                v37 = *((_QWORD *)a2 + 10);
              }
              *(_QWORD *)(v36 + 80) = v37;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v3 )
            {
              WPP_RECORDER_SF_qq(
                v35,
                5u,
                0x12u,
                0x26u,
                (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                a2,
                *((_QWORD *)a2 + 10));
              v3 = 0LL;
            }
            *((_QWORD *)a2 + 10) = v3;
          }
        }
        if ( !v6 )
          break;
        *((_QWORD *)v6 + 1) = v3;
        v7 = v20;
      }
      else
      {
        v30 = *(struct tagQMSG **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v30 + 1) = v3;
          v30 = *(struct tagQMSG **)v6;
        }
        v31 = *((_QWORD *)a2 + 10);
        v32 = v6;
        v6 = v30;
        if ( v32 == (struct tagQMSG *)v31 )
        {
          if ( WPP_RECORDER_INITIALIZED != v17 && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v3 )
          {
            WPP_RECORDER_SF_qq(
              v31,
              5u,
              0x12u,
              0x23u,
              (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
              a2,
              v31);
            v3 = 0LL;
          }
          *((_QWORD *)a2 + 10) = v3;
        }
        CleanEventMessage(v32);
        FreeQEntry(v32);
        v3 = 0LL;
      }
      v9 = v52;
      v12 = &WPP_RECORDER_INITIALIZED;
      v4 = a3;
    }
    while ( v6 );
  }
  v11 = *((_QWORD *)a2 + 6);
  if ( v11 )
  {
    do
    {
      v41 = *(_QWORD *)(v11 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v11 + 104) + 432LL) != a2 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)a2 + 24), (struct tagQMSG *)v11);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v42 + 104) + 432LL) + 24LL), (struct tagQMSG *)v42);
      }
      v11 = v41;
    }
    while ( v41 );
  }
}
