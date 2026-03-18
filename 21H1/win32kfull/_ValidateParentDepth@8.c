/*
 * XREFs of _ValidateParentDepth@8 @ 0x34CBA
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _ValidateNewParent@8 @ 0x2FEC8 (_ValidateNewParent@8.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 */

BOOL __fastcall ValidateParentDepth(_DWORD *a1, int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // eax

  v4 = 1;
  while ( a2 && a2 != _GetDesktopWindow(a2) )
  {
    a2 = *(_DWORD *)(a2 + 56);
    ++v4;
  }
  v5 = v4;
  if ( a1 && a1[15] )
  {
    v7 = (_DWORD *)a1[14];
    while ( 1 )
    {
      while ( a1[15] )
      {
        a1 = (_DWORD *)a1[15];
        ++v4;
      }
      v8 = (_DWORD *)a1[12];
      if ( !v8 )
        break;
LABEL_15:
      a1 = v8;
    }
    if ( v4 > v5 )
      v5 = v4;
    while ( 1 )
    {
      a1 = (_DWORD *)a1[14];
      --v4;
      if ( a1 == v7 )
        break;
      v8 = (_DWORD *)a1[12];
      if ( v8 )
        goto LABEL_15;
    }
  }
  return _gNestedWindowLimit >= v5;
}
