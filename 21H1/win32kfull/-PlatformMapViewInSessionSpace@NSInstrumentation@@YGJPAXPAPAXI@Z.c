/*
 * XREFs of ?PlatformMapViewInSessionSpace@NSInstrumentation@@YGJPAXPAPAXI@Z @ 0xE9B4C
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ @ 0xE9A02 (-Initialize@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0EAAA@$0DI@@NSInstrumentation@@AAE_NXZ @ 0x1842BF (-Initialize@-$CSectionEntry@$0EAAA@$0DI@@NSInstrumentation@@AAE_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@AAE_NXZ @ 0x1A2BAD (-Initialize@-$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@AAE_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NXZ @ 0x208D7F (-Initialize@-$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge NSInstrumentation::PlatformMapViewInSessionSpace@<eax>(
        PVOID *a1@<edx>,
        void *a2@<ecx>,
        NSInstrumentation *this,
        void *a4,
        void **a5,
        unsigned int a6)
{
  NTSTATUS result; // eax
  ULONG_PTR ViewSize; // [esp+4h] [ebp-4h] BYREF

  ViewSize = 0;
  result = MmMapViewInSessionSpace(a2, a1, &ViewSize);
  if ( result >= 0 && (NSInstrumentation *)ViewSize != this )
  {
    MmUnmapViewInSessionSpace(*a1);
    *a1 = 0;
    return -1073741595;
  }
  return result;
}
