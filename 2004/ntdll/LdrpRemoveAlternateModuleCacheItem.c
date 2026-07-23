/*
 * XREFs of LdrpRemoveAlternateModuleCacheItem @ 0x18006B040
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006A6D0 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     <none>
 */

void *__fastcall LdrpRemoveAlternateModuleCacheItem(unsigned int a1)
{
  __int64 v1; // r9
  char *v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v1 = (unsigned int)AlternateResourceModuleCount;
  v2 = (char *)AlternateResourceModules;
  if ( a1 < AlternateResourceModuleCount - 1 )
  {
    v3 = (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - 1) << 6;
    v4 = (unsigned __int64)a1 << 6;
    *(_OWORD *)((char *)AlternateResourceModules + v4) = *(_OWORD *)((char *)AlternateResourceModules + v3);
    *(_OWORD *)&v2[v4 + 16] = *(_OWORD *)&v2[v3 + 16];
    *(_OWORD *)&v2[v4 + 32] = *(_OWORD *)&v2[v3 + 32];
    *(_OWORD *)&v2[v4 + 48] = *(_OWORD *)&v2[v3 + 48];
  }
  return memset(&v2[64 * v1 - 64], 0, 0x40uLL);
}
