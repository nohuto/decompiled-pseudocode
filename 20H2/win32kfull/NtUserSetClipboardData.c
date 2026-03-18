/*
 * XREFs of NtUserSetClipboardData @ 0x1C00154E0
 * Callers:
 *     <none>
 * Callees:
 *     _SetClipboardData @ 0x1C0015CA4 (_SetClipboardData.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002D1A8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     UserGetLastError @ 0x1C012378C (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5718 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5810 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, void *a2, __int64 *a3)
{
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rdi
  __int64 v17; // rax
  int v20; // r8d
  signed int LastError; // eax
  int v23; // eax
  bool v24; // sf
  signed int v25; // eax
  __int64 v26; // rcx
  _DWORD v28[2]; // [rsp+44h] [rbp-134h] BYREF
  _DWORD v29[2]; // [rsp+4Ch] [rbp-12Ch] BYREF
  _DWORD v30[5]; // [rsp+54h] [rbp-124h] BYREF
  _QWORD v31[3]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v32; // [rsp+88h] [rbp-F0h] BYREF
  const char *v33; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v34[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-C8h] BYREF
  const char *v36; // [rsp+B8h] [rbp-C0h] BYREF
  _QWORD v37[3]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-A0h] BYREF
  const char *v39; // [rsp+E0h] [rbp-98h] BYREF
  _QWORD v40[3]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v41; // [rsp+100h] [rbp-78h]
  __int64 v42; // [rsp+108h] [rbp-70h] BYREF
  const char *v43; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v44[3]; // [rsp+118h] [rbp-60h] BYREF
  int v45; // [rsp+198h] [rbp+20h] BYREF

  v41 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v7 = *(_QWORD *)(gptiCurrent + 424LL);
  v8 = v7 + 992;
  v31[1] = v7 + 992;
  v9 = *(_DWORD *)(v7 + 56);
  v31[0] = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v7);
  EtwTraceUiAuditWriteClipboard(v9, v31);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 4;
  else
    v10 = 0;
  if ( v10 )
  {
    EtwTraceUiLimitWriteClipboard(v9, v31);
    if ( (unsigned int)dword_1C032A240 > 5
      && (qword_1C032A250 & 0x400000000000LL) != 0
      && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
    {
      v32 = v8;
      v45 = -2147024891;
      v33 = "RestrictedThread";
      v34[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v11,
        (unsigned int)&unk_1C02F070D,
        0,
        (unsigned int)v34,
        (__int64)&v33,
        (__int64)&v45,
        (__int64)&v32);
    }
    if ( (unsigned int)dword_1C032A3F8 <= 5 )
      goto LABEL_19;
    if ( (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
      v6 = 0;
    if ( !v6 )
      goto LABEL_19;
    v34[1] = v8;
    v34[2] = "RestrictedThread";
LABEL_18:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v11,
      &unk_1C02F06CD);
LABEL_19:
    v13 = 0;
    UserSetLastError(5LL);
    goto LABEL_79;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process() + 884) )
  {
    v15 = gptiCurrent;
    v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
    if ( (!gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1)) && v15 != *(_QWORD *)(v16 + 80) )
    {
      v17 = *(_QWORD *)(v16 + 112);
      if ( !v17 || *(_QWORD *)(v17 + 16) != v15 )
      {
        if ( (unsigned int)dword_1C032A240 > 5
          && (qword_1C032A250 & 0x400000000000LL) != 0
          && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
        {
          v35 = v8;
          v28[0] = -2147024891;
          v36 = "NoForeground";
          v37[0] = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v11,
            (unsigned int)&unk_1C02F070D,
            0,
            (unsigned int)v37,
            (__int64)&v36,
            (__int64)v28,
            (__int64)&v35);
        }
        if ( (unsigned int)dword_1C032A3F8 <= 5 )
          goto LABEL_19;
        if ( (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
          v6 = 0;
        if ( !v6 )
          goto LABEL_19;
        v37[1] = v8;
        v28[1] = -2147024891;
        v37[2] = "NoForeground";
        goto LABEL_18;
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( (unsigned int)dword_1C032A240 > 5
        && (qword_1C032A250 & 0x400000000000LL) != 0
        && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
      {
        v38 = v8;
        v29[0] = -2147024891;
        v39 = "UnsupportedFormatForLowBoxApp";
        v40[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v11,
          (unsigned int)&unk_1C02F070D,
          0,
          (unsigned int)v40,
          (__int64)&v39,
          (__int64)v29,
          (__int64)&v38);
      }
      if ( (unsigned int)dword_1C032A3F8 <= 5 )
        goto LABEL_19;
      if ( (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
        v6 = 0;
      if ( !v6 )
        goto LABEL_19;
      v40[1] = v8;
      v29[1] = -2147024891;
      v40[2] = "UnsupportedFormatForLowBoxApp";
      goto LABEL_18;
    }
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int64 *)MmUserProbeAddress;
  v41 = *a3;
  v13 = SetClipboardData(a1, a2, v41 != 0, HIDWORD(v41) != 0);
  if ( (unsigned int)dword_1C032A240 > 5 )
  {
    v20 = 0;
    if ( (qword_1C032A250 & 0x400000000000LL) != 0 )
    {
      v14 = qword_1C032A258 & 0x400000000000LL;
      if ( (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
      {
        if ( v13 )
        {
          LastError = 0;
        }
        else
        {
          LastError = UserGetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
        }
        v42 = v8;
        v30[0] = LastError;
        v43 = "FunctionExit";
        v44[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v14,
          (unsigned int)&unk_1C02F070D,
          v20,
          (unsigned int)v44,
          (__int64)&v43,
          (__int64)v30,
          (__int64)&v42);
      }
    }
  }
  if ( !v13 )
  {
    v23 = UserGetLastError();
    v24 = v23 < 0;
    if ( v23 > 0 )
      v24 = 1;
    if ( v24 && (unsigned int)dword_1C032A3F8 > 5 )
    {
      if ( (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
        v6 = 0;
      if ( v6 )
      {
        v25 = UserGetLastError();
        if ( v25 > 0 )
          v25 = (unsigned __int16)v25 | 0x80070000;
        v44[1] = v8;
        v30[1] = v25;
        v44[2] = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v26,
          &unk_1C02F06CD);
      }
    }
  }
LABEL_79:
  UserSessionSwitchLeaveCrit(v14);
  return v13;
}
