/*
 * XREFs of ?GetLastPresentCount@CLegacySwapChain@@UEBAIXZ @ 0x1800C0350
 * Callers:
 *     ?GetLastPresentCount@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ @ 0x1800F1AF0 (-GetLastPresentCount@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ.c)
 *     ?GetLastPresentCount@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x1800F1F90 (-GetLastPresentCount@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ.c)
 *     ?GetLastPresentCount@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ @ 0x1800F22F0 (-GetLastPresentCount@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetLastPresentCount(CLegacySwapChain *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this - 35);
  result = 0LL;
  v3 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 120LL))(v1, &v3);
    return v3;
  }
  return result;
}
