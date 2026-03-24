/*
 * XREFs of ?GetLastPresentCount@CDDisplayRenderTarget@@UEBAJPEAI@Z @ 0x18016E920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetLastPresentCount(CDDisplayRenderTarget *this, unsigned int *a2)
{
  __int64 v2; // rax

  *a2 = 0;
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    *a2 = *(_DWORD *)(v2 + 280);
  return 0LL;
}
