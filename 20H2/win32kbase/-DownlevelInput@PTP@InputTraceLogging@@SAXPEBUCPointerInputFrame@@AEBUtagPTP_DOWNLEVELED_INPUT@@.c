/*
 * XREFs of ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01A0648
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A2A5C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@43@Z @ 0x1C019FDC8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@@-$_tlgWrit.c)
 *     ?PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z @ 0x1C01A1B4C (-PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z.c)
 */

void __fastcall InputTraceLogging::PTP::DownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2,
        __int64 a3)
{
  int v3; // r11d
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10
  unsigned int v18; // r11d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // [rsp+28h] [rbp-48h]
  __int64 *v23; // [rsp+38h] [rbp-38h]
  __int64 *v24; // [rsp+48h] [rbp-28h]
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+68h] [rbp-8h] BYREF
  __int64 v29; // [rsp+88h] [rbp+18h] BYREF
  __int64 v30; // [rsp+98h] [rbp+28h] BYREF

  v3 = *(_DWORD *)a2;
  if ( *(int *)a2 >= 0 )
  {
    if ( v3 <= 1 )
    {
      if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 128LL) )
      {
        if ( v17 )
          v19 = *(unsigned int *)(v17 + 40);
        else
          v19 = (unsigned int)v16;
        if ( v17 )
          v20 = *(_QWORD *)(v17 + 72);
        else
          v20 = v16;
        if ( v17 )
          v16 = *(_QWORD *)(v17 + 112);
        LODWORD(v29) = *((_DWORD *)a2 + 1);
        v28 = a3;
        v27 = InputTraceLogging::PTPDownlevelActionToString(v18, v20, v19, v16);
        v24 = &v28;
        v23 = &v27;
        v22 = &v26;
        v13 = &v25;
        v26 = v21;
        v15 = (unsigned __int8 *)&unk_1C0218857;
        v25 = v12;
        goto LABEL_26;
      }
    }
    else if ( v3 == 2 && (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 128LL) )
    {
      if ( v7 )
        v9 = *(unsigned int *)(v7 + 40);
      else
        v9 = (unsigned int)v6;
      if ( v7 )
        v10 = *(_QWORD *)(v7 + 72);
      else
        v10 = v6;
      if ( v7 )
        v6 = *(_QWORD *)(v7 + 112);
      LODWORD(v29) = *((_DWORD *)a2 + 1);
      v25 = a3;
      v26 = InputTraceLogging::PTPDownlevelActionToString(v8, v10, v9, v6);
      v24 = &v25;
      v23 = &v26;
      v22 = &v27;
      v13 = &v28;
      v27 = v14;
      v15 = (unsigned __int8 *)&unk_1C02187EF;
      v28 = v12;
LABEL_26:
      LODWORD(v30) = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C0244A70,
        v15,
        v11,
        v12,
        (__int64)v13,
        (__int64)v22,
        (__int64)&v30,
        (void **)v23,
        (__int64)&v29,
        (__int64)v24);
    }
  }
}
