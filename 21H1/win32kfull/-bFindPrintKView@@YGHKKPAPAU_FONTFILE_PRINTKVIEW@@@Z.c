/*
 * XREFs of ?bFindPrintKView@@YGHKKPAPAU_FONTFILE_PRINTKVIEW@@@Z @ 0x20922D
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QAEPADPBD@Z @ 0x20967F (-pchTranslate@RFONTOBJ@@QAEPADPBD@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __userpurge bFindPrintKView@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        _DWORD *a3,
        unsigned int a4,
        struct _FONTFILE_PRINTKVIEW **a5)
{
  _DWORD *v5; // edi
  int v6; // esi
  int v8; // ecx
  _DWORD *v9; // eax

  v5 = a3;
  v6 = 0;
  v8 = ghsemPrintKView;
  a3 = (_DWORD *)ghsemPrintKView;
  *v5 = 0;
  GreAcquireSemaphore(v8);
  v9 = (_DWORD *)gpPrintKViewList;
  if ( gpPrintKViewList )
  {
    while ( *v9 != a2 || v9[1] != a1 )
    {
      v9 = (_DWORD *)v9[5];
      if ( !v9 )
        goto LABEL_7;
    }
    *v5 = v9;
    v6 = 1;
  }
LABEL_7:
  SEMOBJ::vUnlock((SEMOBJ *)&a3);
  return v6;
}
