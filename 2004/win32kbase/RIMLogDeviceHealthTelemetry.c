/*
 * XREFs of RIMLogDeviceHealthTelemetry @ 0x1C015A630
 * Callers:
 *     RIMFillDeviceHealthInfo @ 0x1C0158CC0 (RIMFillDeviceHealthInfo.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0055BBC (RimDeviceTypeToRimInputTypeString.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@444444444AEBU?$_tlgWrapperByVal@$07@@555@Z @ 0x1C0155DA4 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapp.c)
 */

void __fastcall RIMLogDeviceHealthTelemetry(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // al
  __int64 v4; // r9
  int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  int v16; // edx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+B0h] [rbp-80h] BYREF
  int v21; // [rsp+B4h] [rbp-7Ch] BYREF
  int v22; // [rsp+B8h] [rbp-78h] BYREF
  int v23; // [rsp+BCh] [rbp-74h] BYREF
  BOOL v24; // [rsp+C0h] [rbp-70h] BYREF
  int v25; // [rsp+C4h] [rbp-6Ch] BYREF
  int v26; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v31; // [rsp+F0h] [rbp-40h] BYREF
  const WCHAR *v32; // [rsp+F8h] [rbp-38h] BYREF
  const WCHAR *v33; // [rsp+100h] [rbp-30h] BYREF
  __int64 v34; // [rsp+148h] [rbp+18h] BYREF
  __int64 v35; // [rsp+150h] [rbp+20h] BYREF
  int v36; // [rsp+158h] [rbp+28h] BYREF

  v35 = a3;
  v34 = a2;
  if ( (unsigned int)dword_1C0245170 > 5 )
  {
    v3 = tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL);
    v5 = 0;
    if ( v3 )
    {
      if ( *(char *)(v4 + 200) < 0 && (v6 = *(_QWORD *)(v4 + 480)) != 0 )
        v7 = *(_DWORD *)(v6 + 720);
      else
        v7 = -1;
      v8 = v7;
      v9 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
         - *(_QWORD *)(v4 + 72);
      v10 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *(_QWORD *)(v4 + 64);
      if ( *(char *)(v4 + 200) < 0 && (v11 = *(_QWORD *)(v4 + 480)) != 0 )
        v12 = -__CFSHR__(*(_DWORD *)(v11 + 312), 13);
      else
        v12 = 0;
      v13 = *(_DWORD *)(v4 + 184);
      if ( __CFSHR__(v13, 13) || (v14 = v13 << 20, (v13 & 0x800) != 0) || (v13 & 0x100) != 0 )
      {
        v15 = 0;
        v14 = v13 << 20;
      }
      else
      {
        v15 = 1 - __CFSHR__(*(_DWORD *)(v4 + 184), 13);
      }
      LODWORD(v35) = v12;
      v36 = *(_DWORD *)(v4 + 152);
      v20 = *(_DWORD *)(v4 + 272);
      v21 = *(_DWORD *)(v4 + 288);
      v27 = 0LL;
      v23 = (unsigned __int8)(v13 & 0x80) >> 7;
      v28 = v8;
      v29 = v9;
      v30 = v10;
      LODWORD(v34) = (v13 & 0x2000000u) >> 25;
      LOBYTE(v5) = v14 < 0;
      v22 = v15;
      v24 = __CFSHR__(v13, 13);
      v26 = (unsigned __int16)(v13 & 0x2000) >> 13;
      v16 = *(unsigned __int8 *)(v4 + 48);
      v25 = v5;
      v31 = RimDeviceTypeToRimInputTypeString(v4, v16);
      v32 = *(const WCHAR **)(v17 + 216);
      v33 = L"RIMFillDeviceHealthInfo";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v18,
        byte_1C0216278,
        v19,
        v17,
        &v33,
        &v32,
        &v31,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v36,
        (__int64)&v34,
        (__int64)&v35,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27);
    }
  }
}
