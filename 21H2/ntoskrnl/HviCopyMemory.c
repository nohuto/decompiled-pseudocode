/*
 * XREFs of HviCopyMemory @ 0x1405945DC
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x1403234C0 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 *     HviEnterKernelAperture @ 0x1405946DC (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140594738 (HviLeaveKernelAperture.c)
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
