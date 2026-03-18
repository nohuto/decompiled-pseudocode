/*
 * XREFs of _SlowAppThreadInShellFrame@16 @ 0xC4096
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 * Callees:
 *     _IsDebuggerAttached@4 @ 0x197BE (_IsDebuggerAttached@4.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     ?OtherThreadsKeyboardInput@@YGPAUtagTHREADINFO@@PAUtagQ@@PAUtagQMSG@@@Z @ 0x14D606 (-OtherThreadsKeyboardInput@@YGPAUtagTHREADINFO@@PAUtagQ@@PAUtagQMSG@@@Z.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(int a1, struct tagTHREADINFO *a2, int a3, int a4)
{
  int v4; // ebx
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ebx
  struct tagTHREADINFO *v10; // eax
  struct tagTHREADINFO *v11; // esi
  _DWORD *v12; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  _DWORD *v22; // ecx
  _DWORD *v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // esi
  struct tagQ *v27; // [esp+0h] [ebp-30h]
  struct tagQMSG *v28; // [esp+4h] [ebp-2Ch]
  int v29[3]; // [esp+Ch] [ebp-24h] BYREF
  struct tagTHREADINFO *v30; // [esp+18h] [ebp-18h]
  unsigned int v31; // [esp+1Ch] [ebp-14h]
  int v32; // [esp+20h] [ebp-10h]
  int v33; // [esp+24h] [ebp-Ch]
  int v34; // [esp+28h] [ebp-8h]
  _DWORD *v35; // [esp+2Ch] [ebp-4h]
  int v36; // [esp+38h] [ebp+8h]
  int v37; // [esp+38h] [ebp+8h]
  unsigned int v38; // [esp+3Ch] [ebp+Ch]

  v4 = a1;
  v30 = a2;
  v34 = a1;
  v35 = *(_DWORD **)(a1 + 236);
  v5 = v35;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v29, (int)v35);
  v6 = MEMORY[0xFFDF0004];
  v33 = v5[3];
  v32 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v14 = MEMORY[0xFFDF0324];
    v31 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
    {
      v15 = v31;
    }
    else
    {
      do
      {
        _mm_pause();
        v15 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v5 = v35;
      v14 = MEMORY[0xFFDF0324];
      v4 = v34;
      v6 = v32;
    }
    v7 = v32 * (v14 << 8) + (((unsigned int)v6 * (unsigned __int64)v15) >> 24);
  }
  else
  {
    v7 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v8 = *(_DWORD *)(*(_DWORD *)(v4 + 236) + 60);
  if ( v8 )
  {
    v16 = *(_DWORD *)(v8 + 8);
    if ( v16 )
    {
      if ( IsDebuggerAttached(*(_DWORD **)(v16 + 232)) )
        return 0;
    }
  }
  if ( a4 )
  {
    v9 = _gdwMDAQThreshold / 0xAu;
    v10 = (struct tagTHREADINFO *)v34;
    v17 = *(_DWORD *)(v34 + 368);
    if ( v17 && (*(_DWORD *)(v17 + 184) & 0x100000) != 0 )
      v9 = _gdwMDAQThreshold / 0x14u;
  }
  else
  {
    v9 = _gdwMDAQTimeoutDefenseInDepth;
    v10 = (struct tagTHREADINFO *)v34;
  }
  v11 = (struct tagTHREADINFO *)v5[9];
  if ( v11 )
  {
    if ( v11 != v10 && v11 == v30 )
    {
      v18 = v35[10];
      if ( v18 )
      {
        if ( a3 == v18 )
        {
          if ( IsDebuggerAttached(*((_DWORD **)v11 + 58)) )
            return 0;
          if ( v33 && v7 - *(_DWORD *)(v35[3] + 24) >= v9 )
            return v11;
          v19 = *((_DWORD *)v11 + 112);
          if ( v19 )
          {
            if ( v7 - *(_DWORD *)(v19 + 24) >= v9 )
              return v11;
          }
          if ( v7 - *(_DWORD *)(*(_DWORD *)(v35[9] + 244) + 12) >= v9 )
            return v11;
        }
      }
    }
  }
  if ( v33 )
  {
    v11 = *(struct tagTHREADINFO **)(v33 + 68);
    if ( v11 )
    {
      if ( IsDebuggerAttached(*((_DWORD **)v11 + 58)) )
        return 0;
      v20 = v34;
      v21 = v33;
      v22 = v35;
      if ( v11 == (struct tagTHREADINFO *)v34 )
      {
        v11 = OtherThreadsKeyboardInput(v27, v28);
        if ( !v11 )
          goto LABEL_8;
        v20 = v34;
      }
      if ( a4 || (v22 = v35, (*(_WORD *)(*(_DWORD *)(v20 + 244) + 6) & 0x1084) != 0) )
      {
        if ( v7 - *(_DWORD *)(v21 + 24) >= v9 || (unsigned int)(v22[5] + *((_DWORD *)v11 + 114)) > 0x100 )
          return v11;
      }
    }
  }
LABEL_8:
  v11 = (struct tagTHREADINFO *)v35[9];
  if ( !v11 || v11 == (struct tagTHREADINFO *)v34 )
    goto LABEL_9;
  if ( IsDebuggerAttached(*((_DWORD **)v11 + 58)) )
    return 0;
  v23 = v35;
  v24 = v35[10];
  if ( !v24
    || ((v36 = *((_DWORD *)v11 + 112), v24 != v36) || (v23 = v35, v7 - *(_DWORD *)(v36 + 24) < v9))
    && ((v37 = v23[3], v24 != v37) || v7 - *(_DWORD *)(v37 + 24) < v9) )
  {
    if ( !a4
      || v7 - *(_DWORD *)(*((_DWORD *)v11 + 61) + 12) < v9 && (unsigned int)(v23[5] + *((_DWORD *)v11 + 114)) <= 0x100 )
    {
LABEL_9:
      v12 = *(_DWORD **)(v34 + 368);
      if ( v12 && (v12[46] & 0x100000) != 0 )
      {
        if ( (v38 = v12[76], v38 >= 3) && v12[75] / v38 > v9 || (v25 = v12[74]) != 0 && v7 - v25 >= 4 * v9 )
        {
          v26 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v34 + 236) + 64) + 60);
          if ( v26 )
            return *(struct tagTHREADINFO **)(v26 + 8);
        }
      }
      return 0;
    }
  }
  return v11;
}
