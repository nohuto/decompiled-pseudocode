/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ @ 0x1F3ADD
 * Callers:
 *     ?bInit@UMPDOBJ@@QAEHXZ @ 0x1F428A (-bInit@UMPDOBJ@@QAEHXZ.c)
 *     _FreeNonCachedUserMemWrap@4 @ 0x1F47A4 (_FreeNonCachedUserMemWrap@4.c)
 * Callees:
 *     ?bSandboxedClient@UMPDOBJ@@QAEHXZ @ 0x1F4402 (-bSandboxedClient@UMPDOBJ@@QAEHXZ.c)
 */

void __thiscall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  if ( UMPDOBJ::bSandboxedClient(this) )
    *((_DWORD *)this + 52) = 0;
  else
    UMPDOBJ::RemoveHeap(this);
}
