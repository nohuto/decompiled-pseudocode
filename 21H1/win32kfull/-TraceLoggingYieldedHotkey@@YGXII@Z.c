/*
 * XREFs of ?TraceLoggingYieldedHotkey@@YGXII@Z @ 0x18726B
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4ABU?$_tlgWrapSz@D@@@Z @ 0x186379 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 */

void __fastcall TraceLoggingYieldedHotkey(int a1, int a2)
{
  _DWORD *CurrentProcessWin32Process; // esi
  int v5; // ecx
  const char *ProcessImageFileName; // eax
  const char *v7; // [esp+10h] [ebp-18h] BYREF
  int v8; // [esp+14h] [ebp-14h] BYREF
  int v9; // [esp+18h] [ebp-10h] BYREF
  _DWORD *v10; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD v11[2]; // [esp+20h] [ebp-8h] BYREF

  CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
  {
    if ( CurrentProcessWin32Process )
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
    else
      ProcessImageFileName = byte_FC858;
    v11[1] = 0;
    v7 = ProcessImageFileName;
    v10 = v11;
    v11[0] = 0x2000000;
    v8 = a2;
    v9 = a1;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v5,
      byte_255A99,
      v5,
      v5,
      (int *)&v10,
      (int)&v9,
      (int)&v8,
      &v7);
  }
}
