/*
 * XREFs of ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x1802672BC
 * Callers:
 *     ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ @ 0x180267160 (-GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA-BUIntegrationState@@XZ.c)
 *     ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x180267220 (-GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x180267310 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CNaturalAnimation::GetVector3Force(CNaturalAnimation *this, struct CVector3Force **a2)
{
  struct CVector3Force *v2; // rbx
  struct CVector3Force *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct CVector3Force *)*((_QWORD *)this + 55);
  v2 = v4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v4);
  v4 = 0LL;
  *a2 = v2;
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v4);
}
