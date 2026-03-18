/*
 * XREFs of ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x1C02BD0F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@4355555555555@Z @ 0x1C00430BC (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVa_ea_1C00430BC.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

void __fastcall ProcessDeadlockThread(unsigned __int8 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int IsDebuggerPresent; // [rsp+E0h] [rbp-80h] BYREF
  int v9; // [rsp+E4h] [rbp-7Ch] BYREF
  int v10; // [rsp+E8h] [rbp-78h] BYREF
  int v11; // [rsp+ECh] [rbp-74h] BYREF
  int v12; // [rsp+F0h] [rbp-70h] BYREF
  int v13; // [rsp+F4h] [rbp-6Ch] BYREF
  int v14; // [rsp+F8h] [rbp-68h] BYREF
  int v15; // [rsp+FCh] [rbp-64h] BYREF
  int v16; // [rsp+100h] [rbp-60h] BYREF
  int v17; // [rsp+104h] [rbp-5Ch] BYREF
  int v18; // [rsp+108h] [rbp-58h] BYREF
  int v19; // [rsp+10Ch] [rbp-54h] BYREF
  int v20; // [rsp+110h] [rbp-50h] BYREF
  int v21; // [rsp+114h] [rbp-4Ch] BYREF
  __int64 v22; // [rsp+118h] [rbp-48h]
  __int64 v23; // [rsp+120h] [rbp-40h] BYREF
  void *v24; // [rsp+128h] [rbp-38h] BYREF
  __int64 v25; // [rsp+130h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+138h] [rbp-28h] BYREF
  __int64 v27[4]; // [rsp+140h] [rbp-20h] BYREF
  __int16 v28; // [rsp+170h] [rbp+10h] BYREF
  __int16 v29; // [rsp+178h] [rbp+18h] BYREF
  int v30; // [rsp+180h] [rbp+20h] BYREF
  int v31; // [rsp+188h] [rbp+28h] BYREF

  if ( a1 )
    v2 = *((_QWORD *)a1 + 3);
  else
    v2 = 0LL;
  DxgCreateLiveDumpWithWdLogs(403LL, 2064LL);
  if ( v2 )
  {
    v22 = *(_QWORD *)(v2 + 404);
    if ( (unsigned int)dword_1C012F918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C012F918, 0x400000004000LL) )
      {
        LOBYTE(v3) = 1;
        v30 = a1[240];
        v31 = v4;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v3);
        v9 = *(_DWORD *)(v2 + 2888);
        v10 = *(unsigned __int8 *)(v2 + 2742);
        v11 = *(_DWORD *)(v2 + 4592);
        v12 = *(_DWORD *)(v2 + 4588);
        v13 = *(unsigned __int8 *)(v2 + 209);
        v14 = *(unsigned __int8 *)(v2 + 2636);
        v15 = *(unsigned __int8 *)(v2 + 2631);
        v16 = *(_DWORD *)(v2 + 288);
        v28 = *(_WORD *)(v2 + 2692);
        v23 = *(_QWORD *)(v2 + 1696);
        v24 = *(void **)(v2 + 1688);
        v17 = *(_DWORD *)(v2 + 428);
        v18 = *(_DWORD *)(v2 + 424);
        v19 = *(_DWORD *)(v2 + 420);
        v20 = *(_DWORD *)(v2 + 416);
        v21 = *(_DWORD *)(v2 + 412);
        v25 = v22;
        v26 = DXGDEADLOCK_TRACKER::DeadlockCounter;
        v29 = 13;
        v27[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v5,
          byte_1C0096C61,
          v6,
          v7,
          (__int64)&v29,
          (__int64)v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          &v24,
          (__int64)&v23,
          (__int64)&v28,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&IsDebuggerPresent,
          (__int64)&v31,
          (__int64)&v30);
      }
    }
  }
  if ( a1 )
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
}
