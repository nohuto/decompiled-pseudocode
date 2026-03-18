/*
 * XREFs of ?CheckOnTop@@YGHPAUtagTHREADINFO@@PAUtagWND@@I@Z @ 0x14CE05
 * Callers:
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _CalcForegroundInsertAfter@4 @ 0x932A2 (_CalcForegroundInsertAfter@4.c)
 */

int __userpurge CheckOnTop@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagWND *a4,
        unsigned int a5)
{
  int v7; // eax
  struct tagWND *v8; // edi

  if ( a1 != *(_DWORD *)(*(_DWORD *)(a2 + 236) + 64) )
    return 0;
  if ( a3 == (struct tagTHREADINFO *)513
    || a3 == (struct tagTHREADINFO *)516
    || a3 == (struct tagTHREADINFO *)519
    || a3 == (struct tagTHREADINFO *)523 )
  {
    v7 = *(_DWORD *)(a1 + 20);
    if ( (*(_BYTE *)(v7 + 16) & 8) != 0 )
      return xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 19);
    v8 = 0;
    if ( (*(_WORD *)(v7 + 30) & 0x3FFF) != 0x29D )
      v8 = *(struct tagWND **)(a1 + 52);
    if ( v8 != CalcForegroundInsertAfter((struct tagWND *)a1) )
      return xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 19);
  }
  return 0;
}
