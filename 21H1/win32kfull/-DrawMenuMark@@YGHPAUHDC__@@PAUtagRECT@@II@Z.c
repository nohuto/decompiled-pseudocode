/*
 * XREFs of ?DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z @ 0x8FEF0
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 * Callees:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     ?GetCaptionChar@@YGGI@Z @ 0x9106C (-GetCaptionChar@@YGGI@Z.c)
 *     ?FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z @ 0x91098 (-FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z.c)
 */

int __userpurge DrawMenuMark@<eax>(
        _DWORD *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        struct tagRECT *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v6; // esi
  HDC v7; // esi
  struct tagRECT *v8; // ecx
  unsigned int CaptionChar; // eax
  const RECT *v11; // [esp+0h] [ebp-20h]
  const unsigned __int16 *v12; // [esp+0h] [ebp-20h]
  HBRUSH v13; // [esp+4h] [ebp-1Ch]
  int v14; // [esp+4h] [ebp-1Ch]
  int v16; // [esp+14h] [ebp-Ch]
  unsigned int v17; // [esp+1Ch] [ebp-4h] BYREF

  v6 = a1[3] - a1[1];
  v16 = a1[1];
  if ( a1[2] - *a1 < v6 )
    v17 = a1[2] - *a1;
  else
    v17 = a1[3] - a1[1];
  v7 = (HDC)(v16 + (int)(v6 - v17) / 2);
  FillRect(_ghbrWhite, v11, v13);
  GreSetTextColor(a2);
  v8 = a4;
  if ( a3 == (HDC)2 )
  {
    if ( ((unsigned __int8)a4 & 1) != 0 )
    {
      v17 = 97;
      goto LABEL_6;
    }
    if ( ((unsigned __int8)a4 & 2) != 0 )
    {
      v17 = 104;
      goto LABEL_6;
    }
    LOBYTE(v8) = (unsigned __int8)a4 & 4;
    CaptionChar = ((unsigned __int8)a4 & 4) != 0 ? 119 : 56;
  }
  else
  {
    CaptionChar = GetCaptionChar((unsigned int)v12);
  }
  v17 = CaptionChar;
LABEL_6:
  FlipUserTextOutW(v7, (unsigned int)&v17, (int)v8, v12, v14);
  GreSetTextColor(a2);
  return 1;
}
