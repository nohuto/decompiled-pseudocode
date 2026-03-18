/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0057A20
 * Callers:
 *     HMFreeObject @ 0x1C00213D0 (HMFreeObject.c)
 *     HMAllocObject @ 0x1C0056580 (HMAllocObject.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0059CC4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
    HMFreeIsolatedType(a2, a3);
  else
    Win32FreePool(a3);
}
