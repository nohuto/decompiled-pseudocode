/*
 * XREFs of ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C00880F4
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001D40 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_PROCESS::GetKmdProcessHandle(VIDMM_PROCESS *this, unsigned int a2)
{
  __int64 v2; // rdx
  void *result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 48LL) + 8LL * a2);
  result = 0LL;
  if ( v2 )
    return *(void **)(v2 + 16);
  return result;
}
