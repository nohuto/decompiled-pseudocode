/*
 * XREFs of ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005B24C
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180059C28 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator() @ 0x180119C64 (_lambda_1ddcc36e30584de0b30e6aa0e02df019_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800B7A3C (_tlgKeywordOn.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180122D28 (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55555555555355@Z @ 0x180122EA4 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@.c)
 */

void __fastcall LogAecEffectPolicyInsertion(
        const struct _AEC_POLICY_RESULTS *a1,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        __int64 a4)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int *v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+B0h] [rbp-80h] BYREF
  int v11; // [rsp+B4h] [rbp-7Ch] BYREF
  int v12; // [rsp+B8h] [rbp-78h] BYREF
  int v13; // [rsp+BCh] [rbp-74h] BYREF
  int v14; // [rsp+C0h] [rbp-70h] BYREF
  int v15; // [rsp+C4h] [rbp-6Ch] BYREF
  int v16; // [rsp+C8h] [rbp-68h] BYREF
  int v17; // [rsp+CCh] [rbp-64h] BYREF
  int v18; // [rsp+D0h] [rbp-60h] BYREF
  int v19; // [rsp+D4h] [rbp-5Ch] BYREF
  int v20; // [rsp+D8h] [rbp-58h] BYREF
  int v21; // [rsp+DCh] [rbp-54h] BYREF
  int v22; // [rsp+E0h] [rbp-50h] BYREF
  _DWORD *v23; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-40h] BYREF
  __int128 v25; // [rsp+100h] [rbp-30h] BYREF
  __int128 v26; // [rsp+110h] [rbp-20h] BYREF
  int v27; // [rsp+130h] [rbp+0h] BYREF

  v4 = *((_DWORD *)a1 + 15);
  if ( v4 == 4 )
  {
    v25 = (__int128)*a3;
    LogAecEffectPolicy<8>(a1, a2, &v25, a4);
  }
  else
  {
    v26 = (__int128)*a3;
    if ( (unsigned int)dword_18019D478 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_18019D478, 0x400000000008LL) )
      {
        v27 = v8[16];
        v23 = v8 + 11;
        v11 = v8[10];
        v12 = v8[9];
        v13 = v8[6];
        v14 = v8[7];
        v15 = v8[8];
        v16 = v8[5];
        v17 = v8[4];
        v18 = v8[3];
        v19 = v8[2];
        v20 = v8[1];
        v21 = *v8;
        *(_QWORD *)&v25 = &v26;
        v10 = v4;
        v22 = v7;
        v24 = v9;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v5,
          (unsigned int)&unk_18016B117,
          v6,
          v7,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v22,
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
          (__int64)&v23,
          (__int64)&v10,
          (__int64)&v27);
      }
    }
  }
}
