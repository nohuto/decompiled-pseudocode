/*
 * XREFs of _EditionHandleMitSignal@4 @ 0xAFAEE
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     _xxxComputeInputSinkInfo@0 @ 0x151EE5 (_xxxComputeInputSinkInfo@0.c)
 */

void __stdcall EditionHandleMitSignal(HANDLE a1)
{
  int v1; // esi
  int v2; // esi
  const char *v3; // eax
  int v4; // esi
  int v5; // [esp+10h] [ebp-8h] BYREF
  char v6[4]; // [esp+14h] [ebp-4h] BYREF

  if ( a1 == ghDITEvent )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v6,
      "HandleMitSignal",
      0);
    while ( 1 )
    {
      v1 = gdwDITWakeReason & -gdwDITWakeReason;
      if ( !v1 )
        break;
      _InterlockedAnd(&gdwDITWakeReason, ~v1);
      if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(2, 0) )
      {
        switch ( v1 )
        {
          case 1:
            v3 = "Mouse";
            break;
          case 2:
            v3 = "InputSinkFromPoint";
            break;
          case 4:
            v3 = "MouseInterceptCallout";
            break;
          default:
            v3 = "UNKNOWN";
            break;
        }
        v5 = (int)v3;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (int)&dword_2689E8,
          (int)&unk_25535B,
          0,
          0,
          (int)&v5);
      }
      v2 = v1 - 1;
      if ( v2 )
      {
        v4 = v2 - 1;
        if ( v4 )
        {
          if ( v4 == 2 )
            ExecuteMarshaledInterceptRequest();
        }
        else
        {
          EnterCrit(0, 1);
          xxxComputeInputSinkInfo();
          UserSessionSwitchLeaveCrit();
        }
      }
      else
      {
        ProcessMouseEvent();
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v6);
  }
}
