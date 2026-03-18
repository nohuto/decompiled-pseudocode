/*
 * XREFs of ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C004BF70
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0018550 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

void __fastcall EBRUSHOBJ::vDelete(EBRUSHOBJ *this)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v2, 1);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    v4 = (volatile signed __int32 *)(v3 - 16);
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v4, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
}
