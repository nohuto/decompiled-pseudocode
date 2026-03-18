/*
 * XREFs of HviCopyMemoryNonTemporal @ 0x14058F16C
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x1403FF920 (RtlCopyMemoryNonTemporal.c)
 *     HviEnterKernelAperture @ 0x14058F1F0 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14058F24C (HviLeaveKernelAperture.c)
 */

__int64 __fastcall HviCopyMemoryNonTemporal(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rdi
  unsigned int v7; // ebx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 0x100000) )
  {
    v7 = a3 - i;
    if ( a3 - (unsigned int)i > 0x100000 )
      v7 = 0x100000;
    HviEnterKernelAperture();
    RtlCopyMemoryNonTemporal((void *)(i + a1), (const void *)(i + a2), v7);
    HviLeaveKernelAperture();
  }
  return 0LL;
}
