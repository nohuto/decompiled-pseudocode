/*
 * XREFs of ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0014628
 * Callers:
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C018A070 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     DxgkRegisterDwmProcess @ 0x1C01C8180 (DxgkRegisterDwmProcess.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchRegisterAsDwm(VIDSCH_EXPORT *this, struct DXGPROCESS *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9

  v3 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v4 = *((_QWORD *)a2 + 8);
  if ( v4 )
    v3 = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
  return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)this + 1) + 376LL))(v3);
}
