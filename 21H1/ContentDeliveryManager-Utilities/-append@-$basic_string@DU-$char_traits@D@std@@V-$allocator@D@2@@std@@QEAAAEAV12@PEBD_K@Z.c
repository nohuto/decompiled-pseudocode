/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18004D1A0
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18004CAB0 (-to_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800176E0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180017A20 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18004D2C4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x1800CB698 (memcpy_0.c)
 */

char *__fastcall std::string::append(char *Src, char *a2, size_t Size)
{
  char *v5; // rbx
  char *v6; // rax
  char *v7; // rax
  size_t v9; // r8
  size_t v10; // rdi
  char *v11; // rax
  char *v12; // rcx
  char *v13; // rax

  v5 = Src;
  if ( !a2 )
    goto LABEL_13;
  v6 = *((_QWORD *)Src + 3) < 0x10uLL ? Src : *(char **)Src;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( *((_QWORD *)Src + 3) >= 0x10uLL )
    Src = *(char **)Src;
  if ( &Src[*((_QWORD *)v5 + 2)] <= a2 )
  {
LABEL_13:
    v9 = *((_QWORD *)v5 + 2);
    if ( ~v9 > Size )
    {
      if ( !Size )
        return v5;
      v10 = v9 + Size;
      if ( v9 + Size != -1LL )
      {
        if ( *((_QWORD *)v5 + 3) >= v10 )
        {
          if ( v10 )
          {
LABEL_24:
            if ( *((_QWORD *)v5 + 3) < 0x10uLL )
              v12 = v5;
            else
              v12 = *(char **)v5;
            memcpy_0(&v12[*((_QWORD *)v5 + 2)], a2, Size);
            if ( *((_QWORD *)v5 + 3) < 0x10uLL )
              v13 = v5;
            else
              v13 = *(char **)v5;
            *((_QWORD *)v5 + 2) = v10;
            v13[v10] = 0;
            return v5;
          }
          if ( *((_QWORD *)v5 + 3) < 0x10uLL )
            v11 = v5;
          else
            v11 = *(char **)v5;
          *((_QWORD *)v5 + 2) = 0LL;
          *v11 = 0;
        }
        else
        {
          std::string::_Copy((const void **)v5, v9 + Size, v9);
        }
        if ( v10 )
          goto LABEL_24;
        return v5;
      }
    }
    std::wstring::_Xlen();
  }
  if ( *((_QWORD *)v5 + 3) < 0x10uLL )
    v7 = v5;
  else
    v7 = *(char **)v5;
  return (char *)std::string::append(v5, v5, a2 - v7, Size);
}
