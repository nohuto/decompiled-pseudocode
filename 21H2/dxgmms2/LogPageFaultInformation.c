/*
 * XREFs of LogPageFaultInformation @ 0x1C002CF78
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000DE00 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0026C14 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U4@U2@U4@U4@U4@U2@U4@U4@U4@U4@U4@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@646664666664AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0029A18 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_1C0029A18.c)
 */

void __fastcall LogPageFaultInformation(int a1)
{
  bool v2; // al
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  void *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+B0h] [rbp-80h] BYREF
  int v14; // [rsp+B4h] [rbp-7Ch] BYREF
  int v15; // [rsp+B8h] [rbp-78h] BYREF
  int v16; // [rsp+BCh] [rbp-74h] BYREF
  int v17; // [rsp+C0h] [rbp-70h] BYREF
  int v18; // [rsp+C4h] [rbp-6Ch] BYREF
  int v19; // [rsp+C8h] [rbp-68h] BYREF
  int v20; // [rsp+CCh] [rbp-64h] BYREF
  int v21; // [rsp+D0h] [rbp-60h] BYREF
  void *v22; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int16 *v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF
  __int16 v28; // [rsp+130h] [rbp+0h] BYREF
  int v29; // [rsp+138h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1C0050048 > 5 )
  {
    v2 = tlgKeywordOn((__int64)&dword_1C0050048, 0x400000000010LL);
    v6 = 0LL;
    if ( v2 )
    {
      if ( v4 )
        v7 = *(void **)(v4 + 80);
      else
        v7 = 0LL;
      if ( v4 )
        v6 = *(_QWORD *)(v4 + 72);
      v8 = *(_QWORD *)(v3 + 16);
      v9 = *(_DWORD *)(v5 + 60);
      v22 = v7;
      v10 = v9;
      v11 = (unsigned int)(v9 >> 1);
      v12 = *(_QWORD *)(v8 + 316);
      v23 = v6;
      v13 = v11;
      v29 = v10 & 1;
      v14 = *(_DWORD *)(v5 + 56);
      v15 = *(_DWORD *)(v5 + 52);
      v16 = *(_DWORD *)(v5 + 48);
      v24 = *(_QWORD *)(v5 + 40);
      v17 = *(_DWORD *)(v5 + 32);
      v18 = *(_DWORD *)(v5 + 28);
      v19 = *(_DWORD *)(v5 + 24);
      v25 = *(_QWORD *)(v5 + 16);
      v20 = *(_DWORD *)(v5 + 8);
      v21 = a1;
      v26 = *(unsigned __int16 **)(v8 + 1520);
      v27 = v12;
      v28 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v11,
        byte_1C0043E0A,
        v12,
        1LL,
        (__int64)&v28,
        (__int64)&v27,
        &v26,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v25,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v24,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v29,
        (__int64)&v23,
        &v22);
    }
  }
}
