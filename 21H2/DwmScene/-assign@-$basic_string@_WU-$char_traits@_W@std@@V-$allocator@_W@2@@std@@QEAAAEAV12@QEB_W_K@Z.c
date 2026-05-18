/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698
 * Callers:
 *     sub_180026178 @ 0x180026178 (sub_180026178.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x180027294 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800272CC @ 0x1800272CC (sub_1800272CC.c)
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_1800716D8 @ 0x1800716D8 (sub_1800716D8.c)
 *     sub_180076FC8 @ 0x180076FC8 (sub_180076FC8.c)
 *     sub_18007F580 @ 0x18007F580 (sub_18007F580.c)
 *     sub_18007F998 @ 0x18007F998 (sub_18007F998.c)
 *     sub_180081E20 @ 0x180081E20 (sub_180081E20.c)
 *     sub_1800AB670 @ 0x1800AB670 (sub_1800AB670.c)
 *     sub_1800B6A24 @ 0x1800B6A24 (sub_1800B6A24.c)
 *     sub_1800BDE7C @ 0x1800BDE7C (sub_1800BDE7C.c)
 *     sub_1800BE558 @ 0x1800BE558 (sub_1800BE558.c)
 *     sub_1800BE884 @ 0x1800BE884 (sub_1800BE884.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C2B80 @ 0x1800C2B80 (sub_1800C2B80.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800E31CC @ 0x1800E31CC (sub_1800E31CC.c)
 *     sub_18011CD34 @ 0x18011CD34 (sub_18011CD34.c)
 *     sub_18011CDEC @ 0x18011CDEC (sub_18011CDEC.c)
 *     sub_18011D078 @ 0x18011D078 (sub_18011D078.c)
 *     sub_18011D134 @ 0x18011D134 (sub_18011D134.c)
 *     sub_18011D3CC @ 0x18011D3CC (sub_18011D3CC.c)
 *     sub_18011D4D8 @ 0x18011D4D8 (sub_18011D4D8.c)
 *     sub_18011D8C8 @ 0x18011D8C8 (sub_18011D8C8.c)
 *     sub_18011D984 @ 0x18011D984 (sub_18011D984.c)
 *     sub_18011DC10 @ 0x18011DC10 (sub_18011DC10.c)
 *     sub_18011DE50 @ 0x18011DE50 (sub_18011DE50.c)
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 *     sub_18011E370 @ 0x18011E370 (sub_18011E370.c)
 *     sub_18011E660 @ 0x18011E660 (sub_18011E660.c)
 *     sub_180120250 @ 0x180120250 (sub_180120250.c)
 *     sub_180120988 @ 0x180120988 (sub_180120988.c)
 *     sub_1801219F0 @ 0x1801219F0 (sub_1801219F0.c)
 *     sub_1801225A8 @ 0x1801225A8 (sub_1801225A8.c)
 * Callees:
 *     sub_18002625C @ 0x18002625C (sub_18002625C.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

char *__fastcall std::wstring::assign(char *a1, const void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  char *v5; // rsi
  __int64 v6; // rbx
  char *result; // rax

  v3 = a3;
  if ( a3 > *((_QWORD *)a1 + 3) )
  {
    LOBYTE(a3) = 0;
    return (char *)sub_18002625C(a1, v3, a3, a2);
  }
  else
  {
    v5 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v5 = *(char **)a1;
    v6 = 2 * a3;
    *((_QWORD *)a1 + 2) = a3;
    memmove(v5, a2, 2 * a3);
    result = a1;
    *(_WORD *)&v5[v6] = 0;
  }
  return result;
}
