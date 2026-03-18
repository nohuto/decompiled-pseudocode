/*
 * XREFs of ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0351968
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0351B18 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0351E48 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C0351EA4 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1C0352088 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C035259C (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C03527F0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C0352A3C (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0352C78 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0352EE8 (-VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C0353138 (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C0353624 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C03539D8 (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C03518D8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseVailGuestReference(DXGSESSIONDATA *this)
{
  if ( (*((_DWORD *)this + 4738))-- == 1 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2370) + 64LL));
    DXGVAILGUESTOBJECT::ReleaseReference(*((DXGVAILGUESTOBJECT **)this + 2370));
    *((_QWORD *)this + 2370) = 0LL;
  }
}
