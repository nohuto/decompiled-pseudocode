/*
 * XREFs of ?RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x46B46
 * Callers:
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     ?IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z @ 0xA9632 (-IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x14BA4D (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlg.c)
 */

void __fastcall InputTraceLogging::Delivery::RemoveMessage(_DWORD *a1, int a2)
{
  unsigned int v4; // esi
  char *v5; // ecx
  int v6; // ecx
  unsigned int v7; // [esp+0h] [ebp-20h]
  int v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v11[2]; // [esp+18h] [ebp-8h] BYREF

  v4 = a1[3];
  if ( (IsPointerInputMessage(v4)
     || InputTraceLogging::IsMouseInputMessage(v5)
     || InputTraceLogging::IsKeyboardInputMessage(v7)
     || v4 == 255)
    && (unsigned int)dword_2689E8 > 5 )
  {
    if ( (unsigned __int8)_tlgKeywordOn(16, 0) )
    {
      v11[0] = a1[24];
      v11[1] = a1[25];
      v10 = (int)v11;
      v8 = a2;
      v9 = v4;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        (int)&unk_25481B,
        v6,
        v6,
        (int)&v10,
        (int)&v9,
        (int)&v8);
    }
  }
}
