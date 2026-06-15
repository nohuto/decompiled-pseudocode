/*
 * XREFs of ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180121D08
 * Callers:
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005ABAC (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55555555555355@Z @ 0x180121E84 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@.c)
 */

void __fastcall LogAecEffectPolicy<8>(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int *v6; // r10
  __int64 v7; // r11
  int v8; // [rsp+B0h] [rbp+7h] BYREF
  int v9; // [rsp+B4h] [rbp+Bh] BYREF
  int v10; // [rsp+B8h] [rbp+Fh] BYREF
  int v11; // [rsp+BCh] [rbp+13h] BYREF
  int v12; // [rsp+C0h] [rbp+17h] BYREF
  int v13; // [rsp+C4h] [rbp+1Bh] BYREF
  int v14; // [rsp+C8h] [rbp+1Fh] BYREF
  int v15; // [rsp+CCh] [rbp+23h] BYREF
  int v16; // [rsp+D0h] [rbp+27h] BYREF
  int v17; // [rsp+D4h] [rbp+2Bh] BYREF
  int v18; // [rsp+D8h] [rbp+2Fh] BYREF
  int v19; // [rsp+DCh] [rbp+33h] BYREF
  int v20; // [rsp+E0h] [rbp+37h] BYREF
  int v21; // [rsp+E4h] [rbp+3Bh] BYREF
  _DWORD *v22; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+4Fh] BYREF

  if ( (unsigned int)dword_18019C448 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_18019C448, 8LL) )
    {
      v8 = v6[16];
      v9 = v6[15];
      v22 = v6 + 11;
      v10 = v6[10];
      v11 = v6[9];
      v12 = v6[6];
      v13 = v6[7];
      v14 = v6[8];
      v15 = v6[5];
      v16 = v6[4];
      v17 = v6[3];
      v18 = v6[2];
      v19 = v6[1];
      v20 = *v6;
      v21 = v5;
      v23 = a2;
      v24 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        (unsigned int)&unk_18016A041,
        v4,
        v5,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v22,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
