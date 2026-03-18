/*
 * XREFs of ?WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z @ 0x18027C568
 * Callers:
 *     ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z @ 0x1801A6160 (-WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CDDisplaySwapChain::WaitForVBlank(CDDisplaySwapChain *this, void *a2)
{
  int v2; // eax
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = NtDCompositionWaitForCompositorClock(a2 != 0LL, (unsigned __int64)&v4 & -(__int64)(a2 != 0LL), 0xFFFFFFFFLL);
  if ( v2 == -1071775738 )
    return 142213121;
  else
    return v2 | 0x10000000;
}
