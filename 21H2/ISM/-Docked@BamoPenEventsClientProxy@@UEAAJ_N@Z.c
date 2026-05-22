/*
 * XREFs of ?Docked@BamoPenEventsClientProxy@@UEAAJ_N@Z @ 0x180133030
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Docked@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x18013308C (-Docked@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

__int64 __fastcall BamoPenEventsClientProxy::Docked(BamoPenEventsClientProxy *this, bool a2)
{
  BamoPenEventsClientProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoPenEventsClientProxyImpl::Docked((BamoPenEventsClientProxy *)((char *)v3 + 8), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
