/*
 * XREFs of NtUserSetClipboardData @ 0x1C0058E90
 * Callers:
 *     <none>
 * Callees:
 *     UserGetLastError @ 0x1C00488A4 (UserGetLastError.c)
 *     _SetClipboardData @ 0x1C0059654 (_SetClipboardData.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011CA9C (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6588 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6680 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, void *a2, __int64 *a3)
{
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rdi
  __int64 v20; // rax
  int LastError; // eax
  int v25; // eax
  bool v26; // sf
  int v27; // eax
  __int64 v28; // rcx
  _DWORD v30[2]; // [rsp+44h] [rbp-134h] BYREF
  _DWORD v31[2]; // [rsp+4Ch] [rbp-12Ch] BYREF
  _DWORD v32[5]; // [rsp+54h] [rbp-124h] BYREF
  _QWORD v33[3]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v34; // [rsp+88h] [rbp-F0h] BYREF
  const char *v35; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v36[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-C8h] BYREF
  const char *v38; // [rsp+B8h] [rbp-C0h] BYREF
  _QWORD v39[3]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-A0h] BYREF
  const char *v41; // [rsp+E0h] [rbp-98h] BYREF
  _QWORD v42[3]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v43; // [rsp+100h] [rbp-78h]
  __int64 v44; // [rsp+108h] [rbp-70h] BYREF
  const char *v45; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v46[3]; // [rsp+118h] [rbp-60h] BYREF
  int v47; // [rsp+198h] [rbp+20h] BYREF

  v43 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  v8 = v7 + 992;
  v33[1] = v7 + 992;
  v9 = *(_DWORD *)(v7 + 56);
  v33[0] = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v7);
  EtwTraceUiAuditWriteClipboard(v9, v33);
  v10 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 768LL);
    v11 = *(_DWORD *)(v10 + 24) & 4;
  }
  else
  {
    v11 = 0;
  }
  if ( v11 )
  {
    EtwTraceUiLimitWriteClipboard(v9, v33);
    if ( (unsigned int)dword_1C032B240 > 5
      && (qword_1C032B250 & 0x400000000000LL) != 0
      && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
    {
      v34 = v8;
      v47 = -2147024891;
      v35 = "RestrictedThread";
      v36[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v12,
        (unsigned int)&unk_1C02F10FD,
        0,
        (unsigned int)v36,
        (__int64)&v35,
        (__int64)&v47,
        (__int64)&v34);
    }
    if ( (unsigned int)dword_1C032B3F8 <= 5 )
      goto LABEL_19;
    if ( (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
      v6 = 0;
    if ( !v6 )
      goto LABEL_19;
    v36[1] = v8;
    v36[2] = "RestrictedThread";
LABEL_18:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v12,
      &unk_1C02F10BD);
LABEL_19:
    v14 = 0;
    UserSetLastError(5LL);
    goto LABEL_79;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 884) )
  {
    v18 = gptiCurrent;
    v19 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL);
    if ( (!gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1)) && v18 != *(_QWORD *)(v19 + 80) )
    {
      v20 = *(_QWORD *)(v19 + 112);
      if ( !v20 || *(_QWORD *)(v20 + 16) != v18 )
      {
        if ( (unsigned int)dword_1C032B240 > 5
          && (qword_1C032B250 & 0x400000000000LL) != 0
          && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
        {
          v37 = v8;
          v30[0] = -2147024891;
          v38 = "NoForeground";
          v39[0] = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v12,
            (unsigned int)&unk_1C02F10FD,
            0,
            (unsigned int)v39,
            (__int64)&v38,
            (__int64)v30,
            (__int64)&v37);
        }
        if ( (unsigned int)dword_1C032B3F8 <= 5 )
          goto LABEL_19;
        if ( (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
          v6 = 0;
        if ( !v6 )
          goto LABEL_19;
        v39[1] = v8;
        v30[1] = -2147024891;
        v39[2] = "NoForeground";
        goto LABEL_18;
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( (unsigned int)dword_1C032B240 > 5
        && (qword_1C032B250 & 0x400000000000LL) != 0
        && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        v40 = v8;
        v31[0] = -2147024891;
        v41 = "UnsupportedFormatForLowBoxApp";
        v42[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v12,
          (unsigned int)&unk_1C02F10FD,
          0,
          (unsigned int)v42,
          (__int64)&v41,
          (__int64)v31,
          (__int64)&v40);
      }
      if ( (unsigned int)dword_1C032B3F8 <= 5 )
        goto LABEL_19;
      if ( (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
        v6 = 0;
      if ( !v6 )
        goto LABEL_19;
      v42[1] = v8;
      v31[1] = -2147024891;
      v42[2] = "UnsupportedFormatForLowBoxApp";
      goto LABEL_18;
    }
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int64 *)MmUserProbeAddress;
  v43 = *a3;
  v14 = SetClipboardData(a1, a2, v43 != 0, HIDWORD(v43) != 0);
  if ( (unsigned int)dword_1C032B240 > 5 )
  {
    v17 = 0x400000000000LL;
    if ( (qword_1C032B250 & 0x400000000000LL) != 0 )
    {
      v16 = qword_1C032B258 & 0x400000000000LL;
      if ( (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        if ( v14 )
        {
          LastError = 0;
        }
        else
        {
          LastError = UserGetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
        }
        v44 = v8;
        v32[0] = LastError;
        v45 = "FunctionExit";
        v46[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v16,
          (unsigned int)&unk_1C02F10FD,
          v17,
          (unsigned int)v46,
          (__int64)&v45,
          (__int64)v32,
          (__int64)&v44);
      }
    }
  }
  if ( !v14 )
  {
    v25 = UserGetLastError();
    v26 = v25 < 0;
    if ( v25 > 0 )
      v26 = 1;
    if ( v26 && (unsigned int)dword_1C032B3F8 > 5 )
    {
      if ( (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
        v6 = 0;
      if ( v6 )
      {
        v27 = UserGetLastError();
        if ( v27 > 0 )
          v27 = (unsigned __int16)v27 | 0x80070000;
        v46[1] = v8;
        v32[1] = v27;
        v46[2] = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v28,
          &unk_1C02F10BD);
      }
    }
  }
LABEL_79:
  UserSessionSwitchLeaveCrit(v16, v15, v17);
  return v14;
}
