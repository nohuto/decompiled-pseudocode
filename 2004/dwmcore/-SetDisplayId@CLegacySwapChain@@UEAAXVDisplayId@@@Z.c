/*
 * XREFs of ?SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z @ 0x180248784
 * Callers:
 *     ?SetDisplayId@CLegacySwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z @ 0x1800F1C70 (-SetDisplayId@CLegacySwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z.c)
 *     ?SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z @ 0x18024C21C (-SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z.c)
 *     ?SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z @ 0x18024E354 (-SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::SetDisplayId(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 - 200) != a2 )
  {
    *(_DWORD *)(a1 - 200) = a2;
    v2 = *(_QWORD *)(a1 - 272);
    if ( v2 )
    {
      v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 24LL);
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    }
  }
  return result;
}
