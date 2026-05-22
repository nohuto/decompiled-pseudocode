/*
 * XREFs of ?_Change_array@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@2@_K1@Z @ 0x180144C64
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x180140DE8 (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A64 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

void __fastcall std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char *v9; // r14

  v4 = (char *)*a1;
  if ( *a1 )
  {
    v9 = (char *)a1[1];
    if ( v4 != v9 )
    {
      do
      {
        std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v4, a2);
        v4 += 64;
      }
      while ( v4 != v9 );
      v4 = (char *)*a1;
    }
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((a1[2] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFC0uLL));
  }
  a1[1] = a2 + (a3 << 6);
  a1[2] = a2 + (a4 << 6);
  *a1 = a2;
}
