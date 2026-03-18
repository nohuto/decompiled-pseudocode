/*
 * XREFs of NtUserGetClipboardData @ 0x1C0016EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     xxxGetClipboardData @ 0x1C0016DFC (xxxGetClipboardData.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002CAAC (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     UserGetLastError @ 0x1C012378C (UserGetLastError.c)
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ @ 0x1C015BF98 (-Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5718 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5810 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

void *__fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  char v4; // di
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // r8d
  struct tagWINDOWSTATION *v8; // r15
  void *ClipboardData; // rbx
  int v11; // eax
  int v12; // r8d
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  signed int LastError; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  bool v26; // sf
  signed int v27; // eax
  __int64 v28; // rcx
  _DWORD v30[2]; // [rsp+40h] [rbp-168h] BYREF
  _DWORD v31[4]; // [rsp+48h] [rbp-160h] BYREF
  _DWORD v32[2]; // [rsp+60h] [rbp-148h] BYREF
  _QWORD v33[2]; // [rsp+68h] [rbp-140h] BYREF
  LONGLONG v34[2]; // [rsp+78h] [rbp-130h] BYREF
  __int64 v35; // [rsp+88h] [rbp-120h] BYREF
  const char *v36; // [rsp+90h] [rbp-118h] BYREF
  _QWORD v37[3]; // [rsp+98h] [rbp-110h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-F8h] BYREF
  const char *v39; // [rsp+B8h] [rbp-F0h] BYREF
  _QWORD v40[3]; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-D0h] BYREF
  const char *v42; // [rsp+E0h] [rbp-C8h] BYREF
  _QWORD v43[3]; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+128h] [rbp-80h] BYREF
  const char *v45; // [rsp+130h] [rbp-78h] BYREF
  _QWORD v46[3]; // [rsp+138h] [rbp-70h] BYREF
  __int128 v47; // [rsp+150h] [rbp-58h] BYREF
  __int128 v48; // [rsp+160h] [rbp-48h] BYREF
  __int64 v49; // [rsp+170h] [rbp-38h]
  HANDLE ThreadProcessId; // [rsp+1C0h] [rbp+18h] BYREF
  int v51; // [rsp+1C8h] [rbp+20h]

  v48 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v5 = *(_QWORD *)(gptiCurrent + 424LL) + 992LL;
  v33[1] = v5;
  v8 = CheckClipboardAccess();
  if ( !v8 )
  {
    if ( (unsigned int)dword_1C032A240 > 5
      && (qword_1C032A250 & 0x400000000000LL) != 0
      && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
    {
      v35 = v5;
      LODWORD(ThreadProcessId) = -2147024891;
      v36 = "AccessDenied";
      v37[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (unsigned int)&unk_1C02F0681,
        v7,
        (unsigned int)v37,
        (__int64)&v36,
        (__int64)&ThreadProcessId,
        (__int64)&v35);
    }
    if ( (unsigned int)dword_1C032A3F8 <= 5 )
      goto LABEL_16;
    if ( (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
      v4 = 0;
    if ( !v4 )
      goto LABEL_16;
    v37[1] = v5;
    v51 = -2147024891;
    v37[2] = "AccessDenied";
LABEL_15:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v6,
      &unk_1C02F0641);
LABEL_16:
    ClipboardData = 0LL;
    goto LABEL_83;
  }
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 2;
  else
    v11 = 0;
  if ( v11 )
  {
    UserSetLastError(5LL);
    if ( (unsigned int)dword_1C032A240 > 5
      && (qword_1C032A250 & 0x400000000000LL) != 0
      && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
    {
      v38 = v5;
      v30[0] = -2147024891;
      v39 = "RestrictedThread";
      v40[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (unsigned int)&unk_1C02F0681,
        v12,
        (unsigned int)v40,
        (__int64)&v39,
        (__int64)v30,
        (__int64)&v38);
    }
    if ( (unsigned int)dword_1C032A3F8 <= 5 )
      goto LABEL_16;
    if ( (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
      v4 = 0;
    if ( !v4 )
      goto LABEL_16;
    v40[1] = v5;
    v30[1] = -2147024891;
    v40[2] = "RestrictedThread";
    goto LABEL_15;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 884LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock(v8, &v48, UserDereferenceObject);
    ObfReferenceObject(v8);
    if ( (unsigned int)Feature_ReadClipboardEvent__private_IsEnabled() )
    {
      LODWORD(ThreadProcessId) = 0;
      v33[0] = 0LL;
      v17 = *((_QWORD *)v8 + 14);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v18);
        v33[0] = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v18 + 424));
      }
      v34[0] = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 424LL));
      EtwTraceUiAuditReadClipboard(
        *(unsigned int *)(*(_QWORD *)(gptiCurrent + 424LL) + 56LL),
        v34,
        (unsigned int)ThreadProcessId,
        v33,
        *((_DWORD *)v8 + 36));
    }
    LODWORD(v47) = a1;
    ClipboardData = xxxGetClipboardData(v8, a1, (__int64)&v47);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v47;
    }
    PopAndFreeW32ThreadLock(&v48);
    if ( (unsigned int)dword_1C032A240 > 5 )
    {
      v19 = 0x400000000000LL;
      if ( (qword_1C032A250 & 0x400000000000LL) != 0 && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
      {
        if ( ClipboardData )
        {
          LastError = 0;
        }
        else
        {
          LastError = UserGetLastError(v6, 0x400000000000LL, v20);
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
        }
        v44 = v5;
        v32[0] = LastError;
        v45 = "FunctionExit";
        v46[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v6,
          (unsigned int)&unk_1C02F0681,
          v20,
          (unsigned int)v46,
          (__int64)&v45,
          (__int64)v32,
          (__int64)&v44);
      }
    }
    if ( !ClipboardData )
    {
      v23 = UserGetLastError(v6, v19, v20);
      v26 = v23 < 0;
      if ( v23 > 0 )
        v26 = 1;
      if ( v26 && (unsigned int)dword_1C032A3F8 > 5 )
      {
        if ( (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
          v4 = 0;
        if ( v4 )
        {
          v27 = UserGetLastError(v6, v24, v25);
          if ( v27 > 0 )
            v27 = (unsigned __int16)v27 | 0x80070000;
          v46[1] = v5;
          v32[1] = v27;
          v46[2] = "FunctionExit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v28,
            &unk_1C02F0641);
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C032A240 > 5
      && (qword_1C032A250 & 0x400000000000LL) != 0
      && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
    {
      v41 = v5;
      v31[0] = -2147024891;
      v42 = "UnsupportedFormatForLowBoxApp";
      v43[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v14,
        (unsigned int)&unk_1C02F0681,
        v15,
        (unsigned int)v43,
        (__int64)&v42,
        (__int64)v31,
        (__int64)&v41);
    }
    if ( (unsigned int)dword_1C032A3F8 > 5 )
    {
      if ( (qword_1C032A408 & 1) == 0 || (qword_1C032A410 & 1) != qword_1C032A410 )
        v4 = 0;
      if ( v4 )
      {
        v43[1] = v5;
        v31[1] = -2147024891;
        v43[2] = "UnsupportedFormatForLowBoxApp";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v14,
          &unk_1C02F0641);
      }
    }
    ClipboardData = 0LL;
    UserSetLastError(5LL);
  }
LABEL_83:
  UserSessionSwitchLeaveCrit(v6);
  return ClipboardData;
}
