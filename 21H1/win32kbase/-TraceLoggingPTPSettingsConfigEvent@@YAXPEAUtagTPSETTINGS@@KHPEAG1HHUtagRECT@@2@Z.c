/*
 * XREFs of ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01AA7AC
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A99A8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333AEBU?$_tlgWrapSz@G@@4333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01A7BC0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U1@U1@U1@U1@U1@U1@.c)
 */

void __fastcall TraceLoggingPTPSettingsConfigEvent(
        struct tagTPSETTINGS *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        int a6,
        int a7,
        struct tagRECT *a8,
        struct tagRECT *a9)
{
  __int64 v9; // r8
  const WCHAR *v10; // r9
  int *v11; // r10
  int v12; // r11d
  LONG right; // [rsp+B0h] [rbp-80h] BYREF
  LONG bottom; // [rsp+B4h] [rbp-7Ch] BYREF
  LONG v15; // [rsp+B8h] [rbp-78h] BYREF
  LONG v16; // [rsp+BCh] [rbp-74h] BYREF
  int v17; // [rsp+C0h] [rbp-70h] BYREF
  int v18; // [rsp+C4h] [rbp-6Ch] BYREF
  int v19; // [rsp+C8h] [rbp-68h] BYREF
  int v20; // [rsp+CCh] [rbp-64h] BYREF
  int v21; // [rsp+D0h] [rbp-60h] BYREF
  int v22; // [rsp+D4h] [rbp-5Ch] BYREF
  int v23; // [rsp+D8h] [rbp-58h] BYREF
  int v24; // [rsp+DCh] [rbp-54h] BYREF
  int v25; // [rsp+E0h] [rbp-50h] BYREF
  int v26; // [rsp+E4h] [rbp-4Ch] BYREF
  int v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  const WCHAR *v29; // [rsp+F8h] [rbp-38h] BYREF
  const WCHAR *v30; // [rsp+100h] [rbp-30h] BYREF

  if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x800000000000LL) )
  {
    v28 = 2048LL;
    v30 = v10;
    v19 = v9;
    right = a9->right;
    bottom = a9->bottom;
    v20 = v12;
    v15 = a8->right;
    v16 = a8->bottom;
    v17 = a7;
    v18 = a6;
    v29 = a5;
    v21 = v11[7];
    v22 = v11[3];
    v23 = v11[6];
    v24 = v11[5];
    v25 = v11[4];
    v26 = v11[2];
    v27 = *v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)a8,
      byte_1C021FC11,
      v9,
      (__int64)v10,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      &v30,
      &v29,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&bottom,
      (__int64)&right,
      (__int64)&v28);
  }
}
