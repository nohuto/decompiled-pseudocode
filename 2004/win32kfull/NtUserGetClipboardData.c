/*
 * XREFs of NtUserGetClipboardData @ 0x1C0057340
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00305BC (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserGetLastError @ 0x1C00488A4 (UserGetLastError.c)
 *     xxxGetClipboardData @ 0x1C0057B98 (xxxGetClipboardData.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ @ 0x1C0158FE8 (-Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6588 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6680 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  char v4; // di
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagWINDOWSTATION *v9; // r15
  __int64 ClipboardData; // rbx
  int v12; // eax
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v17; // rbx
  __int64 v18; // rbx
  int LastError; // eax
  int v21; // eax
  bool v22; // sf
  int v23; // eax
  __int64 v24; // rcx
  _DWORD v26[2]; // [rsp+40h] [rbp-168h] BYREF
  _DWORD v27[4]; // [rsp+48h] [rbp-160h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-148h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp-140h] BYREF
  LONGLONG v30[2]; // [rsp+78h] [rbp-130h] BYREF
  __int64 v31; // [rsp+88h] [rbp-120h] BYREF
  const char *v32; // [rsp+90h] [rbp-118h] BYREF
  _QWORD v33[3]; // [rsp+98h] [rbp-110h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-F8h] BYREF
  const char *v35; // [rsp+B8h] [rbp-F0h] BYREF
  _QWORD v36[3]; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-D0h] BYREF
  const char *v38; // [rsp+E0h] [rbp-C8h] BYREF
  _QWORD v39[3]; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+128h] [rbp-80h] BYREF
  const char *v41; // [rsp+130h] [rbp-78h] BYREF
  _QWORD v42[3]; // [rsp+138h] [rbp-70h] BYREF
  __int128 v43; // [rsp+150h] [rbp-58h]
  __int128 v44; // [rsp+160h] [rbp-48h] BYREF
  __int64 v45; // [rsp+170h] [rbp-38h]
  HANDLE ThreadProcessId; // [rsp+1C0h] [rbp+18h] BYREF
  int v47; // [rsp+1C8h] [rbp+20h]

  v44 = 0LL;
  v45 = 0LL;
  v43 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v5 = *(_QWORD *)(gptiCurrent + 416LL) + 992LL;
  v29[1] = v5;
  v9 = CheckClipboardAccess();
  if ( !v9 )
  {
    if ( (unsigned int)dword_1C032B240 > 5 )
    {
      v6 = 0x400000000000LL;
      if ( (qword_1C032B250 & 0x400000000000LL) != 0 && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        v31 = v5;
        LODWORD(ThreadProcessId) = -2147024891;
        v32 = "AccessDenied";
        v33[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v7,
          (unsigned int)&unk_1C02F1071,
          v8,
          (unsigned int)v33,
          (__int64)&v32,
          (__int64)&ThreadProcessId,
          (__int64)&v31);
      }
    }
    if ( (unsigned int)dword_1C032B3F8 <= 5 )
      goto LABEL_16;
    if ( (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
      v4 = 0;
    if ( !v4 )
      goto LABEL_16;
    v33[1] = v5;
    v47 = -2147024891;
    v33[2] = "AccessDenied";
LABEL_15:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v7,
      &unk_1C02F1031);
LABEL_16:
    ClipboardData = 0LL;
    goto LABEL_83;
  }
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 768LL) + 24LL) & 2;
  else
    v12 = 0;
  if ( v12 )
  {
    UserSetLastError(5LL);
    if ( (unsigned int)dword_1C032B240 > 5 )
    {
      v6 = 0x400000000000LL;
      if ( (qword_1C032B250 & 0x400000000000LL) != 0 && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        v34 = v5;
        v26[0] = -2147024891;
        v35 = "RestrictedThread";
        v36[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v7,
          (unsigned int)&unk_1C02F1071,
          v8,
          (unsigned int)v36,
          (__int64)&v35,
          (__int64)v26,
          (__int64)&v34);
      }
    }
    if ( (unsigned int)dword_1C032B3F8 <= 5 )
      goto LABEL_16;
    if ( (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
      v4 = 0;
    if ( !v4 )
      goto LABEL_16;
    v36[1] = v5;
    v26[1] = -2147024891;
    v36[2] = "RestrictedThread";
    goto LABEL_15;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 884LL)
    || InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v9, &v44, UserDereferenceObject);
    ObfReferenceObject(v9);
    if ( (unsigned int)Feature_ReadClipboardEvent__private_IsEnabled() )
    {
      LODWORD(ThreadProcessId) = 0;
      v29[0] = 0LL;
      v17 = *((_QWORD *)v9 + 14);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v18);
        v29[0] = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v18 + 416));
      }
      v30[0] = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 416LL));
      EtwTraceUiAuditReadClipboard(
        *(unsigned int *)(*(_QWORD *)(gptiCurrent + 416LL) + 56LL),
        v30,
        (unsigned int)ThreadProcessId,
        v29,
        *((_DWORD *)v9 + 36));
    }
    LODWORD(v43) = a1;
    ClipboardData = xxxGetClipboardData(v9, a1);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v43;
    }
    PopAndFreeW32ThreadLock(&v44);
    if ( (unsigned int)dword_1C032B240 > 5 )
    {
      v6 = 0x400000000000LL;
      if ( (qword_1C032B250 & 0x400000000000LL) != 0 && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        if ( ClipboardData )
        {
          LastError = 0;
        }
        else
        {
          LastError = UserGetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
        }
        v40 = v5;
        v28[0] = LastError;
        v41 = "FunctionExit";
        v42[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v7,
          (unsigned int)&unk_1C02F1071,
          v8,
          (unsigned int)v42,
          (__int64)&v41,
          (__int64)v28,
          (__int64)&v40);
      }
    }
    if ( !ClipboardData )
    {
      v21 = UserGetLastError();
      v22 = v21 < 0;
      if ( v21 > 0 )
        v22 = 1;
      if ( v22 && (unsigned int)dword_1C032B3F8 > 5 )
      {
        if ( (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
          v4 = 0;
        if ( v4 )
        {
          v23 = UserGetLastError();
          if ( v23 > 0 )
            v23 = (unsigned __int16)v23 | 0x80070000;
          v42[1] = v5;
          v28[1] = v23;
          v42[2] = "FunctionExit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v24,
            &unk_1C02F1031);
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C032B240 > 5
      && (qword_1C032B250 & 0x400000000000LL) != 0
      && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
    {
      v37 = v5;
      v27[0] = -2147024891;
      v38 = "UnsupportedFormatForLowBoxApp";
      v39[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v14,
        (unsigned int)&unk_1C02F1071,
        v15,
        (unsigned int)v39,
        (__int64)&v38,
        (__int64)v27,
        (__int64)&v37);
    }
    if ( (unsigned int)dword_1C032B3F8 > 5 )
    {
      if ( (qword_1C032B408 & 1) == 0 || (qword_1C032B410 & 1) != qword_1C032B410 )
        v4 = 0;
      if ( v4 )
      {
        v39[1] = v5;
        v27[1] = -2147024891;
        v39[2] = "UnsupportedFormatForLowBoxApp";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v14,
          &unk_1C02F1031);
      }
    }
    ClipboardData = 0LL;
    UserSetLastError(5LL);
  }
LABEL_83:
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return ClipboardData;
}
