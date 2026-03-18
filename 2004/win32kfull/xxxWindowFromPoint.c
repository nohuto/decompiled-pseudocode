/*
 * XREFs of xxxWindowFromPoint @ 0x1C00B0884
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C00B0250 (NtUserWindowFromPoint.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C00B09BC (xxxDCEWindowHitTest.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00B2E58 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 *     xxxWindowHitTest2 @ 0x1C010B3CC (xxxWindowHitTest2.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E0D80 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33334AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0215274 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlgWri.c)
 */

__int64 __fastcall xxxWindowFromPoint(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 WindowDetails; // rax
  __int128 v16; // xmm1
  int v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int128 v20; // [rsp+80h] [rbp-80h] BYREF
  __int128 v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-60h]
  __int128 v23; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v25[3]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v26[72]; // [rsp+D8h] [rbp-28h] BYREF
  int v27; // [rsp+134h] [rbp+34h]
  __int64 v28; // [rsp+138h] [rbp+38h] BYREF
  __int64 v29; // [rsp+140h] [rbp+40h] BYREF
  __int64 v30; // [rsp+148h] [rbp+48h] BYREF

  v27 = HIDWORD(a1);
  v25[2] = 0LL;
  result = GetThreadDesktopWindow(0LL);
  v3 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v25[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v25;
    v25[1] = v3;
    HMLockObject(v3);
    if ( (unsigned int)IsWindowDesktopComposed(v3) )
    {
      *(_QWORD *)&v21 = 0LL;
      v5 = *(_QWORD *)(v3 + 112);
      v6 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v20 = *(_QWORD *)(v6 + 408);
      *(_QWORD *)(v6 + 408) = &v20;
      *((_QWORD *)&v20 + 1) = v5;
      if ( v5 )
        HMLockObject(v5);
      v7 = xxxDCEWindowHitTest(*(_QWORD *)(v3 + 112), 0, 0, 0, a1, 0LL, 5);
      ThreadUnlock1(v9, v8, v10);
    }
    else
    {
      v7 = xxxWindowHitTest2(v3);
    }
    ThreadUnlock1(v12, v11, v13);
    v14 = HMValidateHandleNoSecure(v7, 1);
    if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
    {
      WindowDetails = InputTraceLogging::GetWindowDetails(v26, v14);
      v16 = *(_OWORD *)(WindowDetails + 16);
      v20 = *(_OWORD *)WindowDetails;
      v22 = *(_QWORD *)(WindowDetails + 32);
      v21 = v16;
      if ( (unsigned int)dword_1C0330B30 > 4 && (qword_1C0330B40 & 2) != 0 && (qword_1C0330B48 & 2) == qword_1C0330B48 )
      {
        v23 = v20;
        LODWORD(v28) = HIDWORD(v22);
        LODWORD(v29) = v22;
        LODWORD(v30) = HIDWORD(v21);
        v17 = DWORD2(v21);
        v24 = v21;
        v18 = v27;
        LODWORD(v19) = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (int)&dword_1C0330B30,
          (int)&dword_1C02F12B5,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v24,
          (__int64)&v17,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v23 + 8,
          (__int64)&v23);
      }
    }
    return v14;
  }
  return result;
}
