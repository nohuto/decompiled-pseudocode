/*
 * XREFs of ?EnsureDpiCursor@Cursor@InputTraceLogging@@SGXPAUtagCURSOR@@@Z @ 0x143024
 * Callers:
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@333333333333@Z @ 0x142DD2 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6G.c)
 */

void __fastcall InputTraceLogging::Cursor::EnsureDpiCursor(int a1)
{
  int v2; // esi
  int *v3; // eax
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-34h] BYREF
  int v6; // [esp+10h] [ebp-30h] BYREF
  int v7; // [esp+14h] [ebp-2Ch] BYREF
  int v8; // [esp+18h] [ebp-28h] BYREF
  int v9; // [esp+1Ch] [ebp-24h] BYREF
  int v10; // [esp+20h] [ebp-20h] BYREF
  int v11; // [esp+24h] [ebp-1Ch] BYREF
  int v12; // [esp+28h] [ebp-18h] BYREF
  int v13; // [esp+2Ch] [ebp-14h] BYREF
  int v14; // [esp+30h] [ebp-10h] BYREF
  int v15; // [esp+34h] [ebp-Ch] BYREF
  int v16; // [esp+38h] [ebp-8h] BYREF
  int v17; // [esp+3Ch] [ebp-4h] BYREF

  if ( (unsigned int)dword_2689E8 > 5 && _tlgKeywordOn(&dword_2689E8, 8LL) )
  {
    v2 = *(_DWORD *)(a1 + 24);
    v3 = (int *)UPDWORDPointer(8232);
    v4 = *(_DWORD *)(a1 + 24);
    v16 = *v3;
    v15 = *(_DWORD *)(a1 + 60);
    v14 = *(_DWORD *)(a1 + 56);
    v13 = *(_DWORD *)(a1 + 52);
    v12 = *(__int16 *)(a1 + 50);
    v11 = *(__int16 *)(a1 + 48);
    v10 = *(_DWORD *)(a1 + 92) >> 1;
    v9 = *(_DWORD *)(a1 + 88);
    v8 = *(_DWORD *)(a1 + 44);
    v7 = *(_DWORD *)(a1 + 40);
    v6 = v4;
    v17 = v2;
    v5 = v4 != 0 ? a1 : 0;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      byte_253C68,
      v5,
      v5,
      (int)&v5,
      (int)&v6,
      (int)&v7,
      (int)&v8,
      (int)&v9,
      (int)&v10,
      (int)&v11,
      (int)&v12,
      (int)&v13,
      (int)&v14,
      (int)&v15,
      (int)&v16,
      (int)&v17);
  }
}
