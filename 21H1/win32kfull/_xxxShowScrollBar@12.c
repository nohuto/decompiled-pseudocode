/*
 * XREFs of _xxxShowScrollBar@12 @ 0xC3116
 * Callers:
 *     _NtUserShowScrollBar@12 @ 0xC307E (_NtUserShowScrollBar@12.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     __InitPwSB@4 @ 0x6E5B6 (__InitPwSB@4.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 */

int __fastcall xxxShowScrollBar(int *a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // esi
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  int v10; // edx
  struct tagWND *v11; // [esp+0h] [ebp-Ch]
  unsigned int v12; // [esp+4h] [ebp-8h]

  v3 = 0;
  v4 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v10 = v6 - 1;
      if ( !v10 )
      {
        xxxShowWindow(v11, v12);
        return 1;
      }
      if ( v10 == 1 )
        v4 = 3145728;
    }
    else
    {
      v4 = (int)&loc_1FFFFC + 4;
    }
  }
  else
  {
    v4 = 0x100000;
  }
  v7 = a1[5];
  v8 = *(_DWORD *)(v7 + 20);
  if ( !a3 )
  {
    if ( (v8 & v4) == 0 )
      return 1;
    *(_DWORD *)(v7 + 20) = v8 & ~v4;
LABEL_19:
    xxxSetWindowPos((int)a1, 0, 0, 0, 0, 0, 55);
    return 1;
  }
  if ( (v4 & v8) != v4 )
  {
    v3 = 1;
    *(_DWORD *)(v7 + 20) = v4 | v8;
  }
  if ( !a1[21] )
    _InitPwSB(a1);
  if ( v3 )
    goto LABEL_19;
  return 1;
}
