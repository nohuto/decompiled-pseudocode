/*
 * XREFs of _UmfdDrvFree@8 @ 0xCE1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z @ 0xD3290 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z.c)
 *     _UmfdDrvFreeInternal@12 @ 0x24A6EA (_UmfdDrvFreeInternal@12.c)
 */

void __stdcall UmfdDrvFree(_DWORD *a1, int a2)
{
  if ( a1 )
  {
    if ( *(a1 - 2) )
    {
      UmfdDrvFreeInternal(*(a1 - 4));
      UmfdAllocation::ReleaseKernelmodeAllocation(a1);
    }
  }
}
