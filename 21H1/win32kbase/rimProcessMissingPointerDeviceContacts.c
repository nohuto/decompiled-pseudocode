/*
 * XREFs of rimProcessMissingPointerDeviceContacts @ 0x1C0182E0C
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01804E8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C017D560 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017F558 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0180060 (WPP_RECORDER_SF_dD.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01825FC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018655C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C018693C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0186B1C (RIMCmIsContactDeliveringPointerData.c)
 */

_UNKNOWN **__fastcall rimProcessMissingPointerDeviceContacts(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  int v11; // edx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  _DWORD *v15; // rbx
  int v16; // edx
  int v17; // r8d
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // r9d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // r8
  __int64 v25; // r9
  _WORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _WORD *v29; // rcx
  _UNKNOWN **result; // rax
  int v31; // [rsp+20h] [rbp-89h]
  char v32; // [rsp+60h] [rbp-49h] BYREF
  char v33; // [rsp+61h] [rbp-48h] BYREF
  __int16 v34; // [rsp+62h] [rbp-47h] BYREF
  __int16 v35; // [rsp+64h] [rbp-45h] BYREF
  __int16 v36; // [rsp+66h] [rbp-43h] BYREF
  __int16 v37; // [rsp+68h] [rbp-41h] BYREF
  __int16 v38; // [rsp+6Ah] [rbp-3Fh] BYREF
  __int16 v39; // [rsp+6Ch] [rbp-3Dh] BYREF
  int v40; // [rsp+70h] [rbp-39h] BYREF
  int v41; // [rsp+74h] [rbp-35h] BYREF
  int v42; // [rsp+78h] [rbp-31h] BYREF
  int v43; // [rsp+7Ch] [rbp-2Dh] BYREF
  __int64 v44; // [rsp+80h] [rbp-29h] BYREF
  __int64 v45; // [rsp+88h] [rbp-21h] BYREF
  __int128 v46; // [rsp+90h] [rbp-19h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-9h]
  __int128 v48; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v49; // [rsp+B8h] [rbp+Fh]
  _BYTE v50[32]; // [rsp+C0h] [rbp+17h] BYREF
  char v51; // [rsp+118h] [rbp+6Fh] BYREF
  char v52; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 480);
  v6 = a2;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 27, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  active = RIMCmActiveContactsBeginNoButton(&v48, v3);
  v9 = *(_QWORD *)(active + 16);
  v46 = *(_OWORD *)active;
  v47 = v9;
  while ( 1 )
  {
    v10 = RIMCmActiveContactsEnd(v50, v3);
    v12 = *(_OWORD *)v10;
    v13 = *(_QWORD *)(v10 + 16);
    v14 = *(_QWORD *)v10;
    v49 = v13;
    v48 = v12;
    if ( (_QWORD)v46 == v14 && DWORD2(v46) == DWORD2(v48) && v47 == v49 )
      break;
    v15 = (_DWORD *)(v47 - 16);
    if ( (*(_DWORD *)(v47 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v46);
    v17 = v15[580];
    if ( (v15[585] & 2) != 0 )
    {
      if ( v17 )
      {
        if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
        {
          v29 = *(_WORD **)(v6 + 464);
          v45 = 0x1000000LL;
          v42 = v7 - v15[581];
          v32 = 0;
          v33 = 1;
          v43 = v27;
          v37 = v29[57];
          v38 = v29[56];
          v39 = v29[55];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (__int64)v29,
            byte_1C021DB49,
            v27,
            v28,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v45);
        }
        v15[580] = 0;
        v15[581] = 0;
      }
    }
    else
    {
      v18 = v15[11];
      v15[580] = v17 + 1;
      v15[581] = v18;
      v19 = *(_DWORD *)(v3 + 744) + v18;
      if ( (unsigned int)v7 > v19 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v20 = 28;
        goto LABEL_16;
      }
      if ( a3 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v20 = 29;
LABEL_16:
        WPP_RECORDER_SF_dD(v19, v16, v17, v20, v31, *v15, v15[665]);
LABEL_17:
        if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v15) )
        {
          RIMInsertSimulatedContactEndStateInFrame(
            a1,
            v6,
            (__int64)v15,
            *(_QWORD *)(v3 + 816),
            *(_DWORD *)(v3 + 788),
            1);
          v15[585] |= 4u;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(v22, v21, v23, 30, v31, *v15, v15[665]);
          RIMCmDeactivateContact(v3, v15);
        }
        if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
        {
          v26 = *(_WORD **)(v6 + 464);
          v44 = 0x1000000LL;
          v40 = v7 - v15[581];
          v41 = v15[580];
          v51 = 0;
          v52 = 0;
          v34 = v26[57];
          v35 = v26[56];
          v36 = v26[55];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (__int64)v26,
            byte_1C021DB49,
            v24,
            v25,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v52,
            (__int64)&v51,
            (__int64)&v44);
        }
      }
      else if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v15) )
      {
        rimInsertSimulatedContactKeepAliveStateInFrame(
          a1,
          v6,
          (__int64)v15,
          *(_QWORD *)(v3 + 816),
          *(_DWORD *)(v3 + 788));
      }
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          v11,
                          1,
                          31,
                          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  return result;
}
