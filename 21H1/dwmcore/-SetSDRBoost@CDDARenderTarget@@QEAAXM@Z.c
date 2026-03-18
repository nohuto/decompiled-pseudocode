/*
 * XREFs of ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x1800E64F0
 * Callers:
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x1800D2FBC (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDDARenderTarget::SetSDRBoost(CDDARenderTarget *this, float a2)
{
  __int64 v3; // rcx

  if ( *((float *)this + 71) != a2 )
  {
    *((float *)this + 71) = a2;
    v3 = *((_QWORD *)this + 19);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    *((_BYTE *)this + 129) = 1;
  }
}
