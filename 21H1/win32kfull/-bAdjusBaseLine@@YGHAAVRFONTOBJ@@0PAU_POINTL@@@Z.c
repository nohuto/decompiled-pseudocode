/*
 * XREFs of ?bAdjusBaseLine@@YGHAAVRFONTOBJ@@0PAU_POINTL@@@Z @ 0x1F8207
 * Callers:
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z @ 0x22419E (-bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge bAdjusBaseLine@<eax>(
        int *a1@<edx>,
        int *a2@<ecx>,
        struct RFONTOBJ *a3,
        struct RFONTOBJ *a4,
        struct _POINTL *a5)
{
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx

  v5 = *a2;
  v6 = *a1;
  v7 = 0;
  if ( *(_DWORD *)(*a2 + 320) - *(_DWORD *)(*a2 + 324) == *(_DWORD *)(*a1 + 320) - *(_DWORD *)(*a1 + 324) )
  {
    v8 = (*(_DWORD *)(v5 + 336) - *(_DWORD *)(v6 + 336)) >> 4;
    v9 = (*(_DWORD *)(v5 + 332) - *(_DWORD *)(v6 + 332)) >> 4;
    *(_DWORD *)a3 = v9;
    *((_DWORD *)a3 + 1) = v8;
    if ( v8 || v9 )
      return 1;
  }
  return v7;
}
