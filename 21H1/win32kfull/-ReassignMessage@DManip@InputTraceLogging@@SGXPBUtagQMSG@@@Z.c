/*
 * XREFs of ?ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14D801
 * Callers:
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x146906 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPro.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$01@@3ABU?$_tlgWrapperByVal@$03@@5@Z @ 0x14B6AF (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tl.c)
 */

void __thiscall InputTraceLogging::DManip::ReassignMessage(int this)
{
  unsigned int v2; // ebx
  char *v3; // ecx
  int v4; // ecx
  int v5; // ecx
  _WORD v6[3]; // [esp+Eh] [ebp-22h] BYREF
  int v7; // [esp+14h] [ebp-1Ch] BYREF
  int v8; // [esp+18h] [ebp-18h] BYREF
  int v9; // [esp+1Ch] [ebp-14h] BYREF
  __int64 v10; // [esp+20h] [ebp-10h] BYREF
  int v11; // [esp+28h] [ebp-8h] BYREF
  int v12; // [esp+2Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 12);
  if ( IsPointerInputMessage(v2) )
  {
    if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 4096LL) )
    {
      v10 = *(int *)(this + 20);
      v11 = *(_DWORD *)(this + 96);
      v12 = *(_DWORD *)(this + 100);
      v7 = *(unsigned __int16 *)(this + 18);
      v8 = (int)&v10;
      v6[0] = *(_WORD *)(this + 16);
      v9 = (int)&v11;
      *(_DWORD *)&v6[1] = v2;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        byte_2551F7,
        v4,
        v4,
        &v9,
        (int)v6,
        &v8,
        (int)&v7,
        (int)&v6[1]);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v3)
         && (unsigned int)dword_2689E8 > 4
         && _tlgKeywordOn(&dword_2689E8, 4096LL) )
  {
    v11 = *(_DWORD *)(this + 96);
    v12 = *(_DWORD *)(this + 100);
    v8 = (int)&v11;
    v9 = v2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      byte_255260,
      v5,
      v5,
      &v8,
      (int)&v9);
  }
}
