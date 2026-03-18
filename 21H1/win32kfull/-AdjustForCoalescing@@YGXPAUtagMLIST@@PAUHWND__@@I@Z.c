/*
 * XREFs of ?AdjustForCoalescing@@YGXPAUtagMLIST@@PAUHWND__@@I@Z @ 0x827F4
 * Callers:
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 * Callees:
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 */

void __userpurge AdjustForCoalescing(int a1@<edx>, _DWORD *a2@<ecx>, struct tagMLIST *a3, HWND a4, unsigned int a5)
{
  int v6; // edx

  if ( (unsigned int)a3 >= 0x390 && (unsigned int)a3 <= 0x39F || a3 == (struct tagMLIST *)30 )
  {
    v6 = a2[1];
    if ( v6 && *(struct tagMLIST **)(v6 + 12) == a3 && *(_DWORD *)(v6 + 8) == a1 )
      DelQEntry(a2, (_DWORD *)v6, 1);
  }
}
