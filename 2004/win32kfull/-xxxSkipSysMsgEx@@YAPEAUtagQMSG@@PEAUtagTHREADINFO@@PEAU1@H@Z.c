/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C00B0748 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00B3268 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00B384C (PhkFirstGlobalValid.c)
 *     WPP_RECORDER_SF_D @ 0x1C01DA100 (WPP_RECORDER_SF_D.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01E0030 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     WPP_RECORDER_SF_qqDqqqDqqDqqqD @ 0x1C01E2A8C (WPP_RECORDER_SF_qqDqqqDqqDqqqD.c)
 *     xxxCallJournalRecordHook @ 0x1C01E72C4 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, int a3)
{
  unsigned __int64 i; // rbx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 GlobalValid; // rax
  __int64 v14; // r8
  int v15; // edx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-C8h]
  __int64 v23; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-40h] BYREF
  int v25; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+108h] [rbp+20h] BYREF

  i = 0LL;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v24, *((_QWORD *)a1 + 53));
  v8 = *((_QWORD *)a1 + 53);
  if ( !*(_QWORD *)(v8 + 80) )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_D(v7, v8, 18, 21, (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids, *((_DWORD *)a2 + 6));
  }
  if ( (IsPointerInputMessage(*((_DWORD *)a2 + 6))
     || InputTraceLogging::IsMouseInputMessage(v10)
     || (unsigned int)(v11 - 256) <= 9
     || v11 == 255)
    && (unsigned int)dword_1C0330B30 > 5
    && (qword_1C0330B40 & 0x10) != 0
    && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
  {
    v23 = *((_QWORD *)a2 + 17);
    v26 = v9;
    v25 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C0330B30,
      (unsigned int)&unk_1C02F0333,
      v11,
      v12,
      (__int64)&v23,
      (__int64)&v25,
      (__int64)&v26);
  }
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( !GlobalValid || *((_QWORD *)a1 + 56) != grpdeskRitInput )
  {
    if ( PhkFirstGlobalValid(a1, 0LL) )
      xxxCallJournalRecordHook(a2);
    v14 = *((_QWORD *)a1 + 53);
    i = *(_QWORD *)(v14 + 80);
    if ( i )
    {
      if ( i != 1 )
      {
        if ( !EqualMsg(*(struct tagQMSG **)(v14 + 80), a2) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qqDqqqDqqDqqqD(
              v16,
              v15,
              v17,
              v18,
              v22,
              (char)a2,
              *((_QWORD *)a2 + 13),
              *((_DWORD *)a2 + 6),
              *((_QWORD *)a2 + 2),
              *((_QWORD *)a2 + 4),
              *((_QWORD *)a2 + 5),
              *((_DWORD *)a2 + 12),
              i,
              *(_QWORD *)(i + 104),
              *(_DWORD *)(i + 24),
              *(_QWORD *)(i + 16),
              *(_QWORD *)(i + 32),
              *(_QWORD *)(i + 40),
              *(_DWORD *)(i + 48));
            v17 = *((_QWORD *)a1 + 53);
          }
          for ( i = *(_QWORD *)(v17 + 24); ; i = *(_QWORD *)i )
          {
            if ( !i )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v15) = 5;
                WPP_RECORDER_SF_(v16, v15, 18, 24, (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids);
              }
              return 0LL;
            }
            if ( EqualMsg((struct tagQMSG *)i, a2) )
              break;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v15) = 5;
            WPP_RECORDER_SF_q(v16, v15, 18, 23, (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids, i);
          }
        }
        v20 = *((_QWORD *)a1 + 53);
        if ( i == *(_QWORD *)(v20 + 80) )
        {
          v21 = *((_QWORD *)a1 + 53);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v21) = 5;
            WPP_RECORDER_SF_qq(
              v20,
              v21,
              18,
              25,
              (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
              v20,
              *(_QWORD *)(v20 + 80));
            v21 = *((_QWORD *)a1 + 53);
          }
          *(_QWORD *)(v21 + 80) = 0LL;
          v20 = *((_QWORD *)a1 + 53);
        }
        DelQEntry((unsigned int **)(v20 + 24), (unsigned int *)i, a3);
        if ( a3 )
        {
          i = 0LL;
        }
        else
        {
          *(_QWORD *)(i + 8) = 0LL;
          *(_QWORD *)i = 0LL;
        }
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 53) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
      goto LABEL_46;
    }
    return 0LL;
  }
  *(_DWORD *)(GlobalValid + 64) |= 4u;
LABEL_46:
  if ( (*((_DWORD *)a2 + 25) & 0x200000) == 0 )
  {
    UpdateKeyStateForMessage(a1, a2);
    if ( i >= 2 )
      *(_DWORD *)(i + 100) |= 0x200000u;
  }
  return (struct tagQMSG *)i;
}
