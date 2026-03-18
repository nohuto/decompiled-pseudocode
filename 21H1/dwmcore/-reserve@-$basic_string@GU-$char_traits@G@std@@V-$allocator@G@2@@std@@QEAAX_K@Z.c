/*
 * XREFs of ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18019CBAC
 * Callers:
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18019BD9C (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@@Z @ 0x18019B2E0 (--$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@-$basic_string@GU-$char_t.c)
 */

void __fastcall std::wstring::reserve(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  void *v4; // rbx

  v2 = (unsigned __int64)a1[2];
  if ( v2 <= a2 && a1[3] != (void *)a2 )
  {
    if ( (unsigned __int64)a1[3] >= a2 )
    {
      if ( a2 < 8 && (unsigned __int64)a1[3] >= 8 )
      {
        v4 = *a1;
        memcpy_0(a1, *a1, 2 * v2 + 2);
        std::_Deallocate<16,0>(v4, 2LL * (_QWORD)a1[3] + 2);
        a1[3] = (void *)7;
      }
    }
    else
    {
      std::wstring::_Reallocate_grow_by<_lambda_7f96eb1dcf99da5daec8c2467d2d5499_,>(a1, a2 - v2);
      a1[2] = (void *)v2;
    }
  }
}
