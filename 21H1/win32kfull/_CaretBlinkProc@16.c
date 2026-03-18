/*
 * XREFs of _CaretBlinkProc@16 @ 0x19FA86
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0x7DBAC (-RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YGXXZ @ 0xBA85A (-UT_InvertCaret@@YGXXZ.c)
 */

void __stdcall CaretBlinkProc(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // esi
  int v7; // ecx
  bool v8; // zf

  v4 = *(_DWORD **)(_gptiCurrent + 236);
  v5 = v4[54];
  if ( a1 == v5 )
  {
    v6 = v4[57];
    if ( v6 > 0 )
      v4[57] = --v6;
    if ( (v4[55] & 3) != 3 || *(_DWORD *)(_gpsi + 4452) != -1 && (*(_BYTE *)(_gpsi + 1836) & 4) != 0 && v6 )
    {
      v7 = v4[55] ^ ((unsigned __int8)v4[55] ^ (unsigned __int8)~(unsigned __int8)v4[55]) & 2;
      v8 = v4[56] == 0;
      v4[55] = v7;
      if ( v8 )
      {
        v4[55] = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)~(_BYTE)v7) & 1;
        UT_InvertCaret();
      }
    }
    else
    {
      RemoveCaretTimer(v5, (int)v4);
    }
  }
}
