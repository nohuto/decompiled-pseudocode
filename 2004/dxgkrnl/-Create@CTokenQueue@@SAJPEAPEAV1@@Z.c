/*
 * XREFs of ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C001743C
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0017360 (-EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C001B928 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CTokenQueue::Create(struct CTokenQueue **a1)
{
  _QWORD *v2; // rax

  v2 = operator new[](0x20uLL, 0x71744D54u, PagedPool);
  if ( v2 )
  {
    v2[2] = 0LL;
    *((_DWORD *)v2 + 6) = 0;
    v2[1] = v2;
    *v2 = v2;
  }
  *a1 = (struct CTokenQueue *)v2;
  return v2 == 0LL ? 0xC0000017 : 0;
}
