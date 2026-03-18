/*
 * XREFs of ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0095870
 * Callers:
 *     HMAllocObject @ 0x1C0094E60 (HMAllocObject.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C009924C (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 */

void *__fastcall HMAllocateUserOrIsolatedType(size_t Size, __int16 a2, unsigned __int8 a3)
{
  if ( (a2 & 0x200) != 0 )
    return HMAllocateIsolatedType(a3);
  else
    return Win32AllocPoolZInit(Size, *((unsigned int *)&unk_1C02056C8 + 6 * a3));
}
