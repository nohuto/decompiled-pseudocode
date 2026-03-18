/*
 * XREFs of ?DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z @ 0x90C70
 * Callers:
 *     ?DrawScrollArrow@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x8FFCE (-DrawScrollArrow@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 * Callees:
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 */

int __userpurge DrawIt@<eax>(
        _DWORD *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        struct tagRECT *a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  ERECTL *v10; // esi
  struct XDCOBJ *v11; // edi

  v7 = a1[2] - *a1;
  v8 = a1[3] - a1[1];
  v9 = v7;
  if ( v7 >= v8 )
    v9 = a1[3] - a1[1];
  v10 = (ERECTL *)(*a1 + (v7 - v9) / 2);
  v11 = (struct XDCOBJ *)(a1[1] + (v8 - v9) / 2);
  GreSetTextColor(a2);
  if ( ((unsigned __int16)a3 & 0x300) != 0 )
  {
    v10 = (ERECTL *)((char *)v10 + 1);
    v11 = (struct XDCOBJ *)((char *)v11 + 1);
  }
  GreExtTextOutWInternal(a2, v10, v11, 0, 0, (unsigned __int16 *)&a4, (struct tagRECT *)1, 0, 0, 0);
  if ( ((unsigned __int16)a3 & 0x100) != 0 )
  {
    GreSetTextColor(a2);
    GreExtTextOutWInternal(
      a2,
      (ERECTL *)((char *)v10 - 1),
      (struct XDCOBJ *)((char *)v11 - 1),
      0,
      0,
      (unsigned __int16 *)&a4,
      (struct tagRECT *)1,
      0,
      0,
      0);
  }
  GreSetTextColor(a2);
  return 1;
}
