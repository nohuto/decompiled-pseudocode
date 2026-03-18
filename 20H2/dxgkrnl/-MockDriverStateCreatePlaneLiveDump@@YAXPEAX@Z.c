/*
 * XREFs of ?MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z @ 0x1C02BD7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@43555555@Z @ 0x1C004D330 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$_ea_1C004D330.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021FEF0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

void __fastcall MockDriverStateCreatePlaneLiveDump(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // ebx
  unsigned __int8 IsDebuggerPresent; // al
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+B0h] [rbp-80h] BYREF
  int v9; // [rsp+B4h] [rbp-7Ch] BYREF
  int v10; // [rsp+B8h] [rbp-78h] BYREF
  int v11; // [rsp+BCh] [rbp-74h] BYREF
  int v12; // [rsp+C0h] [rbp-70h] BYREF
  int v13; // [rsp+C4h] [rbp-6Ch] BYREF
  int v14; // [rsp+C8h] [rbp-68h] BYREF
  int v15; // [rsp+CCh] [rbp-64h] BYREF
  int v16; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-58h]
  __int64 v18; // [rsp+E0h] [rbp-50h] BYREF
  void *v19; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-38h] BYREF
  _BYTE v22[8]; // [rsp+100h] [rbp-30h] BYREF
  __int64 v23; // [rsp+108h] [rbp-28h]
  char v24; // [rsp+110h] [rbp-20h]
  __int16 v25; // [rsp+150h] [rbp+20h] BYREF
  unsigned __int64 v26; // [rsp+158h] [rbp+28h] BYREF
  int v27; // [rsp+160h] [rbp+30h] BYREF
  int v28; // [rsp+168h] [rbp+38h] BYREF

  if ( a1 )
  {
    v2 = a1[320];
    if ( v2 )
    {
      v23 = a1[320];
      v24 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v2);
      if ( *(_DWORD *)(v2 + 200) == 1 )
      {
        v17 = *(_QWORD *)(v2 + 316);
        if ( (unsigned int)dword_1C00AFA90 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C00AFA90, 0x400000020000LL) )
          {
            v4 = *(unsigned __int8 *)(v2 + 209);
            LOBYTE(v3) = 1;
            IsDebuggerPresent = WdIsDebuggerPresent(v3);
            v27 = v4;
            v8 = *(_DWORD *)(v2 + 2792);
            v9 = *(unsigned __int8 *)(v2 + 2646);
            v10 = *((_DWORD *)a1 + 653);
            v11 = *((_DWORD *)a1 + 652);
            v25 = *(_WORD *)(v2 + 2596);
            v18 = *(_QWORD *)(v2 + 1600);
            v19 = *(void **)(v2 + 1592);
            v12 = *(_DWORD *)(v2 + 340);
            v13 = *(_DWORD *)(v2 + 336);
            v14 = *(_DWORD *)(v2 + 332);
            v15 = *(_DWORD *)(v2 + 328);
            v16 = *(_DWORD *)(v2 + 324);
            v20 = v17;
            v28 = IsDebuggerPresent;
            v21 = 0x1000000LL;
            LOWORD(v26) = 1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              IsDebuggerPresent,
              byte_1C007F406,
              v6,
              v7,
              (__int64)&v26,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v16,
              (__int64)&v15,
              (__int64)&v14,
              (__int64)&v13,
              (__int64)&v12,
              &v19,
              (__int64)&v18,
              (__int64)&v25,
              (__int64)&v11,
              (__int64)&v10,
              (__int64)&v9,
              (__int64)&v8,
              (__int64)&v28,
              (__int64)&v27);
          }
        }
      }
      if ( v24 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    }
  }
  DxgCreateLiveDumpWithWdLogs(0x193u, 2067LL, 0LL, 0LL, 0LL, 1);
}
