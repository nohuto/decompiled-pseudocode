/*
 * XREFs of PopThreadGuardedObject @ 0x1C003E4B0
 * Callers:
 *     GdiThreadCallout @ 0x1C0018740 (GdiThreadCallout.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0037960 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreExtCreateRegion @ 0x1C005B540 (GreExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C005DBC0 (NtGdiOpenDCW.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0060FB0 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C006C5F0 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0081A00 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0081AE0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C0084BB8 (MultiUserNtGreCleanup.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00C3E44 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C4A24 (GreCreatePolyPolygonRgnInternal.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00C7470 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     GrePopThreadGuardedObject @ 0x1C0140CB0 (GrePopThreadGuardedObject.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0141EE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
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
