/*
 * XREFs of ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B1180
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B1F04 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B223C (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02B2298 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C02B24B0 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C02B28FC (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C02B2B10 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C02B2D24 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02B2F30 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02B3134 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02B3350 (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C02B377C (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02B3ACC (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02B1108 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseVailGuestReference(DXGSESSIONDATA *this)
{
  if ( (*((_DWORD *)this + 4730))-- == 1 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
    DXGVAILGUESTOBJECT::ReleaseReference(*((DXGVAILGUESTOBJECT **)this + 2366));
    *((_QWORD *)this + 2366) = 0LL;
  }
}
