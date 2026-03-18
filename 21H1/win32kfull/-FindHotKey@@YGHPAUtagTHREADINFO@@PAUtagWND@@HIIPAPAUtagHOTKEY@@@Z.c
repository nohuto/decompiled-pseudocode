/*
 * XREFs of ?FindHotKey@@YGHPAUtagTHREADINFO@@PAUtagWND@@HIIPAPAUtagHOTKEY@@@Z @ 0xC623E
 * Callers:
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 * Callees:
 *     <none>
 */

int __userpurge FindHotKey@<eax>(
        struct tagHOTKEY *a1@<edx>,
        struct tagHOTKEY *a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagWND *a4,
        int a5,
        struct tagHOTKEY ***a6,
        unsigned int a7,
        struct tagHOTKEY **a8)
{
  int v8; // ecx
  int v9; // edi
  struct tagHOTKEY **v10; // esi
  struct tagHOTKEY **i; // edx
  int result; // eax

  v8 = a5;
  v9 = 0;
  v10 = (&gphkHashTable)[a5 & 0x7F];
  for ( i = 0; v10; v10 = (struct tagHOTKEY **)v10[6] )
  {
    if ( *v10 == a2 )
    {
      v8 = a5;
      if ( v10[2] == a1 && v10[5] == a3 )
        i = v10;
    }
    if ( *((_WORD *)v10 + 6) == (_WORD)a4 && v10[4] == (struct tagHOTKEY *)v8 )
      v9 = 1;
  }
  result = v9;
  *a6 = i;
  return result;
}
