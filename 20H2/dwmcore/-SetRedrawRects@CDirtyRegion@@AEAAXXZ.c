/*
 * XREFs of ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x180188954
 * Callers:
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180099330 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::SetRedrawRects(CDirtyRegion *this)
{
  __int64 v1; // r9
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int64 v7; // rax

  v1 = 0LL;
  if ( !*((_BYTE *)this + 4459) )
  {
    v3 = *((_DWORD *)this + 713);
    if ( v3 )
    {
      do
      {
        v4 = *((unsigned int *)this + v1 + 705);
        *((_DWORD *)this + v1 + 633) = v4;
        v5 = 2LL * (unsigned int)v1;
        v6 = *((_OWORD *)this + v4 + 108);
        v7 = v1 + 150;
        v1 = (unsigned int)(v1 + 1);
        *(_OWORD *)((char *)this + 8 * v5 + 2564) = v6;
        *((_OWORD *)this + v7) = *(_OWORD *)((char *)this + 8 * v5 + 2692);
        v3 = *((_DWORD *)this + 713);
      }
      while ( (unsigned int)v1 < v3 );
    }
    *((_DWORD *)this + 632) = v3;
    *((_BYTE *)this + 4459) = 1;
  }
}
