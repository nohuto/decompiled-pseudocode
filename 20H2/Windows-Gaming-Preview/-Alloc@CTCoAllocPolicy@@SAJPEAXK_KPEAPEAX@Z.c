/*
 * XREFs of ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003E974
 * Callers:
 *     ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1800437C0 (-MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x180043D80 (-_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800456EC (memset_0.c)
 *     CoTaskMemAlloc_0 @ 0x18004583A (CoTaskMemAlloc_0.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTCoAllocPolicy::Alloc(IMalloc *a1, __int64 a2, SIZE_T a3, void **a4)
{
  void *v5; // rax
  size_t v6; // rbx
  void *v7; // rdi
  LPMALLOC ppMalloc; // [rsp+30h] [rbp+8h] BYREF

  ppMalloc = a1;
  v5 = CoTaskMemAlloc_0(a3);
  v6 = 0LL;
  *a4 = v5;
  v7 = v5;
  if ( !v5 )
    return 2147942414LL;
  if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(LPMALLOC, void *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v7);
    ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
  }
  memset_0(*a4, 0, v6);
  return 0LL;
}
