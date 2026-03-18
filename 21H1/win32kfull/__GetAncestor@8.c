/*
 * XREFs of __GetAncestor@8 @ 0xB52FC
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YGJPAUHWND__@@PAVIInputQueue@@PAPAUtagWND@@@Z @ 0xB37AA (-ValidateAndAttachQueueToInputWindow@@YGJPAUHWND__@@PAVIInputQueue@@PAPAUtagWND@@@Z.c)
 *     _NtUserGetAncestor@8 @ 0xB52B4 (_NtUserGetAncestor@8.c)
 *     _NtUserShutdownBlockReasonCreate@12 @ 0xD33A8 (_NtUserShutdownBlockReasonCreate@12.c)
 *     _HasMessageRootWindow@4 @ 0x16F3D4 (_HasMessageRootWindow@4.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     __GetParent@4 @ 0xB5390 (__GetParent@4.c)
 */

_DWORD *__fastcall _GetAncestor(_DWORD *a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // esi
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // edi
  int v13; // esi
  int v15; // edx
  _DWORD *v16; // esi
  int v17; // edx
  _DWORD *v18; // eax

  v2 = a1[3];
  v3 = 0;
  if ( v2 )
    v3 = *(_DWORD **)(v2 + 52);
  if ( a1 == v3 && a2 == 4 )
    return a1;
  v4 = 0;
  if ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 4);
    if ( v5 )
      v4 = *(_DWORD **)(v5 + 12);
  }
  if ( a1 == v4 )
    return 0;
  v6 = 0;
  if ( v2 )
    v6 = *(_DWORD **)(v2 + 52);
  if ( a1 == v6 || !a1[14] )
    return 0;
  v7 = a2 - 1;
  if ( !v7 )
    return (_DWORD *)a1[14];
  v8 = v7 - 1;
  if ( v8 )
  {
    v15 = v8 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        while ( 1 )
        {
          v16 = (_DWORD *)a1[14];
          if ( !v16 || v16 == (_DWORD *)_GetDesktopWindow(a1) )
            break;
          v17 = a1[3];
          v18 = 0;
          if ( v17 )
            v18 = *(_DWORD **)(v17 + 52);
          if ( a1 == v18 )
            break;
          a1 = v16;
        }
      }
    }
    else
    {
      while ( _GetParent() )
        ;
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = a1[3];
      v10 = 0;
      v11 = a1[14];
      if ( v9 )
      {
        v12 = *(_DWORD *)(v9 + 4);
        if ( v12 )
          v10 = *(_DWORD *)(v12 + 12);
      }
      if ( v11 == v10 )
        break;
      v13 = 0;
      if ( v9 )
        v13 = *(_DWORD *)(v9 + 52);
      if ( v11 == v13 )
        break;
      a1 = (_DWORD *)a1[14];
    }
  }
  return a1;
}
