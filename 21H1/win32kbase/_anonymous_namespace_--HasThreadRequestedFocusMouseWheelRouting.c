/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01C2D3C
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01C14D4 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 416) + 820LL) & 0x8000) != 0 )
    return 1;
  v1 = 0;
  v2 = qword_1C02588E0 ? qword_1C02588E0(a1) : 0LL;
  if ( (v2 & 0x10000000000000LL) != 0 )
    return 1;
  return v1;
}
