/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@$$QEAV12@@Z @ 0x1800B5AB8
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_N@Z @ 0x1800B71A0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B71A0.c)
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x1800CD721 (--3@YAXPEAX@Z_0.c)
 *     memmove_0 @ 0x1800CD8B4 (memmove_0.c)
 */

void **__fastcall std::string::assign(void **a1, void **Src)
{
  if ( a1 != Src )
  {
    if ( (unsigned __int64)a1[3] >= 0x10 )
      operator delete(*a1);
    a1[2] = 0LL;
    a1[3] = (void *)15;
    *(_BYTE *)a1 = 0;
    if ( (unsigned __int64)Src[3] >= 0x10 )
    {
      *a1 = *Src;
      *Src = 0LL;
    }
    else if ( Src[2] != (void *)-1LL )
    {
      memmove_0(a1, Src, (size_t)Src[2] + 1);
    }
    a1[2] = Src[2];
    a1[3] = Src[3];
    Src[2] = 0LL;
    Src[3] = (void *)15;
    *(_BYTE *)Src = 0;
  }
  return a1;
}
