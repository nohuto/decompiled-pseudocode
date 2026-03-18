/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01BAC6C
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01B9404 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BBA70 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 820LL) & 0x8000) != 0 )
    return 1;
  v1 = 0;
  v2 = qword_1C0250920 ? qword_1C0250920(a1) : 0LL;
  if ( (v2 & 0x10000000000000LL) != 0 )
    return 1;
  return v1;
}
