/*
 * XREFs of ?PostThreadRecalc@@YGHPAUtagTHREADINFO@@PAUtagMONITORRECTS@@PAUtagWINDOWANDRECT@@HK@Z @ 0xB065A
 * Callers:
 *     _xxxDesktopRecalc@8 @ 0xB04BC (_xxxDesktopRecalc@8.c)
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge PostThreadRecalc@<eax>(
        _DWORD *a1@<edx>,
        struct tagTHREADINFO *a2,
        struct tagMONITORRECTS *a3,
        struct tagWINDOWANDRECT *a4,
        int a5,
        unsigned int a6)
{
  int v7; // ebx
  _DWORD *v8; // edi
  size_t v9; // esi
  void *v10; // eax
  int v12; // [esp+0h] [ebp-1Ch]
  struct tagINPUT_MESSAGE_SOURCE *v13; // [esp+4h] [ebp-18h]

  v7 = 0;
  v8 = (_DWORD *)Win32AllocPool(20 * (_DWORD)a3 + 12, 2004054869);
  if ( v8 )
  {
    v9 = 40 * *a1 + 4;
    v10 = (void *)Win32AllocPool(v9, 2004054869);
    *v8 = v10;
    if ( v10 )
    {
      memcpy(v10, a1, v9);
      v8[2] = a3;
      v8[1] = a4;
      memcpy(v8 + 3, a2, 20 * (_DWORD)a3);
      v7 = PostEventMessageEx((struct tagTHREADINFO *)0x16, 0, 0, (struct tagWND *)v8, 0, 0, v12, v13);
      if ( !v7 )
      {
        Win32FreePool(*v8);
        Win32FreePool(v8);
      }
    }
    else
    {
      Win32FreePool(v8);
    }
  }
  return v7;
}
