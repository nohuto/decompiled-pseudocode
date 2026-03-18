/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C027B668
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00EF780 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019694 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

char *__fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(__int64 a1, unsigned int a2)
{
  char *result; // rax
  __int64 v5; // rax
  bool v6; // cf
  SIZE_T v7; // rax
  char *v8; // rax
  char *v9; // rdi

  if ( a2 <= 0x10 )
  {
    v9 = (char *)(a1 + 8);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    v5 = 8LL * a2;
    if ( !is_mul_ok(a2, 8uLL) )
      v5 = -1LL;
    v6 = __CFADD__(v5, 8LL);
    v7 = v5 + 8;
    if ( v6 )
      v7 = -1LL;
    v8 = (char *)operator new[](v7, 0x4B677844u, PagedPool);
    v9 = 0LL;
    if ( v8 )
    {
      v9 = v8 + 8;
      *(_QWORD *)v8 = a2;
      `vector constructor iterator'(
        v8 + 8,
        8LL,
        a2,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
  }
  *(_QWORD *)a1 = v9;
  result = v9;
  *(_DWORD *)(a1 + 136) = a2;
  return result;
}
