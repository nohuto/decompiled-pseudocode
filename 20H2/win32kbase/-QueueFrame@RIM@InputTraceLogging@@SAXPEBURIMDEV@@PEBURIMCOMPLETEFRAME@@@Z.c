/*
 * XREFs of ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C0172FF8
 * Callers:
 *     rimQueueCompleteFrame @ 0x1C0174FA4 (rimQueueCompleteFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0172898 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall InputTraceLogging::RIM::QueueFrame(const struct RIMDEV *a1, const struct RIMCOMPLETEFRAME *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rax
  int v7; // ecx
  int v8; // [rsp+60h] [rbp-20h] BYREF
  __int64 v9; // [rsp+68h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp-10h] BYREF
  __int64 v11; // [rsp+78h] [rbp-8h] BYREF
  int v12; // [rsp+98h] [rbp+18h] BYREF
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
  {
    v6 = *(_QWORD *)(v5 + 472);
    v7 = *(unsigned __int16 *)(v6 + 16);
    v12 = *(unsigned __int16 *)(v6 + 18);
    v14 = *(_DWORD *)(v2 + 84);
    v9 = *(_QWORD *)(v2 + 40);
    v13 = v7;
    v8 = v4;
    v10 = v3;
    v11 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0244A70,
      byte_1C0215C71,
      v2,
      v3,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
