/*
 * XREFs of ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C01730D8
 * Callers:
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0152254 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0160F28 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C0172960 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C0172A0C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgW.c)
 */

void __fastcall InputTraceLogging::RIM::ReadComplete(const struct RawInputManagerObject *a1, const struct RIMDEV *a2)
{
  char v2; // al
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+78h] [rbp-8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+18h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+28h] BYREF

  v2 = *((_BYTE *)a2 + 48);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
        {
          v14 = *(_QWORD *)(v12 + 472);
          v15 = *(unsigned __int16 *)(v14 + 16);
          LODWORD(v20) = *(unsigned __int16 *)(v14 + 18);
          v19 = *(_QWORD *)(v12 + 16);
          LODWORD(v22) = *(_DWORD *)(v12 + 264);
          LODWORD(v21) = v15;
          v18 = v13;
          v17 = v12;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0244A70,
            byte_1C0215EFF,
            v12,
            v13,
            (__int64)&v17,
            (__int64)&v18,
            (__int64)&v22,
            (__int64)&v19,
            (__int64)&v21,
            (__int64)&v20);
        }
      }
      else if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
      {
        v7 = *(_QWORD *)(v6 + 472);
        v8 = *(unsigned __int16 *)(v7 + 16);
        LODWORD(v20) = *(unsigned __int16 *)(v7 + 18);
        v9 = *(_QWORD *)(v6 + 480);
        LODWORD(v21) = v8;
        v16 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v9 + 24));
        v17 = *(_QWORD *)(v10 + 16);
        LODWORD(v22) = *(_DWORD *)(v10 + 264);
        v18 = v11;
        v19 = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0244A70,
          byte_1C0215E14,
          v10,
          v11,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v22,
          (__int64)&v17,
          (void **)&v16,
          (__int64)&v21,
          (__int64)&v20);
      }
    }
    else if ( v2 == 1 && (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
    {
      v5 = (unsigned __int8 *)&unk_1C0215EC3;
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
  {
    v5 = (unsigned __int8 *)&unk_1C0215E8A;
LABEL_17:
    LODWORD(v20) = *(_DWORD *)(v3 + 264);
    v21 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0244A70,
      v5,
      v3,
      v4,
      (__int64)&v21,
      (__int64)&v20);
  }
}
