/*
 * XREFs of ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C001E270
 * Callers:
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1C0064EB8 (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToken::Initialize(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = a2;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Global + 38048) + 16LL))(a1 + 80);
  if ( (int)result < 0 )
    *(_DWORD *)(a1 + 24) = 6;
  return result;
}
