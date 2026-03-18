/*
 * XREFs of ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C005727C
 * Callers:
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BE3B8 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void *__fastcall CCachedData<tagRECT,16>::Get(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  void *v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v4 = a2;
  if ( a2 <= 0x10 )
    return (void *)a1;
  v7 = *(void **)(a1 + 256);
  if ( a2 <= *(_DWORD *)(a1 + 264) )
    return v7;
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = 16 * v4;
  if ( !is_mul_ok(v4, 0x10uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x4B677844u, 256LL, a4);
  *(_QWORD *)(a1 + 256) = v9;
  *(_DWORD *)(a1 + 264) = v9 != 0 ? v4 : 0;
  return *(void **)(a1 + 256);
}
