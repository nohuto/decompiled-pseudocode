/*
 * XREFs of ?TraceLoggingProcessUsageOnTerminationEvent@@YGXQAUtagPROCESSINFO@@@Z @ 0xB1FC2
 * Callers:
 *     _DestroyProcessInfoEditionRundown@4 @ 0xB1F96 (_DestroyProcessInfoEditionRundown@4.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _ProcessDpiAwarenessFromKernelDpiAwarenessContext@4 @ 0xB226C (_ProcessDpiAwarenessFromKernelDpiAwarenessContext@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@444444444444@Z @ 0x186418 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2.c)
 */

void __thiscall TraceLoggingProcessUsageOnTerminationEvent(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // [esp+Ch] [ebp-44h] BYREF
  int v5; // [esp+10h] [ebp-40h] BYREF
  int v6; // [esp+14h] [ebp-3Ch] BYREF
  int v7; // [esp+18h] [ebp-38h] BYREF
  int v8; // [esp+1Ch] [ebp-34h] BYREF
  int v9; // [esp+20h] [ebp-30h] BYREF
  int v10; // [esp+24h] [ebp-2Ch] BYREF
  int v11; // [esp+28h] [ebp-28h] BYREF
  int v12; // [esp+2Ch] [ebp-24h] BYREF
  int v13; // [esp+30h] [ebp-20h] BYREF
  int v14; // [esp+34h] [ebp-1Ch] BYREF
  int v15; // [esp+38h] [ebp-18h] BYREF
  const char *v16; // [esp+3Ch] [ebp-14h] BYREF
  int v17; // [esp+40h] [ebp-10h] BYREF
  _DWORD *v18; // [esp+44h] [ebp-Ch] BYREF
  _DWORD v19[2]; // [esp+48h] [ebp-8h] BYREF

  if ( (unsigned int)dword_266280 > 5 )
  {
    if ( (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
    {
      v2 = this[145];
      v3 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(this[39]);
      v19[1] = 0;
      v7 = this[143];
      v8 = this[144];
      v10 = this[141];
      v11 = this[140];
      v12 = this[139];
      v13 = this[138];
      v14 = this[142];
      v15 = this[137];
      v17 = this[132];
      v18 = v19;
      v4 = v2 << 29 >> 31;
      v9 = v3;
      v19[0] = 0x1000000;
      v16 = "ATTRI_DEPRECATED";
      v5 = v2 << 30 >> 31;
      v6 = v2 << 31 >> 31;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        v5,
        &v18,
        &v17,
        &v16,
        &v15,
        &v14,
        &v13,
        &v12,
        &v11,
        &v10,
        &v9,
        &v8,
        &v7,
        &v6,
        &v5,
        &v4);
    }
  }
}
