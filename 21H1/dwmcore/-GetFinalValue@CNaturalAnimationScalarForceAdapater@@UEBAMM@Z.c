/*
 * XREFs of ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x180217D90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C93E4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x180217E2C (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::GetFinalValue(
        CNaturalAnimationScalarForceAdapater *this,
        float a2)
{
  __int64 v3; // rax
  CNaturalAnimation *v4; // rdi
  int v5; // ecx
  float v6; // xmm6_4
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct CVector3Force *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v4 = *(CNaturalAnimation **)(v3 + 16);
  else
    v4 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v9);
  CNaturalAnimation::GetVector3Force(v4, &v9);
  v5 = *((_DWORD *)this + 6);
  if ( v5 )
  {
    if ( v5 != 1 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v6 = *((float *)v9 + 86);
  }
  else
  {
    v6 = *((float *)v9 + 85);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v9);
  return v6;
}
