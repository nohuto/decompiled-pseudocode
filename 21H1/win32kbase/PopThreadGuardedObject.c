/*
 * XREFs of PopThreadGuardedObject @ 0x1C0075770
 * Callers:
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0007A40 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0007B20 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     GdiThreadCallout @ 0x1C000B570 (GdiThreadCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C001B140 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     NtGdiOpenDCW @ 0x1C0069C10 (NtGdiOpenDCW.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00751E0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0099078 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00C4B04 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C5024 (GreCreatePolyPolygonRgnInternal.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00C7AE0 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     GrePopThreadGuardedObject @ 0x1C01494E0 (GrePopThreadGuardedObject.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C014A6C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThreadGuardedObject(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  if ( a1 )
  {
    KeEnterCriticalRegion();
    v2 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    a1[1] = a1;
    *a1 = a1;
    KeLeaveCriticalRegion();
  }
}
