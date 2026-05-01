/*
 * XREFs of wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___ @ 0x180474228
 * Callers:
 *     _CSingleViewShellExperience::ShowView_::_1_::dtor$0 @ 0x1801002BC (_CSingleViewShellExperience--ShowView_--_1_--dtor$0.c)
 * Callees:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18001D25C (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+20h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CSingleViewShellExperience::UnboostDiskIo(*(CSingleViewShellExperience **)a1, a2, a3, a4, v4);
  }
}
