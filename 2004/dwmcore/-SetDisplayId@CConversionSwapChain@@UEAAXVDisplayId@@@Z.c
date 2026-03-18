/*
 * XREFs of ?SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z @ 0x18024E354
 * Callers:
 *     ?SetDisplayId@CConversionSwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z @ 0x1800F2550 (-SetDisplayId@CConversionSwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z @ 0x180248784 (-SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::SetDisplayId(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = CLegacySwapChain::SetDisplayId(a1 - 424, a2);
  v5 = *(_QWORD *)(a1 - 480);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, a2);
  return result;
}
