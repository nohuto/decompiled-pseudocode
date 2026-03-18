/*
 * XREFs of HviCopyMemory @ 0x1405F2B80
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14032A7D0 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     HviEnterKernelAperture @ 0x1405F2C80 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405F2CDC (HviLeaveKernelAperture.c)
 */

__int64 __fastcall HviCopyMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 result; // rax

  if ( a3 )
  {
    v6 = 0LL;
    do
    {
      v7 = a3 - v6;
      if ( a3 - (unsigned int)v6 > 0x100000 )
        v7 = 0x100000;
      HviEnterKernelAperture();
      memmove((void *)(v6 + a1), (const void *)(v6 + a2), v7);
      result = HviLeaveKernelAperture();
      v6 = (unsigned int)(v6 + 0x100000);
    }
    while ( (unsigned int)v6 < a3 );
  }
  return result;
}
