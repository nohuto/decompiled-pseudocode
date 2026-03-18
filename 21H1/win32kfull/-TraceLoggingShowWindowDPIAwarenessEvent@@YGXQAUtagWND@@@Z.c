/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YGXQAUtagWND@@@Z @ 0xB1F0C
 * Callers:
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _ProcessDpiAwarenessFromKernelDpiAwarenessContext@4 @ 0xB226C (_ProcessDpiAwarenessFromKernelDpiAwarenessContext@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x185BF1 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void __thiscall TraceLoggingShowWindowDPIAwarenessEvent(_DWORD *this)
{
  int v1; // esi
  int i; // ecx
  _DWORD *CurrentProcessWin32Process; // eax
  int v4; // ecx
  _DWORD v5[3]; // [esp+4h] [ebp-18h] BYREF
  _DWORD *v6; // [esp+10h] [ebp-Ch] BYREF
  int ProcessImageFileName; // [esp+14h] [ebp-8h] BYREF
  int v8; // [esp+18h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(_gpsi + 1836) & 0x20) == 0 )
  {
    v1 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(_DWORD *)(this[5] + 184));
    if ( (v1 & 0xF) == 2 )
    {
      for ( i = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 180); i; i = *(_DWORD *)(i + 364) )
      {
        if ( (**(_DWORD **)(i + 260) & 0x20000000) != 0 )
        {
          v1 = 128;
          break;
        }
      }
    }
    if ( (unsigned int)dword_266280 > 5 )
    {
      if ( (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
      {
        v5[1] = 0;
        v5[0] = 50331648;
        v8 = v1;
        CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
        ProcessImageFileName = PsGetProcessImageFileName(*CurrentProcessWin32Process);
        v6 = v5;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v4,
          v4,
          &v6,
          &ProcessImageFileName,
          &v8);
      }
    }
  }
}
