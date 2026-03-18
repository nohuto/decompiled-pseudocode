/*
 * XREFs of ?CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0xCC9F6
 * Callers:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x146906 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPro.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$01@@3ABU?$_tlgWrapperByVal@$03@@5@Z @ 0x14B6AF (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tl.c)
 */

void __thiscall InputTraceLogging::Delivery::CoalesceMessage(int this)
{
  unsigned int v2; // ebx
  char *v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // [esp+Ch] [ebp-28h] BYREF
  int v7; // [esp+10h] [ebp-24h]
  __int64 v8; // [esp+14h] [ebp-20h] BYREF
  int v9; // [esp+20h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-10h] BYREF
  int v11; // [esp+28h] [ebp-Ch] BYREF
  int v12; // [esp+2Ch] [ebp-8h] BYREF
  int var2; // [esp+32h] [ebp-2h] BYREF

  v2 = *(_DWORD *)(this + 12);
  if ( IsPointerInputMessage(v2) )
  {
    if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 16LL) )
    {
      v8 = *(int *)(this + 20);
      v6 = *(_DWORD *)(this + 96);
      v7 = *(_DWORD *)(this + 100);
      v11 = *(unsigned __int16 *)(this + 18);
      v10 = (int)&v8;
      LOWORD(var2) = *(_WORD *)(this + 16);
      v9 = (int)&v6;
      v12 = v2;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        (int)&unk_254A01,
        v4,
        v4,
        (int)&v9,
        (int)&var2,
        (int)&v10,
        (int)&v11,
        (int)&v12);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v3)
         && (unsigned int)dword_2689E8 > 4
         && _tlgKeywordOn(&dword_2689E8, 16LL) )
  {
    v6 = *(_DWORD *)(this + 96);
    v7 = *(_DWORD *)(this + 100);
    v10 = (int)&v6;
    v9 = v2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      (int)&unk_254A6C,
      v5,
      v5,
      (int)&v10,
      (int)&v9);
  }
}
