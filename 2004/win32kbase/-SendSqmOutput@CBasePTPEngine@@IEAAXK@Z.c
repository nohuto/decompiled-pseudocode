/*
 * XREFs of ?SendSqmOutput@CBasePTPEngine@@IEAAXK@Z @ 0x1C01C4DB8
 * Callers:
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C01C5388 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBasePTPEngine::SendSqmOutput(CBasePTPEngine *this, int a2)
{
  char *v2; // rbx
  __int64 v3; // rcx

  v2 = (char *)this + 1120;
  *((_DWORD *)this + 281) = a2;
  v3 = *((_QWORD *)this + 1);
  *(_DWORD *)v2 = 0;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 8LL))(v3, v2);
  *(_OWORD *)v2 = 0LL;
  *((_OWORD *)v2 + 1) = 0LL;
}
