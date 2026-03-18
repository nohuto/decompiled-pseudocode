/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x180198184
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x180195B44 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD2@Z @ 0x180196C24 (--$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@-$basic_string@DU-$c.c)
 */

void **__fastcall std::string::insert(void **a1, __int64 a2, char *a3, unsigned __int64 Size)
{
  __int64 v5; // r8
  bool v8; // cf
  char *v9; // rbx
  size_t v10; // rsi

  v5 = (__int64)a1[2];
  if ( (char *)Size > (char *)a1[3] - v5 )
    return std::string::_Reallocate_grow_by<_lambda_f3a66ab6a0570788f31503db83886f49_,unsigned __int64,char const *,unsigned __int64>(
             a1,
             Size,
             v5,
             Size,
             a3,
             Size);
  v8 = (unsigned __int64)a1[3] < 0x10;
  a1[2] = (void *)(v5 + Size);
  v9 = (char *)a1;
  if ( !v8 )
    v9 = (char *)*a1;
  if ( &a3[Size] <= v9 || a3 > &v9[v5] )
  {
    v10 = Size;
  }
  else if ( v9 > a3 )
  {
    v10 = v9 - a3;
  }
  else
  {
    v10 = 0LL;
  }
  memmove_0(&v9[Size], v9, v5 + 1);
  memcpy_0(v9, a3, v10);
  memcpy_0(&v9[v10], &a3[v10 + Size], Size - v10);
  return a1;
}
