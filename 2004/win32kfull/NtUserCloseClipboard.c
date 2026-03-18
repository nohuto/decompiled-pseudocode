/*
 * XREFs of NtUserCloseClipboard @ 0x1C0059ED0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetLastError @ 0x1C00488A4 (UserGetLastError.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6588 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6680 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  int v6; // eax
  bool v7; // sf
  int LastError; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // [rsp+70h] [rbp+28h] BYREF
  __int64 v12; // [rsp+78h] [rbp+30h] BYREF
  const char *v13; // [rsp+80h] [rbp+38h] BYREF
  __int64 v14; // [rsp+88h] [rbp+40h] BYREF

  EnterCrit(0LL, 1LL);
  v0 = *(_QWORD *)(gptiCurrent + 416LL) + 992LL;
  v3 = (int)xxxCloseClipboard(0LL);
  if ( (unsigned int)dword_1C032B240 > 5 )
  {
    v1 = 0x400000000000LL;
    if ( (qword_1C032B250 & 0x400000000000LL) != 0 && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
    {
      if ( (_DWORD)v3 )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      v11 = LastError;
      v12 = v0;
      v13 = "FunctionExit";
      v14 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v2,
        (unsigned int)&unk_1C02F1187,
        v4,
        (unsigned int)&v14,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v12);
    }
  }
  if ( !(_DWORD)v3 )
  {
    v6 = UserGetLastError();
    v7 = v6 < 0;
    if ( v6 > 0 )
      v7 = 1;
    if ( v7
      && (unsigned int)dword_1C032B3F8 > 5
      && (qword_1C032B408 & 1) != 0
      && (qword_1C032B410 & 1) == qword_1C032B410 )
    {
      v9 = UserGetLastError();
      if ( v9 > 0 )
        v9 = (unsigned __int16)v9 | 0x80070000;
      v11 = v9;
      v12 = v0;
      v13 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v10,
        &unk_1C02F1149);
    }
  }
  UserSessionSwitchLeaveCrit(v2, v1, v4);
  return v3;
}
