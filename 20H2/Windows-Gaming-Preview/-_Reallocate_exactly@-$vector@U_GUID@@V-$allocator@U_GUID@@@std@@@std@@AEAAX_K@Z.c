/*
 * XREFs of ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x18001884C
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180016684 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180044B4C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x180045FAF (memmove_0.c)
 */

// Hidden C++ exception states: #try_helpers=1
char *__fastcall std::vector<_GUID>::_Reallocate_exactly(const void **a1, unsigned __int64 a2)
{
  signed __int64 v3; // rsi
  __int64 v4; // r14
  size_t v5; // rax
  size_t v6; // rcx
  void *v7; // rax
  const struct std::nothrow_t *v8; // rdx
  char *v9; // rcx
  _QWORD *v10; // rbx
  char *v11; // rcx
  char *v12; // r8
  char *result; // rax

  v3 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v4 = 2 * a2;
  v5 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  if ( v5 < 0x1000 )
  {
    if ( v5 )
      v10 = operator new(v5);
    else
      v10 = 0LL;
  }
  else
  {
    v6 = v5 + 39;
    if ( v5 + 39 < v5 )
      v6 = -1LL;
    v7 = operator new(v6);
    if ( !v7 )
      goto LABEL_17;
    v10 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v10 - 1) = v7;
  }
  memmove_0(v10, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  v11 = (char *)*a1;
  if ( *a1 )
  {
    v8 = (const struct std::nothrow_t *)(((_BYTE *)a1[2] - v11) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v8 < 0x1000 )
    {
LABEL_15:
      operator delete(v11, v8);
      goto LABEL_16;
    }
    v8 = (const struct std::nothrow_t *)((char *)v8 + 39);
    v12 = (char *)*((_QWORD *)v11 - 1);
    v9 = (char *)(v11 - v12);
    if ( (unsigned __int64)(v9 - 8) <= 0x1F )
    {
      v11 = v12;
      goto LABEL_15;
    }
LABEL_17:
    _o__invalid_parameter_noinfo_noreturn(v9, v8);
    __debugbreak();
    JUMPOUT(0x18001894DLL);
  }
LABEL_16:
  *a1 = v10;
  a1[1] = (char *)v10 + (v3 & 0xFFFFFFFFFFFFFFF0uLL);
  result = (char *)&v10[v4];
  a1[2] = &v10[v4];
  return result;
}
