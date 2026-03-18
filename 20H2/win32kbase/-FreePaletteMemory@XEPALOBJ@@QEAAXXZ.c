/*
 * XREFs of ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00CEC98
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C001A718 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     HmgFree @ 0x1C004BFE0 (HmgFree.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0090E30 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00CECE0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?FreeType@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0092F74 (-FreeType@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall XEPALOBJ::FreePaletteMemory(struct _SLIST_ENTRY **this)
{
  __int64 Next; // rcx
  unsigned __int8 *v3; // rcx

  Next = (__int64)(*this)[8].Next;
  if ( Next )
    Win32FreePool(Next);
  v3 = gpTypeIsolation[1];
  if ( v3 )
    NSInstrumentation::CLookAsideTypeIsolation<36864,144>::FreeType((__int64)v3, *this);
  *this = 0LL;
}
