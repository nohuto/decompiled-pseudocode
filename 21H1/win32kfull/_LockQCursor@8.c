/*
 * XREFs of _LockQCursor@8 @ 0x9C34C
 * Callers:
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ?CursorToString@InputTraceLogging@@CGPBDPAUtagCURSOR@@@Z @ 0x142FDC (-CursorToString@InputTraceLogging@@CGPBDPAUtagCURSOR@@@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall LockQCursor(int a1, int a2, int a3, int a4)
{
  int v5; // ecx
  struct tagCURSOR *v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  if ( (*(_DWORD *)(a3 + 284) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (unsigned int)dword_2689E8 > 5 && (unsigned __int8)_tlgKeywordOn(8, 0) )
  {
    v7 = a3;
    v8 = a4;
    v9 = (int)InputTraceLogging::CursorToString(v6);
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      (int)&unk_253F34,
      v5,
      v5,
      (int)&v9,
      (int)&v8,
      (int)&v7);
  }
  return HMAssignmentLock(a1, a2);
}
