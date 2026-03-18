/*
 * XREFs of ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00D7750
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00D77F8 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43334444@Z @ 0x1C01DEC78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@433344444@Z @ 0x1C01DED8C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@U2@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@434444@Z @ 0x1C01DEEBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U1@U3@U3@U1@U1@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@3553335555@Z @ 0x1C01DEFA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U1@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U1@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344333444@Z @ 0x1C01DF404 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U1@U1@U2@U2@U2@@-$_tlgWri.c)
 */

void __fastcall InputTraceLogging::Delivery::ScanSysQueue(
        const struct tagQMSG *a1,
        const struct tagMSG *a2,
        const struct tagTHREADINFO *a3,
        unsigned __int8 a4)
{
  int v5; // esi
  __int64 *v7; // rdx
  unsigned int v8; // ecx
  int v9; // r10d
  __int64 *v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  int v15; // r9d
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // [rsp+98h] [rbp+7h] BYREF
  int v22; // [rsp+9Ch] [rbp+Bh] BYREF
  int v23; // [rsp+A0h] [rbp+Fh] BYREF
  int v24; // [rsp+A4h] [rbp+13h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+1Fh] BYREF
  int v27; // [rsp+B8h] [rbp+27h] BYREF
  int v28; // [rsp+BCh] [rbp+2Bh] BYREF
  __int64 v29; // [rsp+C0h] [rbp+2Fh] BYREF
  __int64 v30; // [rsp+C8h] [rbp+37h] BYREF
  __int64 v31; // [rsp+D0h] [rbp+3Fh] BYREF
  __int64 v32; // [rsp+D8h] [rbp+47h] BYREF
  __int64 v33; // [rsp+E0h] [rbp+4Fh] BYREF
  int v34; // [rsp+100h] [rbp+6Fh] BYREF

  v5 = a4;
  if ( IsPointerInputMessage(*((_DWORD *)a2 + 2)) )
  {
    v15 = *((unsigned __int16 *)v7 + 8);
    if ( (_WORD)v15 == 1 )
    {
      if ( (unsigned int)dword_1C032FB30 > 4
        && (qword_1C032FB40 & 0x10) != 0
        && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
      {
        v16 = *((_DWORD *)a3 + 308) >> 13;
        v34 = (*((_DWORD *)a3 + 308) >> 29) & 1;
        v21 = *((unsigned __int16 *)v7 + 9);
        v22 = *((_DWORD *)v7 + 8);
        v25 = v7[3];
        v33 = v7[2];
        v29 = *v7;
        v30 = *((_QWORD *)a3 + 54);
        v26 = *((_QWORD *)a1 + 17);
        v28 = v16 & 1;
        v27 = v5;
        v23 = v9;
        v24 = v9;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C032FB30,
          (unsigned int)&unk_1C02EF3C5,
          1,
          v15,
          (__int64)&v26,
          (__int64)&v30,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v29,
          (__int64)&v33,
          (__int64)&v25,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v34);
      }
    }
    else if ( (unsigned int)dword_1C032FB30 > 4
           && (qword_1C032FB40 & 0x10) != 0
           && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
    {
      v17 = *((_DWORD *)a3 + 308) >> 13;
      v24 = (*((_DWORD *)a3 + 308) >> 29) & 1;
      v21 = *((_DWORD *)v7 + 8);
      v26 = v7[3];
      v30 = v7[2];
      v29 = *v7;
      v33 = *((_QWORD *)a3 + 54);
      LODWORD(v25) = *((unsigned __int16 *)v7 + 9);
      v31 = *((_QWORD *)a1 + 5);
      v32 = *((_QWORD *)a1 + 17);
      v22 = v17 & 1;
      v23 = v5;
      v28 = v9;
      v27 = v9;
      LOWORD(v34) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C032FB30,
        (unsigned int)&unk_1C02EF491,
        1,
        v15,
        (__int64)&v32,
        (__int64)&v34,
        (__int64)&v31,
        (__int64)&v25,
        (__int64)&v33,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v26,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v24);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v8) )
  {
    if ( (unsigned int)dword_1C032FB30 > 4
      && (qword_1C032FB40 & 0x10) != 0
      && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
    {
      v18 = *(_DWORD *)(v11 + 1232);
      v34 = (v18 >> 29) & 1;
      v23 = *((_DWORD *)v10 + 8);
      v32 = v10[3];
      v31 = v10[2];
      v26 = *v10;
      v30 = *((_QWORD *)a3 + 54);
      v29 = *((_QWORD *)a1 + 17);
      v24 = (v18 >> 13) & 1;
      LODWORD(v25) = v5;
      v22 = v13;
      v21 = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C032FB30,
        (unsigned int)&unk_1C02EF57A,
        1,
        v12,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v26,
        (__int64)&v31,
        (__int64)&v32,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v34);
    }
  }
  else if ( (unsigned int)(v13 - 256) > 9 )
  {
    if ( (unsigned int)dword_1C032FB30 > 4
      && v13 == 255
      && (qword_1C032FB40 & 0x10) != 0
      && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
    {
      v20 = *(_DWORD *)(v11 + 1232);
      v31 = v10[2];
      v34 = (v20 >> 29) & 1;
      v24 = *((_DWORD *)v10 + 8);
      LOBYTE(v14) = (_BYTE)v31 == 1;
      v32 = v10[3];
      v26 = *v10;
      v30 = *((_QWORD *)a3 + 54);
      v29 = *((_QWORD *)a1 + 17);
      LODWORD(v25) = v5;
      v23 = 255;
      v22 = 255;
      v21 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C032FB30,
        (unsigned int)&unk_1C02EF6ED,
        1,
        255,
        (__int64)&v29,
        (__int64)&v21,
        (__int64)&v30,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v26,
        (__int64)&v31,
        (__int64)&v32,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v34);
    }
  }
  else if ( (unsigned int)dword_1C032FB30 > 4
         && (qword_1C032FB40 & 0x10) != 0
         && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
  {
    v19 = *(_DWORD *)(v11 + 1232);
    v34 = (v19 >> 29) & 1;
    v23 = *((_DWORD *)v10 + 8);
    v32 = *v10;
    v31 = *((_QWORD *)a3 + 54);
    v26 = *((_QWORD *)a1 + 17);
    v24 = (v19 >> 13) & 1;
    LODWORD(v25) = v5;
    v22 = v13;
    v21 = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C032FB30,
      (unsigned int)&unk_1C02EF63A,
      1,
      v12,
      (__int64)&v26,
      (__int64)&v31,
      (__int64)&v21,
      (__int64)&v22,
      (__int64)&v32,
      (__int64)&v23,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&v34);
  }
}
