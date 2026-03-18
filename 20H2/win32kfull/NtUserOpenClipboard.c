/*
 * XREFs of NtUserOpenClipboard @ 0x1C0016220
 * Callers:
 *     <none>
 * Callees:
 *     _OpenClipboard @ 0x1C0016728 (_OpenClipboard.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002D1A8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     UserGetLastError @ 0x1C012378C (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5718 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5810 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  int v4; // r8d
  ULONG64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // r8d
  __int64 ThreadWin32Thread; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r8d
  __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rcx
  signed int LastError; // eax
  int v23; // eax
  bool v24; // sf
  signed int v25; // eax
  __int64 v26; // rcx
  _DWORD v27[2]; // [rsp+40h] [rbp-138h] BYREF
  _DWORD v28[2]; // [rsp+48h] [rbp-130h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp-120h] BYREF
  __int64 v30; // [rsp+60h] [rbp-118h]
  __int64 v31; // [rsp+68h] [rbp-110h] BYREF
  const char *v32; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v33[3]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v34; // [rsp+90h] [rbp-E8h] BYREF
  const char *v35; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v36[3]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-C0h] BYREF
  const char *v38; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD v39[3]; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+108h] [rbp-70h] BYREF
  const char *v41; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v42[3]; // [rsp+118h] [rbp-60h] BYREF
  __int128 v43; // [rsp+130h] [rbp-48h] BYREF
  __int64 v44; // [rsp+140h] [rbp-38h]
  int v45; // [rsp+180h] [rbp+8h] BYREF
  int v46; // [rsp+190h] [rbp+18h] BYREF
  int v47; // [rsp+198h] [rbp+20h]

  v43 = 0LL;
  v44 = 0LL;
  v45 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 && (a1 = ValidateHwnd(a1)) == 0 )
  {
    v10 = 0;
  }
  else
  {
    v6 = gptiCurrent;
    v7 = *(_QWORD *)(gptiCurrent + 424LL) + 992LL;
    v30 = v7;
    if ( gbLockScreenActive || *(PVOID *)(gptiCurrent + 456LL) == grpdeskLogon )
    {
      if ( (unsigned int)dword_1C032A240 > 5
        && (qword_1C032A250 & 0x400000000000LL) != 0
        && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
      {
        v40 = v7;
        v29[0] = -2147024891;
        v41 = "OnLockscreen";
        v42[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          gptiCurrent,
          (unsigned int)&unk_1C02F05F8,
          v4,
          (unsigned int)v42,
          (__int64)&v41,
          (__int64)v29,
          (__int64)&v40);
      }
      if ( (unsigned int)dword_1C032A3F8 <= 5 || (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
        goto LABEL_65;
      v42[1] = v7;
      v29[1] = -2147024891;
      v42[2] = "OnLockscreen";
      goto LABEL_64;
    }
    if ( *(_DWORD *)(PsGetCurrentProcessWin32Process() + 884) )
    {
      v16 = gptiCurrent;
      v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
      if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
      {
        v18 = *(_QWORD *)(v17 + 112);
        if ( !v18 || *(_QWORD *)(v18 + 16) != v16 )
        {
          if ( (unsigned int)dword_1C032A240 > 5
            && (qword_1C032A250 & 0x400000000000LL) != 0
            && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
          {
            v31 = v7;
            v46 = -2147024891;
            v32 = "NoForeground";
            v33[0] = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v6,
              (unsigned int)&unk_1C02F05F8,
              v8,
              (unsigned int)v33,
              (__int64)&v32,
              (__int64)&v46,
              (__int64)&v31);
          }
          if ( (unsigned int)dword_1C032A3F8 <= 5
            || (qword_1C032A408 & 1) == 0
            || (qword_1C032A410 & 1) != qword_1C032A410 )
          {
            goto LABEL_65;
          }
          v33[1] = v7;
          v47 = -2147024891;
          v33[2] = "NoForeground";
LABEL_64:
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v6,
            &unk_1C02F05BB);
LABEL_65:
          v21 = 5LL;
LABEL_66:
          v10 = 0;
          UserSetLastError(v21);
          goto LABEL_15;
        }
      }
    }
    if ( a1
      && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 664LL) != *(_QWORD *)(PsGetCurrentProcessWin32Process()
                                                                                     + 664)
      && *(_QWORD *)(PsGetCurrentProcessWin32Process() + 664)
      && (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 664LL)
       || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process() + 664) + 64LL) & 4) != 0) )
    {
      UserSetLastError(87LL);
      if ( (unsigned int)dword_1C032A240 > 5
        && (qword_1C032A250 & 0x400000000000LL) != 0
        && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
      {
        v34 = v7;
        v27[0] = -2147024809;
        v35 = "InvalidParameter";
        v36[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v19,
          (unsigned int)&unk_1C02F05F8,
          v20,
          (unsigned int)v36,
          (__int64)&v35,
          (__int64)v27,
          (__int64)&v34);
      }
      if ( (unsigned int)dword_1C032A3F8 > 5 && (qword_1C032A408 & 1) != 0 && (qword_1C032A410 & 1) == qword_1C032A410 )
      {
        v36[1] = v7;
        v27[1] = -2147024809;
        v36[2] = "InvalidParameter";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v19,
          &unk_1C02F05BB);
      }
      v21 = 0LL;
      goto LABEL_66;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v43 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v43;
    *((_QWORD *)&v43 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v10 = OpenClipboard(a1, &v45);
    ThreadUnlock1(v12, v11, v13);
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v45;
    if ( (unsigned int)dword_1C032A240 > 5
      && (qword_1C032A250 & 0x400000000000LL) != 0
      && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
    {
      if ( v10 )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      v37 = v7;
      v28[0] = LastError;
      v38 = "FunctionExit";
      v39[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v5,
        (unsigned int)&unk_1C02F05F8,
        v14,
        (unsigned int)v39,
        (__int64)&v38,
        (__int64)v28,
        (__int64)&v37);
    }
    if ( !v10 )
    {
      v23 = UserGetLastError();
      v24 = v23 < 0;
      if ( v23 > 0 )
        v24 = 1;
      if ( v24
        && (unsigned int)dword_1C032A3F8 > 5
        && (qword_1C032A408 & 1) != 0
        && (qword_1C032A410 & 1) == qword_1C032A410 )
      {
        v25 = UserGetLastError();
        if ( v25 > 0 )
          v25 = (unsigned __int16)v25 | 0x80070000;
        v39[1] = v7;
        v28[1] = v25;
        v39[2] = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v26,
          &unk_1C02F05BB);
      }
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v5);
  return v10;
}
