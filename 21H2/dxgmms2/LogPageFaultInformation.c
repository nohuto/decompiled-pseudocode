/*
 * XREFs of LogPageFaultInformation @ 0x1C0036430
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C7A0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U4@U2@U4@U4@U4@U2@U4@U4@U4@U4@U4@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@646664666664AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0033648 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_1C0033648.c)
 */

void __fastcall LogPageFaultInformation(int a1)
{
  bool v2; // al
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // [rsp+B0h] [rbp-80h] BYREF
  int v10; // [rsp+B4h] [rbp-7Ch] BYREF
  int v11; // [rsp+B8h] [rbp-78h] BYREF
  int v12; // [rsp+BCh] [rbp-74h] BYREF
  int v13; // [rsp+C0h] [rbp-70h] BYREF
  int v14; // [rsp+C4h] [rbp-6Ch] BYREF
  int v15; // [rsp+C8h] [rbp-68h] BYREF
  int v16; // [rsp+CCh] [rbp-64h] BYREF
  int v17; // [rsp+D0h] [rbp-60h] BYREF
  void *v18; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int16 *v22; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v23; // [rsp+100h] [rbp-30h] BYREF
  __int16 v24; // [rsp+130h] [rbp+0h] BYREF
  int v25; // [rsp+138h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1C006E048 > 5 )
  {
    v2 = tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL);
    v6 = 0LL;
    if ( v2 )
    {
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 80);
        v18 = *(void **)(v4 + 88);
      }
      else
      {
        v18 = 0LL;
      }
      v7 = *(_DWORD *)(v3 + 60);
      v19 = v6;
      v25 = v7 & 1;
      v10 = *(_DWORD *)(v3 + 56);
      v11 = *(_DWORD *)(v3 + 52);
      v12 = *(_DWORD *)(v3 + 48);
      v20 = *(_QWORD *)(v3 + 40);
      v13 = *(_DWORD *)(v3 + 32);
      v14 = *(_DWORD *)(v3 + 28);
      v15 = *(_DWORD *)(v3 + 24);
      v21 = *(_QWORD *)(v3 + 16);
      v16 = *(_DWORD *)(v3 + 8);
      v9 = v7 >> 1;
      v8 = *(_QWORD *)(v5 + 16);
      v17 = a1;
      v22 = *(unsigned __int16 **)(v8 + 1616);
      v23 = *(_QWORD *)(v8 + 404);
      v24 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v8,
        byte_1C0051970,
        v3,
        v6,
        (__int64)&v24,
        (__int64)&v23,
        &v22,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v21,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v20,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v25,
        (__int64)&v19,
        &v18);
    }
  }
}
