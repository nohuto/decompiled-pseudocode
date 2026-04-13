/*
 * XREFs of ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x18002A1C4
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x180038B10 (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 * Callees:
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002A370 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002A410 (-WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<10,unsigned int,unsigned __int64>(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        int a2,
        __int64 a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  GetSystemTimeAsFileTime((LPFILETIME)&v7);
  v6 = (unsigned int)v7 + (HIDWORD(v7) << 32);
  if ( !*((_BYTE *)this + 252) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  if ( v6 != *((_QWORD *)this + 14) )
  {
    *((_QWORD *)this + 14) = v6;
    *((_BYTE *)this + 251) = 1;
    CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(this);
  }
  if ( !*((_BYTE *)this + 252) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  if ( v6 != *((_QWORD *)this + 15) )
  {
    *((_QWORD *)this + 15) = v6;
    *((_BYTE *)this + 251) = 1;
    CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(this);
  }
  if ( !*((_BYTE *)this + 252) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  if ( a2 != *((_DWORD *)this + 34) )
  {
    *((_DWORD *)this + 34) = a2;
    *((_BYTE *)this + 251) = 1;
    CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(this);
  }
  if ( !*((_BYTE *)this + 252) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  if ( a3 != *((_QWORD *)this + 16) )
  {
    *((_QWORD *)this + 16) = a3;
    *((_BYTE *)this + 251) = 1;
    CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(this);
  }
}
