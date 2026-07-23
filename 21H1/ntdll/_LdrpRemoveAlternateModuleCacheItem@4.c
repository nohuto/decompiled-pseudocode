/*
 * XREFs of _LdrpRemoveAlternateModuleCacheItem@4 @ 0x4B2AB60E
 * Callers:
 *     _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360 (_LdrUnloadAlternateResourceModuleEx@8.c)
 * Callees:
 *     <none>
 */

int __fastcall LdrpRemoveAlternateModuleCacheItem(unsigned int a1)
{
  int v1; // edx
  char *v2; // ebx
  int result; // eax

  v1 = AlternateResourceModuleCount;
  v2 = (char *)AlternateResourceModules;
  if ( a1 < AlternateResourceModuleCount - 1 )
    qmemcpy(
      (char *)AlternateResourceModules + 32 * a1,
      (char *)AlternateResourceModules + 32 * AlternateResourceModuleCount - 32,
      0x20u);
  result = 0;
  memset(&v2[32 * v1 - 32], 0, 0x20u);
  return result;
}
