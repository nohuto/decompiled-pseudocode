/*
 * XREFs of ?bAddPrintKView@@YGHKPAXKKPAU_FONTFILE_PRINTKVIEW@@@Z @ 0x208FF4
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QAEPADPBD@Z @ 0x20967F (-pchTranslate@RFONTOBJ@@QAEPADPBD@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __userpurge bAddPrintKView@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        struct _FONTFILE_PRINTKVIEW *a7)
{
  int v9; // esi
  _DWORD *v10; // edx
  int v11; // eax
  int v13; // [esp+Ch] [ebp-4h] BYREF

  v13 = ghsemPrintKView;
  GreAcquireSemaphore(ghsemPrintKView);
  v9 = 1;
  if ( a5 )
  {
    *(_DWORD *)(a5 + 12) = a1;
  }
  else
  {
    v10 = PALLOCMEM2(0x18u, 1886221383, 1);
    if ( v10 )
    {
      v11 = gpPrintKViewList;
      v10[1] = a3;
      *v10 = a2;
      v10[3] = a1;
      v10[2] = 1;
      v10[4] = a4;
      v10[5] = v11;
      gpPrintKViewList = (int)v10;
    }
    else
    {
      v9 = 0;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v9;
}
