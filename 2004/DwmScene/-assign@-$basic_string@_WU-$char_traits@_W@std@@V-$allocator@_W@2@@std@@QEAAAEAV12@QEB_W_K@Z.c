/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8
 * Callers:
 *     sub_1800208A8 @ 0x1800208A8 (sub_1800208A8.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800219C4 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800219FC @ 0x1800219FC (sub_1800219FC.c)
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_18006BE08 @ 0x18006BE08 (sub_18006BE08.c)
 *     sub_1800716F8 @ 0x1800716F8 (sub_1800716F8.c)
 *     sub_180079CB0 @ 0x180079CB0 (sub_180079CB0.c)
 *     sub_18007A0C8 @ 0x18007A0C8 (sub_18007A0C8.c)
 *     sub_18007C550 @ 0x18007C550 (sub_18007C550.c)
 *     sub_1800A5DA0 @ 0x1800A5DA0 (sub_1800A5DA0.c)
 *     sub_1800B1154 @ 0x1800B1154 (sub_1800B1154.c)
 *     sub_1800B85AC @ 0x1800B85AC (sub_1800B85AC.c)
 *     sub_1800B8C88 @ 0x1800B8C88 (sub_1800B8C88.c)
 *     sub_1800B8FB4 @ 0x1800B8FB4 (sub_1800B8FB4.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BD2B0 @ 0x1800BD2B0 (sub_1800BD2B0.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800DD8FC @ 0x1800DD8FC (sub_1800DD8FC.c)
 *     sub_180117464 @ 0x180117464 (sub_180117464.c)
 *     sub_18011751C @ 0x18011751C (sub_18011751C.c)
 *     sub_1801177A8 @ 0x1801177A8 (sub_1801177A8.c)
 *     sub_180117864 @ 0x180117864 (sub_180117864.c)
 *     sub_180117AFC @ 0x180117AFC (sub_180117AFC.c)
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 *     sub_180117FF8 @ 0x180117FF8 (sub_180117FF8.c)
 *     sub_1801180B4 @ 0x1801180B4 (sub_1801180B4.c)
 *     sub_180118340 @ 0x180118340 (sub_180118340.c)
 *     sub_180118580 @ 0x180118580 (sub_180118580.c)
 *     sub_1801187C4 @ 0x1801187C4 (sub_1801187C4.c)
 *     sub_180118AA0 @ 0x180118AA0 (sub_180118AA0.c)
 *     sub_180118D90 @ 0x180118D90 (sub_180118D90.c)
 *     sub_18011A980 @ 0x18011A980 (sub_18011A980.c)
 *     sub_18011B0B8 @ 0x18011B0B8 (sub_18011B0B8.c)
 *     sub_18011C120 @ 0x18011C120 (sub_18011C120.c)
 *     sub_18011CCD8 @ 0x18011CCD8 (sub_18011CCD8.c)
 * Callees:
 *     sub_18002098C @ 0x18002098C (sub_18002098C.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
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
    return (char *)sub_18002098C(a1, v3, a3, a2);
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
