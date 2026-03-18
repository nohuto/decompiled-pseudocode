/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x18019CAC0
 * Callers:
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18019BD9C (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 * Callees:
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG2@Z @ 0x18019AFE0 (--$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@-$basic_string@GU-$c.c)
 */

void **__fastcall std::wstring::insert(void **a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r8
  bool v7; // cf
  char *v8; // r14
  __int64 v9; // rdi
  int v11; // [rsp+20h] [rbp-28h]

  v4 = (__int64)a1[2];
  if ( (char *)a4 > (char *)a1[3] - v4 )
    return std::wstring::_Reallocate_grow_by<_lambda_156f8c05752017390d6185e99ef4c093_,unsigned __int64,unsigned short const *,unsigned __int64>(
             a1,
             a4,
             v4,
             a4,
             v11,
             a4);
  v7 = (unsigned __int64)a1[3] < 8;
  a1[2] = (void *)(v4 + a4);
  v8 = (char *)a1;
  if ( !v7 )
    v8 = (char *)*a1;
  if ( &aImage[a4] <= (wchar_t *)v8 || L"image_" > (wchar_t *)&v8[2 * v4] )
  {
    v9 = a4;
  }
  else if ( v8 > (char *)L"image_" )
  {
    v9 = (v8 - (char *)L"image_") >> 1;
  }
  else
  {
    v9 = 0LL;
  }
  memmove_0(&v8[2 * a4], v8, 2 * v4 + 2);
  memcpy_0(v8, L"image_", 2 * v9);
  memcpy_0(&v8[2 * v9], &aImage[v9 + a4], 2 * (a4 - v9));
  return a1;
}
