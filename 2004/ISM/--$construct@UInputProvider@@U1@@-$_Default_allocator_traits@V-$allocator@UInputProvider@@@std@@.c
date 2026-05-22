/*
 * XREFs of ??$construct@UInputProvider@@U1@@?$_Default_allocator_traits@V?$allocator@UInputProvider@@@std@@@std@@SAXAEAV?$allocator@UInputProvider@@@1@QEAUInputProvider@@$$QEAU3@@Z @ 0x180089210
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x1800272C4 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<InputProvider>>::construct<InputProvider,InputProvider>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3)
{
  __int128 v3; // xmm0
  __int64 *v4; // r8
  __int64 *v5; // rdx
  __int64 result; // rax

  v3 = *a3;
  v4 = (__int64 *)(a3 + 1);
  *a2 = v3;
  v5 = (__int64 *)(a2 + 1);
  *v5 = 0LL;
  if ( v5 != v4 )
  {
    result = *v4;
    *v5 = *v4;
    *v4 = 0LL;
  }
  return result;
}
