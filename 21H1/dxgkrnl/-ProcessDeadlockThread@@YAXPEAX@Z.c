/*
 * XREFs of ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x1C020A820
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555555555@Z @ 0x1C0034E34 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVa_ea_1C0034E34.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

void __fastcall ProcessDeadlockThread(_QWORD *a1)
{
  unsigned __int64 v1; // r9
  int LiveDumpWithWdLogs; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+D0h] [rbp-80h] BYREF
  int v9; // [rsp+D4h] [rbp-7Ch] BYREF
  int v10; // [rsp+D8h] [rbp-78h] BYREF
  int v11; // [rsp+DCh] [rbp-74h] BYREF
  int v12; // [rsp+E0h] [rbp-70h] BYREF
  int v13; // [rsp+E4h] [rbp-6Ch] BYREF
  int v14; // [rsp+E8h] [rbp-68h] BYREF
  int v15; // [rsp+ECh] [rbp-64h] BYREF
  int v16; // [rsp+F0h] [rbp-60h] BYREF
  int v17; // [rsp+F4h] [rbp-5Ch] BYREF
  int v18; // [rsp+F8h] [rbp-58h] BYREF
  int v19; // [rsp+FCh] [rbp-54h] BYREF
  int v20; // [rsp+100h] [rbp-50h] BYREF
  __int64 v21; // [rsp+108h] [rbp-48h]
  __int64 v22; // [rsp+110h] [rbp-40h] BYREF
  void *v23; // [rsp+118h] [rbp-38h] BYREF
  __int64 v24; // [rsp+120h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+128h] [rbp-28h] BYREF
  __int64 v26[4]; // [rsp+130h] [rbp-20h] BYREF
  __int16 v27; // [rsp+160h] [rbp+10h] BYREF
  __int16 v28; // [rsp+168h] [rbp+18h] BYREF
  int v29; // [rsp+170h] [rbp+20h] BYREF
  int IsDebuggerPresent; // [rsp+178h] [rbp+28h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    v1 = a1[21];
    if ( v1 )
      v1 = *(_QWORD *)(v1 + 48);
  }
  LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(
                         0x193u,
                         0x810uLL,
                         (unsigned __int64)a1,
                         v1,
                         DXGDEADLOCK_TRACKER::DeadlockCounter,
                         1);
  if ( a1 )
  {
    v21 = *(_QWORD *)((char *)a1 + 316);
    if ( (unsigned int)dword_1C00AEA90 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00AEA90, 0x400000004000LL) )
      {
        LOBYTE(v4) = 1;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v4);
        v8 = *((_DWORD *)a1 + 692);
        v9 = *((unsigned __int8 *)a1 + 2622);
        v10 = *((_DWORD *)a1 + 1110);
        v11 = *((_DWORD *)a1 + 1109);
        v12 = *((unsigned __int8 *)a1 + 209);
        v13 = *((unsigned __int8 *)a1 + 2516);
        v14 = *((unsigned __int8 *)a1 + 2511);
        v15 = *((_DWORD *)a1 + 70);
        v27 = *((_WORD *)a1 + 1286);
        v22 = a1[197];
        v23 = (void *)a1[196];
        v16 = *((_DWORD *)a1 + 85);
        v17 = *((_DWORD *)a1 + 84);
        v18 = *((_DWORD *)a1 + 83);
        v19 = *((_DWORD *)a1 + 82);
        v20 = *((_DWORD *)a1 + 81);
        v24 = v21;
        v25 = DXGDEADLOCK_TRACKER::DeadlockCounter;
        v28 = 12;
        v29 = LiveDumpWithWdLogs;
        v26[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v5,
          byte_1C007BA1E,
          v6,
          v7,
          (__int64)&v28,
          (__int64)v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          &v23,
          (__int64)&v22,
          (__int64)&v27,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v8,
          (__int64)&IsDebuggerPresent,
          (__int64)&v29);
      }
    }
  }
}
