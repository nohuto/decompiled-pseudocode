/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180256110
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800F03E7 (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void *v11; // r15
  __int64 v12; // rbx
  size_t v13; // rcx
  const struct std::nothrow_t *v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // r9
  char *v18; // r8
  _QWORD *v19; // rbx
  __int64 v20; // rax
  int v21; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    v5 = std::basic_streambuf<unsigned short>::pptr();
    v6 = std::basic_streambuf<unsigned short>::epptr(a1);
    v7 = 0LL;
    v8 = v6;
    if ( v5 && v5 < v6 )
    {
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v5 + 2;
      return a2;
    }
    v9 = std::basic_streambuf<unsigned short>::eback(a1);
    v10 = 32LL;
    v11 = (void *)v9;
    if ( !v5 || (v7 = (__int64)(v8 - v9) >> 1, v7 < 0x20) )
    {
LABEL_13:
      v12 = 2 * v10;
      v13 = 2 * v10;
      if ( v10 > 0x7FFFFFFFFFFFFFFFLL )
        v13 = -1LL;
      v14 = (const struct std::nothrow_t *)(2 * v7);
      v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
      memcpy_0(v15, v11, (size_t)v14);
      *(_QWORD *)(a1 + 104) = (char *)v15 + (_QWORD)v14 + 2;
      std::basic_streambuf<unsigned short>::setp(a1, v15, (char *)v15 + (_QWORD)v14, (char *)v15 + v12);
      v16 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v17 = v15;
        v18 = 0LL;
      }
      else
      {
        v19 = *(_QWORD **)(a1 + 104);
        v20 = std::basic_streambuf<unsigned short>::gptr(a1);
        v17 = v19;
        v16 = a1;
        v18 = (char *)v15 + 2 * ((v20 - (__int64)v11) >> 1);
      }
      std::basic_streambuf<unsigned short>::setg(v16, v15, v18, v17);
      v21 = *(_DWORD *)(a1 + 112);
      if ( (v21 & 1) != 0 )
      {
        std::_Deallocate<16,0>(v11, v14);
        v21 = *(_DWORD *)(a1 + 112);
      }
      *(_DWORD *)(a1 + 112) = v21 | 1;
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = a2;
      return a2;
    }
    if ( v7 < 0x3FFFFFFF )
    {
      v10 = 2 * v7;
      goto LABEL_13;
    }
    v10 = 0x7FFFFFFFLL;
    if ( v7 < 0x7FFFFFFF )
      goto LABEL_13;
  }
  return 0xFFFFLL;
}
