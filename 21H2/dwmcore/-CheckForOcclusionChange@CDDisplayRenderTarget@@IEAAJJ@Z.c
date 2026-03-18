/*
 * XREFs of ?CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAJJ@Z @ 0x1801C8584
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C85C0 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801C890C (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::CheckForOcclusionChange(CDDisplayRenderTarget *this, int a2)
{
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 18578) = 1;
  }
  else if ( a2 >= 0 && *((_BYTE *)this + 18578) )
  {
    *(_WORD *)((char *)this + 18577) = 1;
    a2 = 0;
    *((_BYTE *)this + 141) = 1;
  }
  return (unsigned int)a2;
}
