/*
 * XREFs of ?SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1802A79E0
 * Callers:
 *     ?SetDisplayId@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXVDisplayId@@@Z @ 0x18010D0B0 (-SetDisplayId@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXVDisplayId@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetDisplayId(__int64 a1, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
  CRenderTargetBitmap::SetDisplayId(a1, a2);
}
