/*
 * XREFs of ?PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x4676E
 * Callers:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     ?IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z @ 0xA9632 (-IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@44@Z @ 0x14BAB8 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x14BB32 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6GJP.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapperByVal@$01@@34444@Z @ 0x14C2B5 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U1@U2@U2@U2@.c)
 */

void __fastcall InputTraceLogging::Delivery::PostInputMessage(int a1, int a2)
{
  unsigned int v3; // ebx
  char *v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx
  void *v9; // edx
  unsigned int v10; // [esp+0h] [ebp-3Ch]
  int v11; // [esp+Ch] [ebp-30h] BYREF
  int v12; // [esp+10h] [ebp-2Ch]
  __int64 v13; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+1Ch] [ebp-20h] BYREF
  int v15; // [esp+20h] [ebp-1Ch] BYREF
  int v16; // [esp+24h] [ebp-18h] BYREF
  int v17; // [esp+28h] [ebp-14h] BYREF
  int v18; // [esp+2Ch] [ebp-10h] BYREF
  int v19; // [esp+30h] [ebp-Ch] BYREF
  int v20; // [esp+34h] [ebp-8h] BYREF
  int var2; // [esp+3Ah] [ebp-2h] BYREF

  v20 = a2;
  v3 = *(_DWORD *)(a1 + 12);
  if ( IsPointerInputMessage(v3) )
  {
    if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(16, 0) )
    {
      v13 = *(int *)(a1 + 20);
      v11 = *(_DWORD *)(a1 + 96);
      v12 = *(_DWORD *)(a1 + 100);
      v19 = (int)(*(_DWORD *)(a1 + 64) << 26) >> 31;
      v18 = *(_DWORD *)(a1 + 8);
      v16 = *(unsigned __int16 *)(a1 + 18);
      v15 = (int)&v13;
      LOWORD(var2) = *(_WORD *)(a1 + 16);
      v14 = (int)&v11;
      v17 = v3;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        (int)&unk_25485C,
        v5,
        v5,
        (int)&v14,
        (int)&v20,
        (int)&var2,
        (int)&v15,
        (int)&v16,
        (int)&v17,
        (int)&v18,
        (int)&v19);
    }
  }
  else
  {
    if ( !InputTraceLogging::IsMouseInputMessage(v4) )
    {
      if ( InputTraceLogging::IsKeyboardInputMessage(v10) )
      {
        if ( (unsigned int)dword_2689E8 <= 4 )
          return;
        if ( !(unsigned __int8)_tlgKeywordOn(16, 0) )
          return;
        v15 = v3;
        v9 = &unk_25494B;
      }
      else
      {
        if ( v3 != 255 || (unsigned int)dword_2689E8 <= 4 || !(unsigned __int8)_tlgKeywordOn(16, 0) )
          return;
        v15 = 255;
        v9 = &unk_2549A6;
      }
      v11 = *(_DWORD *)(a1 + 96);
      v12 = *(_DWORD *)(a1 + 100);
      v14 = *(_DWORD *)(a1 + 8);
      v16 = v20;
      v17 = (int)&v11;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        (int)v9,
        v8,
        v8,
        (int)&v17,
        (int)&v16,
        (int)&v15,
        (int)&v14);
      return;
    }
    if ( (unsigned int)dword_2689E8 > 4 )
    {
      if ( (unsigned __int8)_tlgKeywordOn(16, 0) )
      {
        v11 = *(_DWORD *)(a1 + 96);
        v12 = *(_DWORD *)(a1 + 100);
        v14 = (int)(*(_DWORD *)(a1 + 64) << 26) >> 31;
        v15 = *(_DWORD *)(a1 + 8);
        v17 = v20;
        v18 = (int)&v11;
        v16 = v3;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_2689E8,
          (int)&unk_2548E8,
          v6,
          v6,
          (int)&v18,
          (int)&v17,
          (int)&v16,
          (int)&v15,
          (int)&v14);
      }
    }
  }
}
