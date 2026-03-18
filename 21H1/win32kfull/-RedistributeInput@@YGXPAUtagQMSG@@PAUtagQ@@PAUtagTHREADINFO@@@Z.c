/*
 * XREFs of ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4
 * Callers:
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 * Callees:
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     _WPP_RECORDER_SF_qiqdd@44 @ 0x6C1F6 (_WPP_RECORDER_SF_qiqdd@44.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     ?IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z @ 0xA9632 (-IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     _IsHiddenByInputService@4 @ 0xAAB8E (_IsHiddenByInputService@4.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?DeferMessage@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z @ 0xC28BC (-DeferMessage@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z @ 0xC3B74 (-RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z.c)
 *     _IsProcessedByInputService@4 @ 0xC498C (_IsProcessedByInputService@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4444@Z @ 0x14BE00 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _FreePointerMessageParams@4 @ 0x15A014 (_FreePointerMessageParams@4.c)
 */

void __userpurge RedistributeInput(
        _DWORD *a1@<edx>,
        struct tagQMSG *a2@<ecx>,
        struct tagQMSG *a3,
        struct tagQ *a4,
        struct tagTHREADINFO *a5)
{
  int v7; // ecx
  int v8; // ebx
  struct tagQMSG *v9; // edx
  BOOL v10; // eax
  struct tagQMSG *v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  struct tagQMSG *v19; // eax
  int v20; // ecx
  struct tagQMSG *v21; // ebx
  struct tagQMSG *v22; // edx
  int v23; // ecx
  struct tagQMSG *v24; // ecx
  int v25; // edx
  struct tagQMSG *v26; // eax
  char *v27; // ebx
  unsigned int v28; // ecx
  int *v29; // ecx
  struct tagQMSG *v30; // ebx
  struct tagQMSG *v31; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // ebx
  int v40; // ecx
  _DWORD *v41; // edx
  _DWORD *v42; // esi
  _DWORD *v43; // edx
  char v44; // [esp-Ch] [ebp-48h]
  _DWORD v45[2]; // [esp+Ch] [ebp-30h] BYREF
  int v46; // [esp+14h] [ebp-28h] BYREF
  int v47; // [esp+18h] [ebp-24h] BYREF
  int v48; // [esp+1Ch] [ebp-20h] BYREF
  int v49; // [esp+20h] [ebp-1Ch] BYREF
  int v50; // [esp+24h] [ebp-18h] BYREF
  int v51; // [esp+28h] [ebp-14h] BYREF
  int v52; // [esp+2Ch] [ebp-10h]
  int v53; // [esp+30h] [ebp-Ch]
  struct tagQMSG *v54; // [esp+34h] [ebp-8h]
  int v55; // [esp+38h] [ebp-4h]

  v7 = _gptiCurrent;
  v53 = _gptiCurrent;
  v51 = 0;
  v54 = 0;
  v52 = 0;
  while ( a2 )
  {
    v8 = *((_DWORD *)a2 + 17);
    v9 = (struct tagQMSG *)v8;
    if ( v8 )
    {
      v55 = *(_DWORD *)(v8 + 688);
      if ( (v55 & 0x20000000) != 0 )
      {
        v10 = IsHiddenByInputService(a2);
        v7 = v53;
        if ( v10 )
        {
          *(_DWORD *)(v8 + 688) = v55 & 0xDFFFFFFF;
          v9 = (struct tagQMSG *)*((_DWORD *)a2 + 17);
        }
      }
    }
    v11 = v9;
    if ( (*(_DWORD *)(v7 + 688) & 0x40000) != 0 )
    {
      v12 = *((_DWORD *)a2 + 3);
      if ( v9 == (struct tagQMSG *)v7 )
      {
        v11 = v9;
        if ( v12 >= 0x100 && v12 <= 0x102 && a3 )
        {
          *((_DWORD *)a2 + 17) = a3;
          v11 = a3;
        }
      }
      else
      {
        if ( v12 == 513 || v12 == 516 )
        {
          v13 = HMValidateHandleNoSecure(*((_DWORD *)a2 + 2), 1);
          if ( v13 )
          {
            if ( *(_DWORD *)(v13 + 8) == v53 )
              *((_DWORD *)a2 + 17) = v53;
          }
        }
        v11 = (struct tagQMSG *)*((_DWORD *)a2 + 17);
      }
    }
    v14 = 0;
    if ( a2 == (struct tagQMSG *)a1[11] )
    {
      v15 = (_DWORD *)*((_DWORD *)v11 + 59);
      if ( a1 != v15 && !v15[9] )
      {
        v16 = a1[9];
        if ( v16 )
        {
          if ( *(_DWORD **)(v16 + 236) == v15 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 4;
              WPP_RECORDER_SF_qqq(
                v16,
                v14,
                0x12u,
                33,
                (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                (char)v15,
                v53,
                a1[9]);
              v15 = (_DWORD *)*((_DWORD *)v11 + 59);
              v14 = 0;
              v16 = a1[9];
            }
            v15[9] = v16;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 4;
              WPP_RECORDER_SF_qqq(
                v16,
                v14,
                0x12u,
                34,
                (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                (char)a1,
                v53,
                a1[9]);
            }
            a1[9] = 0;
          }
        }
      }
    }
    v17 = !IsProcessedByInputService(a2) ? (*((_DWORD *)a2 + 15) != 4 ? (unsigned int)v11 : 0) : 0;
    v55 = v17;
    if ( !v17 )
    {
      v19 = *(struct tagQMSG **)a2;
      if ( *(_DWORD *)a2 )
      {
        *((_DWORD *)v19 + 1) = v18;
        v19 = *(struct tagQMSG **)a2;
      }
      v20 = a1[11];
      v21 = a2;
      a2 = v19;
      if ( v21 == (struct tagQMSG *)v20 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) != (_WORD)v18 )
        {
          LOBYTE(v18) = 5;
          WPP_RECORDER_SF_qq(v20, v18, 0x12u, 35, (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids, (char)a1, v20);
        }
        a1[11] = 0;
      }
      CleanEventMessage(v21);
      if ( (*((_BYTE *)v21 + 64) & 8) != 0 && !*((_DWORD *)v21 + 15) && IsPointerInputMessage(*((_DWORD *)v21 + 3)) )
        FreePointerMessageParams(v21);
      Win32FreeToPagedLookasideList(_QEntryLookaside, v21);
      goto LABEL_81;
    }
    v22 = v54;
    if ( !v54 || v51 != v17 )
    {
      v23 = *(_DWORD *)(v17 + 236);
      v22 = *(struct tagQMSG **)(v23 + 16);
      v54 = v22;
      if ( v22 && *((_DWORD *)a2 + 6) - *((_DWORD *)v22 + 6) >= 0 )
      {
        v52 = v23 + 12;
      }
      else
      {
        v22 = (struct tagQMSG *)(v23 + 12);
        v54 = (struct tagQMSG *)(v23 + 12);
        v52 = v23 + 12;
      }
    }
    v24 = *(struct tagQMSG **)v22;
    if ( *(_DWORD *)v22 )
    {
      v25 = *((_DWORD *)a2 + 6);
      do
      {
        if ( v25 - *((_DWORD *)v24 + 6) < 0 )
          break;
        v26 = *(struct tagQMSG **)v24;
        v54 = v24;
        v24 = v26;
      }
      while ( v26 );
    }
    *((_DWORD *)a2 + 16) &= 0xFFF0FFFF;
    v27 = (char *)*((_DWORD *)a2 + 3);
    v51 = *((_DWORD *)a2 + 16);
    if ( (InputTraceLogging::IsKeyboardInputMessage(v27) || InputTraceLogging::IsMouseInputMessage(v27))
      && (unsigned int)dword_2689E8 > 4
      && _tlgKeywordOn(&dword_2689E8, 16LL) )
    {
      v28 = v51;
      v45[0] = *((_DWORD *)a2 + 24);
      v45[1] = *((_DWORD *)a2 + 25);
      v47 = (int)v27;
      v51 = ((unsigned int)v51 >> 18) & 1;
      v50 = (v28 >> 17) & 1;
      v49 = HIWORD(v28) & 1;
      v48 = (v28 >> 19) & 1;
      v46 = (int)v45;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        (int)&unk_25420B,
        v48,
        v48,
        (int)&v46,
        (int)&v47,
        (int)&v48,
        (int)&v49,
        (int)&v50,
        (int)&v51);
    }
    v29 = (int *)v54;
    v30 = a2;
    v31 = a2;
    a2 = *(struct tagQMSG **)a2;
    *(_DWORD *)v30 = *(_DWORD *)v54;
    if ( *v29 )
    {
      *((_DWORD *)v31 + 1) = *(_DWORD *)(*v29 + 4);
      v32 = *v29;
    }
    else
    {
      *((_DWORD *)v31 + 1) = *(_DWORD *)(v52 + 4);
      v32 = v52;
    }
    *(_DWORD *)(v32 + 4) = v30;
    *v29 = (int)v30;
    v33 = v52;
    v54 = v30;
    v34 = *(_DWORD *)(v52 + 8) + 1;
    *(_DWORD *)(v52 + 8) = v34;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qiqdd(
        v33,
        36,
        (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
        (char)v30,
        *((_DWORD *)v30 + 24),
        *((_DWORD *)v30 + 25),
        v33,
        *(_DWORD *)(v33 + 12),
        v34);
    v35 = v55;
    if ( *((_DWORD *)v30 + 15) && (*(_WORD *)(*(_DWORD *)(v55 + 244) + 6) & 0x2000) == 0 )
    {
      SetWakeBit(v55, 8256);
      v35 = v55;
    }
    v36 = a1[11];
    if ( v30 == (struct tagQMSG *)v36 )
    {
      v37 = *(_DWORD *)(v35 + 236);
      if ( a1 != (_DWORD *)v37 )
      {
        if ( *(_DWORD *)(v37 + 44) )
        {
          v39 = v55;
        }
        else
        {
          v38 = v37;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v46 = v37;
            if ( LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
            {
              v44 = v36;
              LOBYTE(v36) = 5;
              WPP_RECORDER_SF_qqq(
                v37,
                v36,
                0x12u,
                37,
                (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                v44,
                v37,
                0);
              v39 = v55;
              v40 = a1[11];
              v38 = *(_DWORD *)(v55 + 236);
              goto LABEL_72;
            }
            v38 = v46;
          }
          v39 = v55;
          v40 = v36;
LABEL_72:
          *(_DWORD *)(v38 + 44) = v40;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
        {
          LOBYTE(v36) = 5;
          WPP_RECORDER_SF_qq(0, v36, 0x12u, 38, (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids, (char)a1, a1[11]);
        }
        a1[11] = 0;
        goto LABEL_79;
      }
    }
    v39 = v55;
LABEL_79:
    if ( !a2 )
      break;
    *((_DWORD *)a2 + 1) = 0;
    v51 = v39;
LABEL_81:
    v7 = v53;
  }
  v41 = (_DWORD *)a1[7];
  if ( v41 )
  {
    do
    {
      v42 = (_DWORD *)v41[1];
      if ( *(_DWORD **)(v41[17] + 236) != a1 )
      {
        RemoveQMsgFromDeferList((int)(a1 + 3), v41);
        DeferMessage(*(_DWORD *)(v43[17] + 236) + 12, v43);
      }
      v41 = v42;
    }
    while ( v42 );
  }
}
