/*
 * XREFs of ?PlatformCreateSection@NSInstrumentation@@YGPAXI@Z @ 0xE9B7A
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ @ 0xE9A02 (-Initialize@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0EAAA@$0DI@@NSInstrumentation@@AAE_NXZ @ 0x1842BF (-Initialize@-$CSectionEntry@$0EAAA@$0DI@@NSInstrumentation@@AAE_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@AAE_NXZ @ 0x1A2BAD (-Initialize@-$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@AAE_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NXZ @ 0x208D7F (-Initialize@-$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NXZ.c)
 * Callees:
 *     <none>
 */

PVOID __thiscall NSInstrumentation::PlatformCreateSection(void *ecx0)
{
  int v1; // esi
  void *v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h]
  PVOID Object; // [esp+10h] [ebp-4h] BYREF

  v1 = 0;
  Object = 0;
  v5 = 0;
  v4 = ecx0;
  if ( MmCreateSection(&Object, (char *)&loc_F001D + 2, 0, &v4, 4, 0x4000000, 0, 0) || v4 == ecx0 && !v5 )
    return Object;
  ObfDereferenceObject(Object);
  return (PVOID)v1;
}
