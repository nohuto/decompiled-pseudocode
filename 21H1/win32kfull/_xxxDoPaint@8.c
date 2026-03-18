/*
 * XREFs of _xxxDoPaint@8 @ 0x6BD40
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     ?xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z @ 0x6BFB0 (-xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _DecPaintCount@4 @ 0xAA80E (_DecPaintCount@4.c)
 *     __IsChild@8 @ 0xAEE18 (__IsChild@8.c)
 */

int __fastcall xxxDoPaint(struct tagWND *a1, int a2)
{
  int v2; // esi
  int v3; // eax
  struct tagWND *v4; // edi
  int v5; // eax
  _DWORD *i; // esi
  _DWORD *v7; // eax
  struct tagWND *v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  struct tagWND *v16; // [esp+0h] [ebp-28h]
  struct tagTHREADINFO *v17; // [esp+4h] [ebp-24h]
  int v18; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD *v19; // [esp+10h] [ebp-18h]
  void (__stdcall *v20)(_DWORD *); // [esp+14h] [ebp-14h]
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  struct tagWND *v23; // [esp+20h] [ebp-8h]
  struct tagWND *v24; // [esp+24h] [ebp-4h]

  v2 = a2;
  v23 = a1;
  v22 = a2;
  if ( (*(_BYTE *)(_gptiCurrent + 264) & 4) == 0 )
  {
    v4 = xxxInternalDoPaint(v16, v17);
    v24 = v4;
LABEL_12:
    a1 = v23;
    goto LABEL_13;
  }
  v3 = *(_DWORD *)(_gptiCurrent + 332);
  v21 = v3;
  if ( !v3 )
    return 0;
  v4 = *(struct tagWND **)(*(_DWORD *)(v3 + 28) + 4);
  v24 = v4;
  v5 = *((_DWORD *)v4 + 5);
  if ( !*(_DWORD *)(v5 + 92) && (*(_BYTE *)(v5 + 9) & 0x10) == 0 )
  {
    v4 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v24 = 0;
    PushW32ThreadLock(0, &v18, UserDereferenceObject);
    for ( i = *(_DWORD **)(v21 + 8); i; i = (_DWORD *)i[4] )
    {
      ObfReferenceObject(i);
      v7 = v19;
      v19 = i;
      if ( v7 )
        v20(v7);
      v4 = xxxInternalDoPaint(v16, v17);
      v24 = v4;
      if ( v4 )
        break;
    }
    PopAndFreeW32ThreadLock((int)&v18);
    v2 = v22;
    goto LABEL_12;
  }
LABEL_13:
  if ( !v4 || a1 && a1 != v4 && !_IsChild(a1, v4) )
    return 0;
  if ( (*(_BYTE *)(*((_DWORD *)v4 + 5) + 9) & 0x10) != 0 )
  {
    SetOrClrWF(0, (int)v4, 0x110u, 1);
    if ( !*(_DWORD *)(*((_DWORD *)v4 + 5) + 92) )
      DecPaintCount(v4);
  }
  SetOrClrWF(0, (int)v4, 0x404u, 1);
  SetOrClrWF(0, (int)v4, 0x120u, 1);
  v8 = v4;
  while ( (*(_WORD *)(*((_DWORD *)v8 + 5) + 30) & 0x3FFF) != 0x29D )
  {
    v8 = (struct tagWND *)*((_DWORD *)v8 + 14);
    if ( (*(_BYTE *)(*((_DWORD *)v8 + 5) + 23) & 2) == 0 )
    {
      SetOrClrWF(1, (int)v4, 0x401u, 1);
      break;
    }
    if ( !v8 )
      break;
  }
  *(_DWORD *)v2 = *(_DWORD *)v4;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  v9 = MEMORY[0xFFDF0004];
  v21 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v11 = MEMORY[0xFFDF0324];
    v12 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v11 = MEMORY[0xFFDF0324];
        v12 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v4 = v24;
      v2 = v22;
      v9 = v21;
    }
    v10 = v9 * (v11 << 8) + ((v12 * (unsigned __int64)(unsigned int)v9) >> 24);
  }
  else
  {
    v10 = (MEMORY[0xFFDF0320] * (unsigned __int64)(unsigned int)MEMORY[0xFFDF0004]) >> 24;
  }
  *(_DWORD *)(v2 + 16) = v10;
  *(_QWORD *)(v2 + 20) = LogicalCursorPosFromDpiAwarenessContext(*(_DWORD *)(*((_DWORD *)v4 + 5) + 184));
  v13 = *((_DWORD *)v4 + 5);
  if ( (*(_BYTE *)(v13 + 13) & 2) == 0 && (*(_BYTE *)(v13 + 23) & 0x20) != 0 && *(_DWORD *)(*((_DWORD *)v4 + 19) + 48) )
  {
    *(_DWORD *)(v2 + 8) = 1;
    v14 = 38;
  }
  else
  {
    v14 = 15;
  }
  *(_DWORD *)(v2 + 4) = v14;
  EtwTraceRetrievePseudoMessage(0, v2, 1);
  return 1;
}
