/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x1800B804C
 * Callers:
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18008D4A8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1801A99A8 (-_Xlen_string@std@@YAXXZ.c)
 */

const void **__fastcall std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
        const void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  size_t v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // rsi
  char *v14; // r15
  const void *v16; // rbx

  v5 = (size_t)Src[2];
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::_Xlen_string();
  v9 = (unsigned __int64)Src[3];
  v10 = v5 + a2;
  v11 = (v5 + a2) | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v6 = v12 + v9;
      if ( v11 >= v12 + v9 )
        v6 = v11;
    }
  }
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6 + 1);
  Src[2] = (const void *)v10;
  Src[3] = (const void *)v6;
  v14 = &v13[v5];
  if ( v9 >= 0x10 )
  {
    v16 = *Src;
    memcpy_0(v13, *Src, v5);
    memcpy_0(v14, a4, Size);
    v14[Size] = 0;
    std::_Deallocate<16,0>(v16, v9 + 1);
  }
  else
  {
    memcpy_0(v13, Src, v5);
    memcpy_0(v14, a4, Size);
    v14[Size] = 0;
  }
  *Src = v13;
  return Src;
}
