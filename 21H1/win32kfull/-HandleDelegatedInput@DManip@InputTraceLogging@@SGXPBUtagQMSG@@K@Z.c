/*
 * XREFs of ?HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z @ 0x14D206
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$01@@3ABU?$_tlgWrapperByVal@$03@@5ABU?$_tlgWrapSz@D@@@Z @ 0x14B8A9 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U-$_tl.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x14C224 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate.c)
 *     ?DelegationResponseToString@InputTraceLogging@@CGPBDK@Z @ 0x14CE7C (-DelegationResponseToString@InputTraceLogging@@CGPBDK@Z.c)
 */

void __fastcall InputTraceLogging::DManip::HandleDelegatedInput(int a1, int a2)
{
  unsigned int v3; // ebx
  char *v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // [esp+Ch] [ebp-28h] BYREF
  int v8; // [esp+10h] [ebp-24h]
  __int64 v9; // [esp+14h] [ebp-20h] BYREF
  int v10; // [esp+1Ch] [ebp-18h] BYREF
  int v11; // [esp+20h] [ebp-14h] BYREF
  int v12; // [esp+24h] [ebp-10h] BYREF
  int v13; // [esp+28h] [ebp-Ch] BYREF
  int v14; // [esp+2Ch] [ebp-8h] BYREF
  int v15; // [esp+30h] [ebp-4h] BYREF

  v15 = a2;
  v3 = *(_DWORD *)(a1 + 12);
  if ( IsPointerInputMessage(v3) )
  {
    if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 4096LL) )
    {
      v9 = *(int *)(a1 + 20);
      v7 = *(_DWORD *)(a1 + 96);
      v8 = *(_DWORD *)(a1 + 100);
      v14 = (int)InputTraceLogging::DelegationResponseToString((char *)v15);
      v12 = *(unsigned __int16 *)(a1 + 18);
      v11 = (int)&v9;
      HIWORD(v15) = *(_WORD *)(a1 + 16);
      v10 = (int)&v7;
      v13 = v3;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)&dword_2689E8,
        byte_255130,
        v5,
        v5,
        &v10,
        (int)&v15 + 2,
        &v11,
        (int)&v12,
        (int)&v13,
        (const char **)&v14);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v4)
         && (unsigned int)dword_2689E8 > 4
         && _tlgKeywordOn(&dword_2689E8, 4096LL) )
  {
    v7 = *(_DWORD *)(a1 + 96);
    v8 = *(_DWORD *)(a1 + 100);
    v10 = (int)InputTraceLogging::DelegationResponseToString((char *)v15);
    v11 = v3;
    v12 = (int)&v7;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_2689E8,
      byte_2551A8,
      v6,
      v6,
      &v12,
      (int)&v11,
      (const char **)&v10);
  }
}
