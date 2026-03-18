/*
 * XREFs of ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00CF4EC
 * Callers:
 *     HmgFree @ 0x1C007FE20 (HmgFree.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00922F0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00C0F48 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00C1DF0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00CF540 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     ?FreeType@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0028FC4 (-FreeType@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
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
