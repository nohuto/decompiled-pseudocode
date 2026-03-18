/*
 * XREFs of NtUserOpenClipboard @ 0x1C0059BD0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetLastError @ 0x1C00488A4 (UserGetLastError.c)
 *     _OpenClipboard @ 0x1C005A0D8 (_OpenClipboard.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011CA9C (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6588 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6680 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r8
  ULONG64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // r11
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rcx
  int LastError; // eax
  int v26; // eax
  bool v27; // sf
  int v28; // eax
  __int64 v29; // rcx
  _DWORD v30[2]; // [rsp+40h] [rbp-138h] BYREF
  _DWORD v31[2]; // [rsp+48h] [rbp-130h] BYREF
  _DWORD v32[2]; // [rsp+58h] [rbp-120h] BYREF
  __int64 v33; // [rsp+60h] [rbp-118h]
  __int64 v34; // [rsp+68h] [rbp-110h] BYREF
  const char *v35; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v36[3]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v37; // [rsp+90h] [rbp-E8h] BYREF
  const char *v38; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v39[3]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-C0h] BYREF
  const char *v41; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD v42[3]; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+108h] [rbp-70h] BYREF
  const char *v44; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v45[3]; // [rsp+118h] [rbp-60h] BYREF
  __int128 v46; // [rsp+130h] [rbp-48h] BYREF
  __int64 v47; // [rsp+140h] [rbp-38h]
  int v48; // [rsp+180h] [rbp+8h] BYREF
  int v49; // [rsp+190h] [rbp+18h] BYREF
  int v50; // [rsp+198h] [rbp+20h]

  v46 = 0LL;
  v47 = 0LL;
  v48 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 && (a1 = ValidateHwnd(a1)) == 0 )
  {
    v13 = 0;
  }
  else
  {
    v7 = gptiCurrent;
    v8 = *(_QWORD *)(gptiCurrent + 416LL) + 992LL;
    v33 = v8;
    if ( gbLockScreenActive || *(PVOID *)(gptiCurrent + 448LL) == grpdeskLogon )
    {
      if ( (unsigned int)dword_1C032B240 > 5
        && (qword_1C032B250 & 0x400000000000LL) != 0
        && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        v43 = v8;
        v32[0] = -2147024891;
        v44 = "OnLockscreen";
        v45[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          gptiCurrent,
          (unsigned int)&unk_1C02F0FE8,
          v4,
          (unsigned int)v45,
          (__int64)&v44,
          (__int64)v32,
          (__int64)&v43);
      }
      if ( (unsigned int)dword_1C032B3F8 <= 5 || (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
        goto LABEL_65;
      v45[1] = v8;
      v32[1] = -2147024891;
      v45[2] = "OnLockscreen";
      goto LABEL_64;
    }
    if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 884) )
    {
      v18 = gptiCurrent;
      v19 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL);
      if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
      {
        v20 = *(_QWORD *)(v19 + 112);
        if ( !v20 || *(_QWORD *)(v20 + 16) != v18 )
        {
          if ( (unsigned int)dword_1C032B240 > 5
            && (qword_1C032B250 & 0x400000000000LL) != 0
            && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
          {
            v34 = v8;
            v49 = -2147024891;
            v35 = "NoForeground";
            v36[0] = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v7,
              (unsigned int)&unk_1C02F0FE8,
              v9,
              (unsigned int)v36,
              (__int64)&v35,
              (__int64)&v49,
              (__int64)&v34);
          }
          if ( (unsigned int)dword_1C032B3F8 <= 5
            || (qword_1C032B408 & 1) == 0
            || (qword_1C032B410 & 1) != qword_1C032B410 )
          {
            goto LABEL_65;
          }
          v36[1] = v8;
          v50 = -2147024891;
          v36[2] = "NoForeground";
LABEL_64:
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v7,
            &unk_1C02F0FAB);
LABEL_65:
          v24 = 5LL;
LABEL_66:
          v13 = 0;
          UserSetLastError(v24);
          goto LABEL_15;
        }
      }
    }
    if ( a1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      v11 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(*(_QWORD *)(v11 + 416) + 664LL) != *(_QWORD *)(CurrentProcessWin32Process + 664) )
      {
        if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v11) + 664) )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
          if ( *(_QWORD *)(v21 + 664)
            || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v21) + 664) + 64LL) & 4) != 0 )
          {
            UserSetLastError(87LL);
            if ( (unsigned int)dword_1C032B240 > 5
              && (qword_1C032B250 & 0x400000000000LL) != 0
              && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
            {
              v37 = v8;
              v30[0] = -2147024809;
              v38 = "InvalidParameter";
              v39[0] = 1LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v22,
                (unsigned int)&unk_1C02F0FE8,
                v23,
                (unsigned int)v39,
                (__int64)&v38,
                (__int64)v30,
                (__int64)&v37);
            }
            if ( (unsigned int)dword_1C032B3F8 > 5
              && (qword_1C032B408 & 1) != 0
              && (qword_1C032B410 & 1) == qword_1C032B410 )
            {
              v39[1] = v8;
              v30[1] = -2147024809;
              v39[2] = "InvalidParameter";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v22,
                &unk_1C02F0FAB);
            }
            v24 = 0LL;
            goto LABEL_66;
          }
        }
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v46 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v46;
    *((_QWORD *)&v46 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v13 = OpenClipboard(a1, &v48);
    ThreadUnlock1(v15, v14, v16);
    v6 = MmUserProbeAddress;
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v48;
    if ( (unsigned int)dword_1C032B240 > 5 )
    {
      v5 = 0x400000000000LL;
      if ( (qword_1C032B250 & 0x400000000000LL) != 0 && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
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
        v40 = v8;
        v31[0] = LastError;
        v41 = "FunctionExit";
        v42[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v6,
          (unsigned int)&unk_1C02F0FE8,
          v4,
          (unsigned int)v42,
          (__int64)&v41,
          (__int64)v31,
          (__int64)&v40);
      }
    }
    if ( !v13 )
    {
      v26 = UserGetLastError();
      v27 = v26 < 0;
      if ( v26 > 0 )
        v27 = 1;
      if ( v27
        && (unsigned int)dword_1C032B3F8 > 5
        && (qword_1C032B408 & 1) != 0
        && (qword_1C032B410 & 1) == qword_1C032B410 )
      {
        v28 = UserGetLastError();
        if ( v28 > 0 )
          v28 = (unsigned __int16)v28 | 0x80070000;
        v42[1] = v8;
        v31[1] = v28;
        v42[2] = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v29,
          &unk_1C02F0FAB);
      }
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5, v4);
  return v13;
}
