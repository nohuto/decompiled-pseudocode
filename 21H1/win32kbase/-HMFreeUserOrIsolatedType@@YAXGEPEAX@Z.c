/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0050D24
 * Callers:
 *     HMFreeObject @ 0x1C0070730 (HMFreeObject.c)
 *     HMAllocObject @ 0x1C0070A30 (HMAllocObject.c)
 * Callees:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0071484 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
    HMFreeIsolatedType(a2, a3);
  else
    Win32FreePool(a3);
}
