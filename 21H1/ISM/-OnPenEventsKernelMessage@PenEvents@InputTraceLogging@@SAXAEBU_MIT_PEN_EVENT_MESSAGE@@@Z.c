/*
 * XREFs of ?OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180133D18
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180133DF8 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018FE0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180034F58 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::PenEvents::OnPenEventsKernelMessage(const struct _MIT_PEN_EVENT_MESSAGE *a1)
{
  LPVOID v2; // rax
  int v3; // r10d
  const char *v4; // rax
  const char *v5; // rcx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v2 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v2 + 1), 512LL) )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v6 = *((_DWORD *)a1 + 1);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              v4 = "TailLongPress";
            else
              v4 = "UnknownButtonAction";
          }
          else
          {
            v4 = "TailDoubleClick";
          }
        }
        else
        {
          v4 = "TailClick";
        }
        goto LABEL_19;
      case 1:
        v5 = "Undocked";
        v4 = "Docked";
        break;
      case 2:
        v5 = "DisabledTailButton";
        v4 = "EnabledTailButton";
        break;
      default:
        v4 = "UNKNOWN";
LABEL_19:
        v8 = (__int64)v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v3,
          (int)&unk_1801CF2D8,
          0,
          0,
          (const unsigned __int16 **)&v8);
        return;
    }
    if ( !*((_DWORD *)a1 + 1) )
      v4 = v5;
    goto LABEL_19;
  }
}
