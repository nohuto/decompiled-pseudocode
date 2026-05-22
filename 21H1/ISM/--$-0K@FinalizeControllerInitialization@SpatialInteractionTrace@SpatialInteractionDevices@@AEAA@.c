/*
 * XREFs of ??$?0K@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAK@Z @ 0x1800CCBD0
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D00D8 (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?StartActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800D28D8 (-StartActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevice.c)
 */

SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *__fastcall SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::FinalizeControllerInitialization(
        SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *this,
        __int64 a2,
        unsigned int *a3)
{
  char *v3; // rbx
  _QWORD *v6; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  v6 = (_QWORD *)((char *)this + 136);
  *((_QWORD *)v3 + 6) = "FinalizeControllerInitialization";
  *(_DWORD *)v3 = 0;
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v6[18] = 0LL;
  v6[19] = 0LL;
  memset_0(v6, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::StartActivity(this, *a3);
  return this;
}
