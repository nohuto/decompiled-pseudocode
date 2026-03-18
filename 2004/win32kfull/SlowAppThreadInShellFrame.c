/*
 * XREFs of SlowAppThreadInShellFrame @ 0x1C011AC54
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C0030344 (IsDebuggerAttached.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x1C01E1224 (-OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned int v12; // esi
  struct tagTHREADINFO *v13; // rdi
  int v14; // r12d
  _DWORD *v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF

  v4 = *((_QWORD *)a1 + 53);
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v27, v4);
  v8 = *(_QWORD *)(v4 + 24);
  v9 = 0LL;
  v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 112LL);
  if ( v11 )
  {
    v17 = *(_QWORD *)(v11 + 16);
    if ( v17 )
    {
      if ( (unsigned int)IsDebuggerAttached(*(__int64 **)(v17 + 416)) )
        return (struct tagTHREADINFO *)v9;
    }
  }
  if ( a4 )
  {
    v18 = *((_QWORD *)a1 + 83);
    v12 = gdwMDAQThreshold / 0xAu;
    if ( v18 && (*(_DWORD *)(v18 + 196) & 0x100000) != 0 )
      v12 = gdwMDAQThreshold / 0x14u;
  }
  else
  {
    v12 = gdwMDAQTimeoutDefenseInDepth;
  }
  v13 = *(struct tagTHREADINFO **)(v4 + 64);
  if ( v13 )
  {
    if ( v13 != a1 && v13 == a2 )
    {
      v19 = *(_QWORD *)(v4 + 72);
      if ( v19 )
      {
        if ( a3 == v19 )
        {
          if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v13 + 52)) )
            return (struct tagTHREADINFO *)v9;
          if ( v8 && (int)v10 - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 48LL) >= v12 )
            return v13;
          v20 = *((_QWORD *)v13 + 100);
          if ( v20 )
          {
            if ( (int)v10 - *(_DWORD *)(v20 + 48) >= v12 )
              return v13;
          }
          if ( (int)v10 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 64) + 440LL) + 12LL) >= v12 )
            return v13;
        }
      }
    }
  }
  if ( !v8 )
    goto LABEL_6;
  v13 = *(struct tagTHREADINFO **)(v8 + 104);
  if ( !v13 )
    goto LABEL_6;
  if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v13 + 52)) )
    return (struct tagTHREADINFO *)v9;
  if ( v13 != a1 || (v13 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v8)) != 0LL )
  {
    v14 = a4;
    if ( (a4 || (*(_WORD *)(*((_QWORD *)a1 + 55) + 6LL) & 0x1084) != 0)
      && ((int)v10 - *(_DWORD *)(v8 + 48) >= v12 || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v13 + 204)) > 0x100) )
    {
      return v13;
    }
  }
  else
  {
LABEL_6:
    v14 = a4;
  }
  v13 = *(struct tagTHREADINFO **)(v4 + 64);
  if ( v13 && v13 != a1 )
  {
    if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v13 + 52)) )
      return (struct tagTHREADINFO *)v9;
    v21 = *(_QWORD *)(v4 + 72);
    if ( v21 )
    {
      v22 = *((_QWORD *)v13 + 100);
      if ( v21 == v22 && (int)v10 - *(_DWORD *)(v22 + 48) >= v12 )
        return v13;
      v23 = *(_QWORD *)(v4 + 24);
      if ( v21 == v23 && (int)v10 - *(_DWORD *)(v23 + 48) >= v12 )
        return v13;
    }
    if ( v14
      && ((int)v10 - *(_DWORD *)(*((_QWORD *)v13 + 55) + 12LL) >= v12
       || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v13 + 204)) > 0x100) )
    {
      return v13;
    }
  }
  v15 = (_DWORD *)*((_QWORD *)a1 + 83);
  if ( v15 && (v15[49] & 0x100000) != 0 )
  {
    if ( (v24 = v15[84], v24 >= 3) && v15[83] / v24 > v12 || (v25 = v15[82]) != 0 && (int)v10 - v25 >= 4 * v12 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 53) + 120LL) + 112LL);
      if ( v26 )
        return *(struct tagTHREADINFO **)(v26 + 16);
    }
  }
  return (struct tagTHREADINFO *)v9;
}
