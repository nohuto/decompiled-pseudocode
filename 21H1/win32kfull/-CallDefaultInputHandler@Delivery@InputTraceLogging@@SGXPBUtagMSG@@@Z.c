/*
 * XREFs of ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z @ 0x189294
 * Callers:
 *     _xxxClientCallDefaultInputHandler@4 @ 0x1935FC (_xxxClientCallDefaultInputHandler@4.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByRef@$07@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$01@@ABU?$_tlgWrapperByVal@$03@@44ABU?$_tlgWrapperByRef@$07@@544@Z @ 0x18907E (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByRef@$_ea_18907E.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByRef@$07@@U2@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapperByRef@$07@@43@Z @ 0x189144 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByRef@$07@@U2@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByRef@$07@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapperByRef@$07@@433@Z @ 0x1891E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByRef@$07@@U2@U1@U1@@-$_tlgWriteTemplate@$.c)
 */

void __thiscall InputTraceLogging::Delivery::CallDefaultInputHandler(int this)
{
  int v2; // ebx
  char *v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // [esp+Ch] [ebp-3Ch] BYREF
  int v8; // [esp+10h] [ebp-38h] BYREF
  int v9; // [esp+14h] [ebp-34h] BYREF
  int v10; // [esp+18h] [ebp-30h] BYREF
  int v11; // [esp+1Ch] [ebp-2Ch] BYREF
  int v12; // [esp+20h] [ebp-28h] BYREF
  int v13; // [esp+24h] [ebp-24h] BYREF
  int v14[2]; // [esp+28h] [ebp-20h] BYREF
  __int64 v15; // [esp+30h] [ebp-18h] BYREF
  __int64 v16; // [esp+38h] [ebp-10h] BYREF
  __int64 v17; // [esp+40h] [ebp-8h] BYREF

  v2 = *(_DWORD *)(this + 4);
  if ( IsPointerInputMessage(v2) )
  {
    v13 = *(unsigned __int16 *)(this + 8);
    if ( v13 == 1 )
    {
      if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 16LL) )
      {
        v15 = *(int *)(this + 12);
        v14[0] = *(_DWORD *)(this + 8);
        v7 = *(unsigned __int16 *)(this + 10);
        v8 = *(_DWORD *)(this + 16);
        v9 = (int)&v15;
        v10 = (int)v14;
        v11 = *(_DWORD *)this;
        v14[1] = 0;
        v12 = v2;
        v13 = v2;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_2689E8,
          byte_25674C,
          v4,
          v4,
          (int)&v13,
          (int)&v12,
          (int)&v11,
          &v10,
          &v9,
          (int)&v8,
          (int)&v7);
      }
    }
    else if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 16LL) )
    {
      v16 = *(int *)(this + 12);
      v17 = *(unsigned int *)(this + 8);
      v12 = *(unsigned __int16 *)(this + 10);
      v11 = *(_DWORD *)(this + 16);
      v10 = (int)&v16;
      v9 = (int)&v17;
      v8 = *(_DWORD *)this;
      LOWORD(v7) = v13;
      v14[0] = v2;
      LODWORD(v15) = v2;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        byte_2567E0,
        v5,
        v5,
        (int)&v7,
        (int)&v15,
        (int)v14,
        (int)&v8,
        &v9,
        &v10,
        (int)&v11,
        (int)&v12);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v3)
         && (unsigned int)dword_2689E8 > 4
         && _tlgKeywordOn(&dword_2689E8, 16LL) )
  {
    v17 = *(int *)(this + 12);
    v16 = *(unsigned int *)(this + 8);
    LODWORD(v15) = *(_DWORD *)(this + 16);
    v14[0] = (int)&v17;
    v13 = (int)&v16;
    v12 = *(_DWORD *)this;
    v11 = v2;
    v10 = v2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      byte_256883,
      v6,
      v6,
      (int)&v10,
      (int)&v11,
      (int)&v12,
      &v13,
      v14,
      (int)&v15);
  }
}
