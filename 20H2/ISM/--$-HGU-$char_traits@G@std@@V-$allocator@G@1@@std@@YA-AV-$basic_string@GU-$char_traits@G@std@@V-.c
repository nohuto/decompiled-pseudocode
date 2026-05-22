/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x18006CB5C
 * Callers:
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x18006E9C4 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@@Z @ 0x18006D5AC (--$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@-$basic_string@GU-$char_t.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800708B8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::operator+<unsigned short>(_QWORD *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rbp
  void *v6; // rbx

  Src[2] = 0LL;
  Src[3] = 7LL;
  *(_WORD *)Src = 0;
  v4 = *(_QWORD *)(a3 + 16) + 1LL;
  v5 = Src[2];
  if ( *(_QWORD *)(a3 + 16) != 6LL )
  {
    if ( Src[3] >= v4 )
    {
      if ( v4 < 8 && Src[3] >= 8uLL )
      {
        v6 = (void *)*Src;
        memcpy_0(Src, (const void *)*Src, 2 * v5 + 2);
        std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(2LL * Src[3] + 2));
        Src[3] = 7LL;
      }
    }
    else
    {
      std::wstring::_Reallocate_grow_by<_lambda_7f96eb1dcf99da5daec8c2467d2d5499_,>(Src);
      Src[2] = v5;
    }
  }
  std::wstring::append(Src);
  std::wstring::append(Src);
  return Src;
}
