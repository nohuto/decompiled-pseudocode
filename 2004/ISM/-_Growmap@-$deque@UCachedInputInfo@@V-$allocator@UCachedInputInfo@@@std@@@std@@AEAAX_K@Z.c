/*
 * XREFs of ?_Growmap@?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@AEAAX_K@Z @ 0x1800B374C
 * Callers:
 *     ?_Push_back_internal@?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@AEAAX$$QEAUCachedInputInfo@@@Z @ 0x1800B38C4 (-_Push_back_internal@-$deque@UCachedInputInfo@@V-$allocator@UCachedInputInfo@@@std@@@std@@AEAAX$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     memmove_0 @ 0x18004A697 (memmove_0.c)
 */

void std::deque<CachedInputInfo>::_Growmap()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r15
  unsigned __int64 v2; // rbp
  size_t size_of; // rax
  _QWORD *v4; // r14
  __int64 v5; // rsi
  const void *v6; // rdx
  size_t v7; // rbx
  char *v8; // rcx
  size_t v9; // r8
  char *v10; // rcx
  size_t v11; // rsi

  v0 = 1LL;
  if ( qword_180208BC0 )
    v0 = qword_180208BC0;
  while ( v0 == qword_180208BC0 || v0 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v0 < v0 )
      std::_Xlength_error("deque<T> too long");
    v0 *= 2LL;
  }
  v1 = qword_180208BC8;
  v2 = v0 - qword_180208BC0;
  size_of = std::_Get_size_of_n<8>(v0);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v5 = 8 * v1;
  v6 = (const void *)(8 * v1 + *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1));
  v7 = *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1) + 8 * qword_180208BC0 - (_QWORD)v6;
  memmove_0(&v4[v1], v6, v7);
  v8 = (char *)&v4[v1] + v7;
  if ( v1 > v2 )
  {
    memmove_0(v8, *((const void **)&Win32kInterop::s_inputInfoCachedQueue + 1), 8 * v2);
    v11 = *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1)
        + v5
        - (8 * v2
         + *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1));
    memmove_0(v4, (const void *)(8 * v2 + *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1)), v11);
    v10 = (char *)v4 + v11;
    v9 = 8 * v2;
  }
  else
  {
    memmove_0(v8, *((const void **)&Win32kInterop::s_inputInfoCachedQueue + 1), 8 * v1);
    memset_0((char *)&v4[v1] + v7 + v5, 0, 8 * (v2 - v1));
    v9 = 8 * v1;
    v10 = (char *)v4;
  }
  memset_0(v10, 0, v9);
  if ( *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1) )
    std::_Deallocate<16,0>(
      *((void **)&Win32kInterop::s_inputInfoCachedQueue + 1),
      (const struct std::nothrow_t *)(8 * qword_180208BC0));
  qword_180208BC0 += v2;
  *((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1) = v4;
}
