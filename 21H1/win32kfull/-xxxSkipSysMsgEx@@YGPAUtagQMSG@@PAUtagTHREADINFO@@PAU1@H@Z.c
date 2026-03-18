/*
 * XREFs of ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?xxxSkipSysMsg@@YGXPAUtagTHREADINFO@@PAUtagQMSG@@@Z @ 0x14E09D (-xxxSkipSysMsg@@YGXPAUtagTHREADINFO@@PAUtagQMSG@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x46B46 (-RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?EqualMsg@@YGHPAUtagQMSG@@0@Z @ 0x6FE5C (-EqualMsg@@YGHPAUtagQMSG@@0@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _WPP_RECORDER_SF_D@24 @ 0x147D5C (_WPP_RECORDER_SF_D@24.c)
 *     _WPP_RECORDER_SF_qqDqqqDqqDqqqD@76 @ 0x14E9F3 (_WPP_RECORDER_SF_qqDqqqDqqDqqqD@76.c)
 *     _xxxCallJournalRecordHook@4 @ 0x152B33 (_xxxCallJournalRecordHook@4.c)
 */

struct tagQMSG *__userpurge xxxSkipSysMsgEx@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagQMSG *a4,
        int a5)
{
  int v5; // edi
  _DWORD *v6; // ebx
  _DWORD *i; // esi
  int v8; // edx
  int GlobalValid; // eax
  int v10; // esi
  int v11; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // [esp-44h] [ebp-70h]
  int v19; // [esp-40h] [ebp-6Ch]
  int v20; // [esp-3Ch] [ebp-68h]
  struct tagQMSG *v21; // [esp+0h] [ebp-2Ch]
  struct tagQMSG *v22; // [esp+0h] [ebp-2Ch]
  struct tagQMSG *v23; // [esp+4h] [ebp-28h]
  struct tagQMSG *v24; // [esp+4h] [ebp-28h]
  int v26; // [esp+20h] [ebp-Ch]
  _DWORD *v27; // [esp+20h] [ebp-Ch]
  _DWORD *v29; // [esp+28h] [ebp-4h]
  struct tagTHREADINFO *v30; // [esp+34h] [ebp+8h]

  v5 = a2;
  v6 = a1;
  i = 0;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(*(_DWORD *)(a2 + 236));
  v8 = *(_DWORD *)(v5 + 236);
  if ( !*(_DWORD *)(v8 + 44) )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
  {
    WPP_RECORDER_SF_D(18, 21, &WPP_639f646729e7343d7b80e44c73d47209_Traceguids, v6[3]);
    v8 = *(_DWORD *)(v5 + 236);
  }
  InputTraceLogging::Delivery::RemoveMessage(v6, v8);
  GlobalValid = PhkFirstGlobalValid(v5);
  if ( !GlobalValid || *(_DWORD *)(v5 + 248) != _grpdeskRitInput )
  {
    if ( PhkFirstGlobalValid(v5) )
      xxxCallJournalRecordHook(v6);
    v26 = *(_DWORD *)(v5 + 236);
    i = *(_DWORD **)(v26 + 44);
    v29 = i;
    if ( i )
    {
      if ( i != (_DWORD *)1 )
      {
        if ( !EqualMsg(v21, v23) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = v26;
          }
          else
          {
            WPP_RECORDER_SF_qqDqqqDqqDqqqD(
              v18,
              v19,
              v20,
              (char)v6,
              v6[17],
              v6[3],
              v6[2],
              v6[4],
              v6[5],
              v6[6],
              (char)i,
              i[17],
              i[3],
              i[2],
              i[4],
              i[5],
              i[6]);
            v10 = *(_DWORD *)(v5 + 236);
          }
          for ( i = *(_DWORD **)(v10 + 12); ; i = (_DWORD *)*i )
          {
            v29 = i;
            if ( !i )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
              {
                WPP_RECORDER_SF_(18, 24, &WPP_639f646729e7343d7b80e44c73d47209_Traceguids);
              }
              return 0;
            }
            if ( EqualMsg(v22, v24) )
              break;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
          {
            LOBYTE(v11) = 5;
            WPP_RECORDER_SF_q(0, v11, 0x12u, 23, (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids, (char)i);
          }
        }
        v13 = *(_DWORD *)(v5 + 236);
        v27 = *(_DWORD **)(v13 + 44);
        if ( i == v27 )
        {
          v14 = *(_DWORD *)(v5 + 236);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v6 = a1;
            if ( LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
            {
              WPP_RECORDER_SF_qq(18, 25, &WPP_639f646729e7343d7b80e44c73d47209_Traceguids, v13, (char)v27);
              v14 = *(_DWORD *)(v5 + 236);
            }
          }
          *(_DWORD *)(v14 + 44) = 0;
          v13 = *(_DWORD *)(v5 + 236);
        }
        DelQEntry((_DWORD *)(v13 + 12), i, (int)a3);
        if ( a3 )
        {
          i = 0;
          v29 = 0;
        }
        else
        {
          i[1] = 0;
          *i = 0;
        }
        EtwTraceInputProcessDelay(v5);
        v15 = MEMORY[0xFFDF0004];
        if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
        {
          v30 = (struct tagTHREADINFO *)MEMORY[0xFFDF0324];
          if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
          {
            v17 = MEMORY[0xFFDF0320];
          }
          else
          {
            do
            {
              _mm_pause();
              v17 = MEMORY[0xFFDF0320];
              v30 = (struct tagTHREADINFO *)MEMORY[0xFFDF0324];
            }
            while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
            i = v29;
            v5 = a2;
            v6 = a1;
            v15 = MEMORY[0xFFDF0004];
          }
          v16 = MEMORY[0xFFDF0004] * ((_DWORD)v30 << 8) + (((unsigned int)v15 * (unsigned __int64)v17) >> 24);
        }
        else
        {
          v16 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
        }
        *(_DWORD *)(*(_DWORD *)(v5 + 236) + 304) = v16;
      }
      goto LABEL_46;
    }
    return 0;
  }
  *(_DWORD *)(GlobalValid + 32) |= 4u;
LABEL_46:
  if ( (((unsigned int)&loc_1FFFFC + 4) & v6[16]) == 0 )
  {
    UpdateKeyStateForMessage(v5, v6);
    if ( (unsigned int)i >= 2 )
      i[16] |= (unsigned int)&loc_1FFFFC + 4;
  }
  return (struct tagQMSG *)i;
}
