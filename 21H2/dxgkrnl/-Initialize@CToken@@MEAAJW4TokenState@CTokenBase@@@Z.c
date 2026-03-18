/*
 * XREFs of ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C0021C20
 * Callers:
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1C0076E78 (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToken::Initialize(__int64 a1, int a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = a2;
  Global = DXGGLOBAL_GetGlobal();
  result = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Global + 38073) + 16LL))(a1 + 80);
  if ( (int)result < 0 )
    *(_DWORD *)(a1 + 24) = 6;
  return result;
}
