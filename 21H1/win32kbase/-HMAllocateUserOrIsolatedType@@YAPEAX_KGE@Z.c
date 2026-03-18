/*
 * XREFs of ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0071440
 * Callers:
 *     HMAllocObject @ 0x1C0070A30 (HMAllocObject.c)
 * Callees:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C00714FC (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 */

void *__fastcall HMAllocateUserOrIsolatedType(size_t Size, __int16 a2, unsigned __int8 a3)
{
  if ( (a2 & 0x200) != 0 )
    return HMAllocateIsolatedType(a3);
  else
    return (void *)Win32AllocPoolZInit(Size);
}
