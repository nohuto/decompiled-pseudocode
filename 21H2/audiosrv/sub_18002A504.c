/*
 * XREFs of sub_18002A504 @ 0x18002A504
 * Callers:
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 *     sub_1800038A4 @ 0x1800038A4 (sub_1800038A4.c)
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_18002A420 @ 0x18002A420 (sub_18002A420.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_180056F44 @ 0x180056F44 (sub_180056F44.c)
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005E08C (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_18005E178 @ 0x18005E178 (sub_18005E178.c)
 *     sub_18005E9D0 @ 0x18005E9D0 (sub_18005E9D0.c)
 *     sub_18005ED10 @ 0x18005ED10 (sub_18005ED10.c)
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 *     sub_18005F6F4 @ 0x18005F6F4 (sub_18005F6F4.c)
 *     sub_18005F8F8 @ 0x18005F8F8 (sub_18005F8F8.c)
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_180071F6C @ 0x180071F6C (sub_180071F6C.c)
 *     sub_18007392C @ 0x18007392C (sub_18007392C.c)
 *     unknown_libname_278 @ 0x1800BDBB0 (unknown_libname_278.c)
 *     sub_1800D4F68 @ 0x1800D4F68 (sub_1800D4F68.c)
 *     sub_1800D6A04 @ 0x1800D6A04 (sub_1800D6A04.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_1800E15FC @ 0x1800E15FC (sub_1800E15FC.c)
 *     sub_1800E3D40 @ 0x1800E3D40 (sub_1800E3D40.c)
 *     sub_1800EC128 @ 0x1800EC128 (sub_1800EC128.c)
 *     sub_1800ED398 @ 0x1800ED398 (sub_1800ED398.c)
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 *     sub_1800F746C @ 0x1800F746C (sub_1800F746C.c)
 *     sub_1800F9E98 @ 0x1800F9E98 (sub_1800F9E98.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FB958 @ 0x1800FB958 (sub_1800FB958.c)
 *     sub_1800FBF0C @ 0x1800FBF0C (sub_1800FBF0C.c)
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 *     sub_1800FD038 @ 0x1800FD038 (sub_1800FD038.c)
 *     sub_1800FD274 @ 0x1800FD274 (sub_1800FD274.c)
 *     sub_1800FFAD8 @ 0x1800FFAD8 (sub_1800FFAD8.c)
 *     sub_18010DE28 @ 0x18010DE28 (sub_18010DE28.c)
 *     sub_18011020C @ 0x18011020C (sub_18011020C.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 *     sub_18011F784 @ 0x18011F784 (sub_18011F784.c)
 *     sub_1801217EC @ 0x1801217EC (sub_1801217EC.c)
 *     sub_18012E018 @ 0x18012E018 (sub_18012E018.c)
 *     sub_1801314B4 @ 0x1801314B4 (sub_1801314B4.c)
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 *     sub_18013698C @ 0x18013698C (sub_18013698C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18002A504(void **a1, void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
