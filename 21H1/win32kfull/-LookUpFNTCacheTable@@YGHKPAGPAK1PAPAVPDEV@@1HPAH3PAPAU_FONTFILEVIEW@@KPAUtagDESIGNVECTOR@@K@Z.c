/*
 * XREFs of ?LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z @ 0xDE012
 * Callers:
 *     UmfdLoadFontFileView @ 0xDDE4C (UmfdLoadFontFileView.c)
 * Callees:
 *     ComputeFNTCacheFastCheckSum @ 0xDEEA0 (ComputeFNTCacheFastCheckSum.c)
 *     ReadFileInfo @ 0xDEED6 (ReadFileInfo.c)
 *     SearchFNTCacheHlink @ 0xDF15E (SearchFNTCacheHlink.c)
 */

int __userpurge LookUpFNTCacheTable@<eax>(
        int a1@<ecx>,
        _DWORD *a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct PDEV **a6,
        unsigned int *a7,
        _DWORD *a8,
        int *a9,
        int *a10,
        struct _FONTFILEVIEW **a11,
        unsigned int a12,
        struct tagDESIGNVECTOR *a13,
        unsigned int a14)
{
  _DWORD *v14; // ebx
  int v15; // eax
  bool v16; // zf

  v14 = (_DWORD *)dword_274068;
  *a2 = 0;
  *(_DWORD *)a3 = 0;
  *a8 = 0;
  *a4 = 0;
  *a7 = 0;
  if ( v14 )
  {
    if ( a1 )
    {
      v15 = ComputeFNTCacheFastCheckSum(a11, a12);
      v16 = (dword_274064 & 1) == 0;
      *a2 = v15;
      if ( v16 )
      {
        if ( ReadFileInfo(a9, a10) )
          return 0;
      }
      else
      {
        SearchFNTCacheHlink(*v14);
        if ( (dword_274064 & 4) == 0 )
          return 0;
      }
      *a8 = 1;
    }
    return 0;
  }
  return 0;
}
