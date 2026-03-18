/*
 * XREFs of ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C001943C
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0019360 (-EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C00209C8 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CTokenQueue::Create(struct CTokenQueue **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  v5 = operator new[](0x20uLL, 0x71744D54u, 256LL, a4);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_DWORD *)(v5 + 24) = 0;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
  }
  *a1 = (struct CTokenQueue *)v5;
  return v5 == 0 ? 0xC0000017 : 0;
}
