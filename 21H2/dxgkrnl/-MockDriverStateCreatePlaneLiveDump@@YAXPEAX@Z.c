/*
 * XREFs of ?MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z @ 0x1C0318620
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@43555555@Z @ 0x1C0054F1C (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$_ea_1C0054F1C.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

void __fastcall MockDriverStateCreatePlaneLiveDump(int *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+B0h] [rbp-80h] BYREF
  int v8; // [rsp+B4h] [rbp-7Ch] BYREF
  int v9; // [rsp+B8h] [rbp-78h] BYREF
  int v10; // [rsp+BCh] [rbp-74h] BYREF
  int v11; // [rsp+C0h] [rbp-70h] BYREF
  int v12; // [rsp+C4h] [rbp-6Ch] BYREF
  int v13; // [rsp+C8h] [rbp-68h] BYREF
  int v14; // [rsp+CCh] [rbp-64h] BYREF
  int v15; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v16; // [rsp+D8h] [rbp-58h]
  __int64 v17; // [rsp+E0h] [rbp-50h] BYREF
  void *v18; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-38h] BYREF
  _BYTE v21[8]; // [rsp+100h] [rbp-30h] BYREF
  __int64 v22; // [rsp+108h] [rbp-28h]
  char v23; // [rsp+110h] [rbp-20h]
  __int16 v24; // [rsp+150h] [rbp+20h] BYREF
  __int16 v25; // [rsp+158h] [rbp+28h] BYREF
  int v26; // [rsp+160h] [rbp+30h] BYREF
  int IsDebuggerPresent; // [rsp+168h] [rbp+38h] BYREF

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v22 = *(_QWORD *)a1;
    v23 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v1);
    if ( *(_DWORD *)(v1 + 200) == 1 )
    {
      v16 = *(_QWORD *)(v1 + 404);
      if ( (unsigned int)dword_1C012F918 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C012F918, 0x400000020000LL) )
        {
          LOBYTE(v3) = 1;
          v26 = *(unsigned __int8 *)(v1 + 209);
          v20 = 0x1000000LL;
          IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v3);
          v7 = *(_DWORD *)(v1 + 2888);
          v8 = *(unsigned __int8 *)(v1 + 2742);
          v9 = a1[655];
          v10 = a1[654];
          v24 = *(_WORD *)(v1 + 2692);
          v17 = *(_QWORD *)(v1 + 1696);
          v18 = *(void **)(v1 + 1688);
          v11 = *(_DWORD *)(v1 + 428);
          v12 = *(_DWORD *)(v1 + 424);
          v13 = *(_DWORD *)(v1 + 420);
          v14 = *(_DWORD *)(v1 + 416);
          v15 = *(_DWORD *)(v1 + 412);
          v19 = v16;
          v25 = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v4,
            byte_1C0099252,
            v5,
            v6,
            (__int64)&v25,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            &v18,
            (__int64)&v17,
            (__int64)&v24,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8,
            (__int64)&v7,
            (__int64)&IsDebuggerPresent,
            (__int64)&v26);
        }
      }
    }
    if ( v23 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  }
  DxgCreateLiveDumpWithWdLogs(0x193u, 2067LL, 0LL, a1[654], *((_QWORD *)a1 + 328), 1);
}
