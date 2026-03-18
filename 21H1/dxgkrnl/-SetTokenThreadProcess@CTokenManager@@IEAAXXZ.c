/*
 * XREFs of ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x1C0007154
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0005640 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::SetTokenThreadProcess(CTokenManager *this)
{
  __int64 CurrentProcess; // rdi
  struct DXGGLOBAL *Global; // rax

  CurrentProcess = PsGetCurrentProcess();
  if ( !*((_QWORD *)this + 2) )
  {
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 88LL))(this);
    Global = DXGGLOBAL::GetGlobal();
    (*(void (**)(void))(*((_QWORD *)Global + 38033) + 152LL))();
    *((_QWORD *)this + 2) = CurrentProcess;
  }
}
