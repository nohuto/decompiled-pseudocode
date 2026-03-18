/*
 * XREFs of ?GetPixelFormatInfo@CConversionSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x18024DBAC
 * Callers:
 *     ?GetPixelFormatInfo@CConversionSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F2320 (-GetPixelFormatInfo@CConversionSwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConversionSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v3 = *(_QWORD *)(a1 - 456);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 12LL));
    (**v4)(v4, a2);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 - 448);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 440);
  }
  return a2;
}
