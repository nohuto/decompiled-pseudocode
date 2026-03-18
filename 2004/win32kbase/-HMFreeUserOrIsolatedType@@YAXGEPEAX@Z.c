/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0096F30
 * Callers:
 *     HMFreeObject @ 0x1C0017080 (HMFreeObject.c)
 *     HMAllocObject @ 0x1C0094E60 (HMAllocObject.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C00991D4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
    HMFreeIsolatedType(a2, a3);
  else
    Win32FreePool(a3);
}
