/*
 * XREFs of UserReAllocPoolWithQuota @ 0x1C0050060
 * Callers:
 *     UserReAllocPoolWithQuotaZInit @ 0x1C0050000 (UserReAllocPoolWithQuotaZInit.c)
 *     FastGetProfileKeysW @ 0x1C0124100 (FastGetProfileKeysW.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
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
