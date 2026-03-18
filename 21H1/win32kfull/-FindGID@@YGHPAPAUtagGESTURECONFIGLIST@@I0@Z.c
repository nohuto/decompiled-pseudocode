/*
 * XREFs of ?FindGID@@YGHPAPAUtagGESTURECONFIGLIST@@I0@Z @ 0x18868C
 * Callers:
 *     ?_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z @ 0xE3328 (-_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z.c)
 *     _GetGestureConfigSettings@24 @ 0x1887F4 (_GetGestureConfigSettings@24.c)
 * Callees:
 *     <none>
 */

int __userpurge FindGID@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagGESTURECONFIGLIST **a3,
        unsigned int a4,
        struct tagGESTURECONFIGLIST **a5)
{
  int v5; // esi
  struct tagGESTURECONFIGLIST *v6; // edi
  struct tagGESTURECONFIGLIST *i; // ecx
  int result; // eax

  v5 = 0;
  v6 = 0;
  for ( i = *(struct tagGESTURECONFIGLIST **)(a2 + 4 * (a1 & 7)); i; i = *(struct tagGESTURECONFIGLIST **)i )
  {
    if ( *((_DWORD *)i + 1) == a1 )
    {
      v6 = i;
      v5 = 1;
    }
  }
  result = v5;
  *a3 = v6;
  return result;
}
