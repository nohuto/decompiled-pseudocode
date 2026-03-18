/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0xF0CC8
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@33@Z @ 0x148E33 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@4333@Z @ 0x148ED2 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tl.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CGPBDK@Z @ 0x1492E5 (-PointerDeviceTypeToString@InputTraceLogging@@CGPBDK@Z.c)
 */

char __thiscall InputTraceLogging::RIM::InjectInput(int this, int a2)
{
  char result; // al
  BOOL v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  void *v11; // edx
  unsigned int v12; // [esp+0h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-18h] BYREF
  int v14; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h] BYREF
  int v16; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-8h] BYREF
  int v18; // [esp+20h] [ebp-4h] BYREF

  result = *(_BYTE *)(this + 24);
  if ( result != 2 )
  {
    if ( result )
    {
      if ( result != 1 )
        return result;
      if ( (unsigned int)dword_2689E8 <= 4 )
        return result;
      result = _tlgKeywordOn(&dword_2689E8, 256LL);
      if ( !result )
        return result;
      v11 = &unk_2541CB;
    }
    else
    {
      if ( (unsigned int)dword_2689E8 <= 4 )
        return result;
      result = _tlgKeywordOn(&dword_2689E8, 256LL);
      if ( !result )
        return result;
      v11 = &unk_25418E;
    }
    v13 = 1;
    v14 = this;
    v15 = (int)"InjectTouchInput";
    return _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (int)&dword_2689E8,
             (int)v11,
             v10,
             v10,
             (int)&v15,
             (int)&v14,
             (int)&v13);
  }
  if ( *(char *)(this + 120) >= 0 )
  {
    if ( (unsigned int)dword_2689E8 > 4 )
    {
      result = _tlgKeywordOn(&dword_2689E8, 256LL);
      if ( result )
      {
        v8 = *(_DWORD *)(this + 280);
        v15 = (int)"InjectTouchInput";
        v9 = *(unsigned __int16 *)(v8 + 8);
        v13 = *(unsigned __int16 *)(v8 + 10);
        v14 = v9;
        v16 = this;
        return _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 (int)&dword_2689E8,
                 (int)&unk_254148,
                 v9,
                 v9,
                 (int)&v16,
                 (int)&v15,
                 (int)&v14,
                 (int)&v13);
      }
    }
  }
  else if ( (unsigned int)dword_2689E8 > 4 )
  {
    v4 = 0;
    result = _tlgKeywordOn(&dword_2689E8, 256LL);
    if ( result )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(this + 284) + 300) & 8) != 0 )
        v4 = (*(_DWORD *)(*(_DWORD *)(this + 284) + 300) & 0x2000) == 0;
      v5 = *(_DWORD *)(this + 280);
      v6 = *(unsigned __int16 *)(v5 + 10);
      v16 = *(unsigned __int16 *)(v5 + 8);
      v18 = v4;
      v17 = v6;
      v15 = (int)InputTraceLogging::PointerDeviceTypeToString(v12);
      v14 = (int)"InjectTouchInput";
      v13 = this;
      return _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               (int)&dword_2689E8,
               v7,
               v7,
               (int)&v13,
               (int)&v14,
               (int)&v15,
               (int)&v16,
               (int)&v17,
               (int)&v18);
    }
  }
  return result;
}
