/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIOverlaySwapChain@@@@UEAAKXZ @ 0x1801A1E04
 * Callers:
 *     ?Release@?$CMILCOMBaseT@VIOverlaySwapChain@@@@$4PPPPPPPM@BOA@EAAKXZ @ 0x1801087B0 (-Release@-$CMILCOMBaseT@VIOverlaySwapChain@@@@$4PPPPPPPM@BOA@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBaseT<IOverlaySwapChain>::Release(__int64 a1)
{
  __int64 *v1; // rsi
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rdx

  v1 = (__int64 *)(a1 - 32);
  v2 = (volatile signed __int32 *)(a1 - 32 + 16);
  v3 = _InterlockedDecrement(v2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 - 32 + 16));
    (*(void (__fastcall **)(__int64 *))(*v1 + 208))(v1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *v1;
      --*v2;
      (*(void (__fastcall **)(__int64 *, __int64))(v4 + 200))(v1, 1LL);
    }
  }
  return v3;
}
