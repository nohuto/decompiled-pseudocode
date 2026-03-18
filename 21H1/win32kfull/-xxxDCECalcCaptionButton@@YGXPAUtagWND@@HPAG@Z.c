/*
 * XREFs of ?xxxDCECalcCaptionButton@@YGXPAUtagWND@@HPAG@Z @ 0x1501AD
 * Callers:
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 * Callees:
 *     _xxxMNCanClose@4 @ 0x31A3A (_xxxMNCanClose@4.c)
 */

void __userpurge xxxDCECalcCaptionButton(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        int a4,
        unsigned __int16 *a5)
{
  __int16 v5; // ax
  int v6; // eax
  int v7; // eax

  *(_WORD *)a3 = 0;
  switch ( a1 )
  {
    case 5:
      if ( !xxxMNCanClose(a2) )
        return;
      v5 = -4000;
      goto LABEL_16;
    case 2:
      v6 = a2[5];
      if ( (*(_BYTE *)(v6 + 22) & 2) == 0 )
        return;
      if ( (*(_BYTE *)(v6 + 23) & 0x20) == 0 )
      {
        v5 = -4064;
        goto LABEL_16;
      }
LABEL_7:
      v5 = -3808;
LABEL_16:
      *(_WORD *)a3 = v5;
      return;
    case 3:
      v7 = a2[5];
      if ( (*(_BYTE *)(v7 + 22) & 1) == 0 )
        return;
      if ( (*(_BYTE *)(v7 + 23) & 1) == 0 )
      {
        v5 = -4048;
        goto LABEL_16;
      }
      goto LABEL_7;
  }
  if ( a1 == 4 && (*(_BYTE *)(a2[5] + 17) & 4) != 0 )
  {
    v5 = -3712;
    goto LABEL_16;
  }
}
