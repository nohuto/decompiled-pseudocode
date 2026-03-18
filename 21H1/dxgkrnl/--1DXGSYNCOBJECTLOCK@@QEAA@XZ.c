/*
 * XREFs of ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0039E9C
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C0284230 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(DXGSYNCOBJECTLOCK *this, __int64 a2)
{
  if ( *((_BYTE *)this + 8) )
    DXGSYNCOBJECTLOCK::Release(this, a2);
}
