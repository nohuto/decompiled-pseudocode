/*
 * XREFs of ?BeginSetWindowArrangement@@YG_NPAUtagWND@@QBUtagRECT@@1K@Z @ 0x170CB9
 * Callers:
 *     _NtUserSetWindowArrangement@16 @ 0x169EA1 (_NtUserSetWindowArrangement@16.c)
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

char __userpurge BeginSetWindowArrangement@<al>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        int a3@<edi>,
        struct tagWND *a4,
        const struct tagRECT *const a5,
        const struct tagRECT *const a6,
        unsigned int a7)
{
  char v8; // bl
  _DWORD *v9; // ecx
  _DWORD *v10; // esi
  struct tagINPUT_MESSAGE_SOURCE *v12; // [esp+0h] [ebp-10h]
  unsigned int v13; // [esp+8h] [ebp-8h]

  v8 = 0;
  v9 = (_DWORD *)Win32AllocPool(36, 1936552789);
  v13 = (unsigned int)v9;
  if ( v9 )
  {
    v9[1] = *a1;
    v10 = a1 + 1;
    v9[2] = *v10++;
    v9[3] = *v10;
    v9[4] = v10[1];
    v9[5] = *(_DWORD *)a4;
    v9[6] = *((_DWORD *)a4 + 1);
    v9[7] = *((_DWORD *)a4 + 2);
    v9[8] = *((_DWORD *)a4 + 3);
    *v9 = a5;
    if ( PostEventMessageEx(
           *(tagDomLock **)(*(_DWORD *)(a2 + 8) + 236),
           *(_DWORD *)(a2 + 8),
           (struct tagTHREADINFO *)0x11,
           (HWND *)a2,
           0,
           (struct tagWND *)1,
           (unsigned int)v9,
           0,
           a3,
           v12) )
    {
      return 1;
    }
    else
    {
      Win32FreePool(v13);
    }
  }
  return v8;
}
