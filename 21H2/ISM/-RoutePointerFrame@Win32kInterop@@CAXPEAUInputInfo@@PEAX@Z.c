/*
 * XREFs of ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800B2B2C
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800AF6C0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@@Z @ 0x1800AFD50 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 *     ?MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800B0DD4 (-MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV-$unordered_set@KU-$hash@K@std@@U-$equ.c)
 *     ?RouteCachedInput@Win32kInterop@@CAXXZ @ 0x1800B2A00 (-RouteCachedInput@Win32kInterop@@CAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18003D054 (--_U@YAPEAX_K@Z.c)
 */

void __fastcall Win32kInterop::RoutePointerFrame(struct InputInfo *a1, void *a2)
{
  void *v4; // rax
  __int64 v5; // r9
  void *i; // rdi
  const struct std::nothrow_t *v7; // rdx

  v4 = operator new[](saturated_mul(*((unsigned int *)a1 + 53), 4uLL));
  v5 = 0LL;
  for ( i = v4; (unsigned int)v5 < *((_DWORD *)a1 + 53); v5 = (unsigned int)(v5 + 1) )
    *((_DWORD *)v4 + v5) = *((_DWORD *)a1 + 36 * v5 + 55);
  NtUserSetManipulationInputTarget(*((unsigned int *)a1 + 56), a2);
  operator delete(i, v7);
}
