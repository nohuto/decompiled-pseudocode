/*
 * XREFs of _Stollx @ 0x1800AE090
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_J@Z @ 0x180034050 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180034050.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_J@Z @ 0x180092400 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180092400.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_J@Z @ 0x1800B42B0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B42B0.c)
 * Callees:
 *     _Stoullx @ 0x1800AEFA0 (_Stoullx.c)
 */

unsigned __int64 __fastcall Stollx(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int8 **v4; // r14
  char *v6; // rdi
  int v7; // ecx
  char v10; // bl
  unsigned __int64 v11; // rcx
  unsigned __int8 *v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned __int8 **)&v14;
  v6 = (char *)a1;
  v7 = *a1;
  if ( a2 )
    v4 = a2;
  while ( isspace(v7) )
    v7 = (unsigned __int8)*++v6;
  v10 = *v6;
  if ( ((*v6 - 43) & 0xFD) != 0 )
    v10 = 43;
  else
    ++v6;
  v11 = Stoullx(v6, v4, a3, a4);
  v12 = *v4;
  if ( v6 == (char *)*v4 )
  {
    *v4 = a1;
    v12 = a1;
  }
  if ( a1 == v12 && v11 || v10 == 43 && v11 > 0x7FFFFFFFFFFFFFFFLL || v10 == 45 && v11 > 0x8000000000000000uLL )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    return 0x8000000000000000uLL - (v10 != 45);
  }
  else
  {
    if ( v10 == 45 )
      return -(__int64)v11;
    return v11;
  }
}
