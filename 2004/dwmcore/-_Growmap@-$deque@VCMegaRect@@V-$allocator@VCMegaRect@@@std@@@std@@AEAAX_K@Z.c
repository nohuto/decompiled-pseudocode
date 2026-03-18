/*
 * XREFs of ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAX_K@Z @ 0x18003FD00
 * Callers:
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCHWDrawListEntry@@@Z @ 0x18003FBCC (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall std::deque<CMegaRect>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  SIZE_T v6; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v8; // rbp
  __int64 v9; // r15
  size_t v10; // rbx
  const void *v11; // rdx
  char *v12; // rbx
  size_t v13; // r8
  char *v14; // rcx
  void *result; // rax
  __int64 v16; // rcx
  SIZE_T v17; // rcx
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( 1 )
  {
    v4 = v2 - v3;
    if ( v2 >= 8 )
    {
      if ( v4 )
        break;
    }
    if ( 0x249249249249249LL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v5 = a1[3];
  v6 = 8 * v2;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    v6 = -1LL;
  if ( v6 >= 0x1000 )
  {
    v17 = v6 + 39;
    if ( v6 + 39 < v6 )
      v17 = -1LL;
    v18 = operator new(v17);
    if ( !v18 )
    {
      _o__invalid_parameter_noinfo_noreturn(v20, v19);
      __debugbreak();
      goto LABEL_23;
    }
    v8 = (_QWORD *)(((unsigned __int64)v18 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v8 - 1) = v18;
  }
  else
  {
    if ( v6 )
    {
      ProcessHeap = GetProcessHeap();
      v8 = HeapAlloc(ProcessHeap, 0, v6);
      if ( v8 )
        goto LABEL_12;
LABEL_23:
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v8 = 0LL;
  }
LABEL_12:
  v9 = 8 * v5;
  v10 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v8[v5], (const void *)(a1[1] + 8 * v5), v10);
  v11 = (const void *)a1[1];
  v12 = (char *)&v8[v5] + v10;
  if ( v5 > v4 )
  {
    memmove_0(v12, v11, 8 * v4);
    memmove_0(v8, (const void *)(8 * v4 + a1[1]), v9 - 8 * v4);
    v14 = (char *)v8 + v9 - 8 * v4;
    v13 = 8 * v4;
  }
  else
  {
    memmove_0(v12, v11, 8 * v5);
    memset_0(&v12[v9], 0, 8 * (v4 - v5));
    v13 = 8 * v5;
    v14 = (char *)v8;
  }
  result = memset_0(v14, 0, v13);
  v16 = a1[1];
  if ( v16 )
    result = (void *)std::_Deallocate<16,0>(v16, 8LL * a1[2]);
  a1[2] += v4;
  a1[1] = v8;
  return result;
}
