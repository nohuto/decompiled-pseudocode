/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C0018E60
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 * Callees:
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C0018EFC (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0223C28 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  int v1; // ebx
  __int64 i; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 ProcessImageFileName; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(gpsi + 2236LL) & 0x20) == 0 )
  {
    v1 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    if ( (v1 & 0xF) == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process() + 320); i; i = *(_QWORD *)(i + 664) )
      {
        if ( (**(_DWORD **)(i + 480) & 0x20000000) != 0 )
        {
          v1 = 128;
          break;
        }
      }
    }
    if ( (unsigned int)dword_1C032A3F8 > 5
      && (qword_1C032A408 & 0x400000000000LL) != 0
      && (qword_1C032A410 & 0x400000000000LL) == qword_1C032A410 )
    {
      v8 = v1;
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
      ProcessImageFileName = PsGetProcessImageFileName(*CurrentProcessWin32Process);
      v10 = 50331648LL;
      v9 = ProcessImageFileName;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v5,
        (unsigned int)&unk_1C02F16F3,
        v6,
        v7,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
