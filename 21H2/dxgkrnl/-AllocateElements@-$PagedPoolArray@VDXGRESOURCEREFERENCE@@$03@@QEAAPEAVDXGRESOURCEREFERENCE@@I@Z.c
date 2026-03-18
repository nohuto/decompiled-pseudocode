/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z @ 0x1C01D9960
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01D91E0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGRESOURCEREFERENCE,4>::AllocateElements(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 <= 4 )
  {
    result = a1 + 8;
    *(_QWORD *)a1 = a1 + 8;
    if ( (_DWORD)a2 )
    {
      v7 = 0LL;
      a2 = (unsigned int)a2;
      do
      {
        *(_QWORD *)(v7 + *(_QWORD *)a1) = 0LL;
        v7 += 8LL;
        --a2;
      }
      while ( a2 );
      result = *(_QWORD *)a1;
    }
LABEL_6:
    *(_DWORD *)(a1 + 40) = v4;
    return result;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 >= 8 )
  {
    v8 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 8uLL) )
      v8 = -1LL;
    v9 = __CFADD__(v8, 8LL);
    v10 = v8 + 8;
    if ( v9 )
      v10 = -1LL;
    v11 = operator new[](v10, 0x4B677844u, 256LL, a4);
    v12 = 0LL;
    if ( v11 )
    {
      v12 = v11 + 8;
      *(_QWORD *)v11 = v4;
      `vector constructor iterator'(
        (char *)(v11 + 8),
        8LL,
        v4,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    *(_QWORD *)a1 = v12;
    result = v12;
    goto LABEL_6;
  }
  return 0LL;
}
