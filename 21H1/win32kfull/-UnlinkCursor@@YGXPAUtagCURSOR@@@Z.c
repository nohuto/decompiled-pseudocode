/*
 * XREFs of ?UnlinkCursor@@YGXPAUtagCURSOR@@@Z @ 0x7B7DE
 * Callers:
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     _ZombieCursor@4 @ 0x15641C (_ZombieCursor@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

void __thiscall UnlinkCursor(_DWORD *this)
{
  int v2; // edx
  int v3; // edi
  int v4; // ecx
  int *v5; // ecx
  _DWORD *v6; // eax
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _DWORD *v11; // eax
  int v12; // edi

  v2 = 0;
  v3 = 0;
  v4 = this[3];
  if ( v4 )
  {
    v5 = (int *)(v4 + 400);
  }
  else
  {
    v3 = 1;
    v5 = &gpcurFirst;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (_DWORD *)*v5;
        if ( !*v5 )
          break;
        if ( v6 == this )
        {
          *v5 = this[4];
LABEL_7:
          this[4] = 0;
          this[11] &= ~0x100u;
          return;
        }
        v5 = v6 + 4;
      }
      if ( v3 )
        break;
      v5 = &gpcurFirst;
      v3 = 1;
    }
    if ( v2 )
      break;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
    if ( (ThreadWin32Thread[172] & 0x8000000) != 0 )
      ThreadWin32Thread = (_DWORD *)ThreadWin32Thread[212];
    v5 = (int *)(ThreadWin32Thread[58] + 400);
    v2 = 1;
  }
  v9 = _gSharedInfo[1];
  v10 = v9 + 16 * _giheLast;
  v11 = (_DWORD *)_gpKernelHandleTable;
  while ( v9 <= v10 )
  {
    if ( *(_BYTE *)(v9 + 12) == 3 )
    {
      if ( *(_DWORD **)(*v11 + 16) == this )
      {
        *(_DWORD *)(*v11 + 16) = this[4];
        goto LABEL_7;
      }
      v12 = v11[1];
      if ( v12 && *(_DWORD **)(v12 + 400) == this )
      {
        *(_DWORD *)(v12 + 400) = this[4];
        goto LABEL_7;
      }
    }
    v9 += 16;
    v11 += 3;
  }
}
