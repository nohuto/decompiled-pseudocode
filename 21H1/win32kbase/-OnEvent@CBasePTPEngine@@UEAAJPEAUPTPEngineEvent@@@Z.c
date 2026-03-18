/*
 * XREFs of ?OnEvent@CBasePTPEngine@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C01C88E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBasePTPEngine::OnEvent(CBasePTPEngine *this, struct PTPEngineEvent *a2)
{
  if ( *(_DWORD *)a2 )
    return 3221225485LL;
  else
    return (*(__int64 (__fastcall **)(CBasePTPEngine *))(*(_QWORD *)this + 64LL))(this);
}
