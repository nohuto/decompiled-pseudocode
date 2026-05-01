/*
 * XREFs of sub_18003E874 @ 0x18003E874
 * Callers:
 *     sub_1800434A0 @ 0x1800434A0 (sub_1800434A0.c)
 *     sub_180043A60 @ 0x180043A60 (sub_180043A60.c)
 * Callees:
 *     memset @ 0x1800453CC (memset.c)
 *     CoTaskMemAlloc @ 0x18004551A (CoTaskMemAlloc.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003E874(IMalloc *a1, __int64 a2, SIZE_T a3, void **a4)
{
  LPVOID v5; // rax
  size_t v6; // rbx
  LPVOID v7; // rdi
  LPMALLOC ppMalloc; // [rsp+30h] [rbp+8h] BYREF

  ppMalloc = a1;
  v5 = CoTaskMemAlloc(a3);
  v6 = 0LL;
  *a4 = v5;
  v7 = v5;
  if ( !v5 )
    return 2147942414LL;
  if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v7);
    ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
  }
  memset(*a4, 0, v6);
  return 0LL;
}
