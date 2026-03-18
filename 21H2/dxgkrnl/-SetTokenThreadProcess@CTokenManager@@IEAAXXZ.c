/*
 * XREFs of ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x1C001E7FC
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000AA60 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::SetTokenThreadProcess(CTokenManager *this)
{
  __int64 CurrentProcess; // rdi
  struct DXGGLOBAL *Global; // rax

  CurrentProcess = PsGetCurrentProcess();
  if ( !*((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 96LL))(this);
    Global = DXGGLOBAL_GetGlobal();
    (*(void (**)(void))(*((_QWORD *)Global + 38073) + 384LL))();
    *((_QWORD *)this + 3) = CurrentProcess;
  }
}
