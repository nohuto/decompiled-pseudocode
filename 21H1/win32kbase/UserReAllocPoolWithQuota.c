/*
 * XREFs of UserReAllocPoolWithQuota @ 0x1C00429E0
 * Callers:
 *     UserReAllocPoolWithQuotaZInit @ 0x1C0042980 (UserReAllocPoolWithQuotaZInit.c)
 *     FastGetProfileKeysW @ 0x1C012A0E0 (FastGetProfileKeysW.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

void *__fastcall UserReAllocPoolWithQuota(void *Src, size_t Size, size_t a3, unsigned int a4)
{
  size_t v6; // rbx
  void *v7; // rax
  void *v8; // rdi

  v6 = a3;
  v7 = (void *)Win32AllocPoolWithQuota(a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( Size <= v6 )
      v6 = Size;
    memmove(v7, Src, v6);
    Win32FreePool(Src);
  }
  return v8;
}
