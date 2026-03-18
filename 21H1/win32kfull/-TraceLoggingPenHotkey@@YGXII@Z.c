/*
 * XREFs of ?TraceLoggingPenHotkey@@YGXII@Z @ 0x186D0F
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x14BA4D (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlg.c)
 */

void __fastcall TraceLoggingPenHotkey(int a1, int a2)
{
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+10h] [ebp-10h] BYREF
  int v7; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v8[2]; // [esp+18h] [ebp-8h] BYREF

  if ( (a1 & 0xA) == 0xA
    && (a2 == 130 || a2 == 131)
    && (unsigned int)dword_266280 > 5
    && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
  {
    v8[1] = 0;
    v7 = (int)v8;
    v8[0] = 2048;
    v5 = a2;
    v6 = a1;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      byte_255A63,
      v4,
      v4,
      &v7,
      (int)&v6,
      (int)&v5);
  }
}
