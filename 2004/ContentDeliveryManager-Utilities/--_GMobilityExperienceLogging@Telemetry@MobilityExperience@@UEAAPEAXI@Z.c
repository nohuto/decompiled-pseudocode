/*
 * XREFs of ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x1800097D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

MobilityExperience::Telemetry::MobilityExperienceLogging *__fastcall MobilityExperience::Telemetry::MobilityExperienceLogging::`scalar deleting destructor'(
        MobilityExperience::Telemetry::MobilityExperienceLogging *this,
        char a2)
{
  __int64 v4; // rax
  REGHANDLE v5; // rcx

  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *((_QWORD *)this + 1);
    v5 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)v4 = 0;
    EventUnregister(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
