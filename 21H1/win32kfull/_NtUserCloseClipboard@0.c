/*
 * XREFs of _NtUserCloseClipboard@0 @ 0x11D0A
 * Callers:
 *     <none>
 * Callees:
 *     _xxxCloseClipboard@4 @ 0x11D76 (_xxxCloseClipboard@4.c)
 *     _UserGetLastError@0 @ 0xAC854 (_UserGetLastError@0.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EB77 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6GJP.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EC02 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

int __stdcall NtUserCloseClipboard()
{
  int v0; // edi
  int v1; // esi
  int v2; // ecx
  signed int LastError; // eax
  int v5; // eax
  bool v6; // sf
  signed int v7; // eax
  int v8; // ecx
  _DWORD v9[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v10; // [esp+18h] [ebp-10h] BYREF
  const char *v11; // [esp+1Ch] [ebp-Ch] BYREF
  const char *v12; // [esp+20h] [ebp-8h] BYREF
  int v13; // [esp+24h] [ebp-4h] BYREF

  EnterCrit(0, 1);
  v0 = *(_DWORD *)(_gptiCurrent + 232) + 584;
  v1 = xxxCloseClipboard(0);
  if ( (unsigned int)dword_266258 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
  {
    if ( v1 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v12 = (const char *)LastError;
    v9[0] = 1;
    v10 = v9;
    v9[1] = 0;
    v13 = v0;
    v11 = "FunctionExit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v2,
      &v10,
      &v11,
      &v12,
      &v13);
  }
  if ( !v1 )
  {
    v5 = UserGetLastError();
    v6 = v5 < 0;
    if ( v5 > 0 )
      v6 = 1;
    if ( v6 && (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(1, 0) )
    {
      v7 = UserGetLastError();
      if ( v7 > 0 )
        v7 = (unsigned __int16)v7 | 0x80070000;
      v11 = (const char *)v7;
      v10 = (_DWORD *)v0;
      v12 = "FunctionExit";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v8,
        v8,
        &v12,
        &v11,
        &v10);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
