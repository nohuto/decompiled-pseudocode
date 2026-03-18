/*
 * XREFs of ?GetVidPnSourceId@CDDisplayRenderTarget@@UEBAIXZ @ 0x1801708D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetVidPnSourceId(CDDisplayRenderTarget *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    return *(unsigned int *)(v1 + 192);
  else
    return 0xFFFFFFFFLL;
}
