/*
 * XREFs of zzzSetDesktop @ 0x1C00D7E10
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C007DFF0 (xxxSetThreadDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x1C003E860 (GetDesktopView.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     CheckHandleFlag @ 0x1C00D78A8 (CheckHandleFlag.c)
 *     GetJournallingQueue @ 0x1C00D7D80 (GetJournallingQueue.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, unsigned int *a2, void *a3)
{
  PVOID *v6; // r13
  __int64 ThreadWin32Thread; // rax
  char *v8; // r14
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  char *Heap; // rax
  _QWORD *DesktopView; // rax
  __int64 v14; // rdx
  struct tagTHREADINFO *v15; // rdx
  __int64 v16; // rcx
  __int64 JournallingQueue; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r8
  struct tagTHREADINFO **v22; // rdx
  _QWORD v23[6]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v24; // [rsp+88h] [rbp-40h]
  __int64 v25; // [rsp+98h] [rbp-30h]
  PVOID Object; // [rsp+D8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+E8h] [rbp+20h] BYREF

  if ( a2 && (a2[12] & 6) != 0 && a2 != *((unsigned int **)a1 + 57) && a1 != (struct tagTHREADINFO *)gTermIO[2] )
    return 3221225506LL;
  *((_DWORD *)a1 + 122) &= ~0x400000u;
  *((_QWORD *)a1 + 74) = a3;
  if ( a3 )
  {
    HandleInformation = 0LL;
    Object = 0LL;
    if ( ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) < 0 )
    {
      *((_DWORD *)a1 + 222) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 222) = HandleInformation.GrantedAccess;
      if ( (unsigned int)CheckHandleFlag(0LL, *a2, (__int64)a3, 0LL) )
        *((_DWORD *)a1 + 122) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 222) = 0;
  }
  if ( a2 && a2 == *((unsigned int **)a1 + 57) )
    return 0LL;
  v6 = (PVOID *)*((_QWORD *)a1 + 57);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v23[0] = *(_QWORD *)(ThreadWin32Thread + 16);
  *(_QWORD *)(ThreadWin32Thread + 16) = v23;
  v23[1] = v6;
  v23[2] = UserDereferenceObject;
  if ( v6 )
    ObfReferenceObject(v6);
  v8 = (char *)*((_QWORD *)a1 + 56);
  if ( *((_QWORD *)a1 + 57) )
  {
    v21 = *((_QWORD *)a1 + 93);
    v22 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 94);
    if ( *(struct tagTHREADINFO **)(v21 + 8) != (struct tagTHREADINFO *)((char *)a1 + 744)
      || *v22 != (struct tagTHREADINFO *)((char *)a1 + 744) )
    {
      goto LABEL_42;
    }
    *v22 = (struct tagTHREADINFO *)v21;
    *(_QWORD *)(v21 + 8) = v22;
  }
  v24 = *(_OWORD *)((char *)a1 + 392);
  v25 = *((_QWORD *)a1 + 51);
  LockObjectAssignment((char *)a1 + 456, a2);
  if ( !a2 )
  {
    *((_QWORD *)a1 + 58) = gpkdiStatic;
    goto LABEL_33;
  }
  *((_QWORD *)a1 + 58) = *((_QWORD *)a2 + 1);
  v9 = (_QWORD *)((char *)a1 + 744);
  v10 = a2 + 42;
  v11 = *((_QWORD *)a2 + 21);
  if ( *(unsigned int **)(v11 + 8) != a2 + 42 )
LABEL_42:
    __fastfail(3u);
  *v9 = v11;
  *((_QWORD *)a1 + 94) = v10;
  *(_QWORD *)(v11 + 8) = v9;
  *v10 = v9;
  Heap = (char *)RtlAllocateHeap(*((PVOID *)a2 + 16), 0, 0x18uLL);
  *((_QWORD *)a1 + 56) = Heap;
  if ( !Heap )
  {
LABEL_33:
    Heap = (char *)a1 + 1040;
    *((_QWORD *)a1 + 56) = (char *)a1 + 1040;
  }
  if ( v8 )
  {
    if ( v8 != Heap )
    {
      *(_OWORD *)Heap = *(_OWORD *)v8;
      *((_QWORD *)Heap + 2) = *((_QWORD *)v8 + 2);
    }
    if ( v8 != (char *)a1 + 1040 )
      RtlFreeHeap(v6[16], 0, v8);
  }
  else
  {
    *(_OWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 2) = 0LL;
  }
  if ( a2 && (DesktopView = GetDesktopView(*((_QWORD *)a1 + 53), (__int64)a2)) != 0LL )
  {
    v14 = *((_QWORD *)a2 + 2) - DesktopView[2];
    *((_QWORD *)a1 + 59) = v14;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = **((_QWORD **)a1 + 58) - v14;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = DesktopView[2];
  }
  else
  {
    *((_QWORD *)a1 + 59) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = 0LL;
    v19 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 190) = v19;
    v20 = *((_QWORD *)a1 + 54);
    if ( v20 )
      *(_DWORD *)(v20 + 384) = v19;
  }
  v15 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 56);
  v16 = *((_QWORD *)a1 + 60);
  if ( v15 == (struct tagTHREADINFO *)((char *)a1 + 1040) )
    *(_QWORD *)(v16 + 96) = 0LL;
  else
    *(_QWORD *)(v16 + 96) = (char *)v15 - *((_QWORD *)a1 + 59);
  if ( *((_QWORD *)a1 + 54) )
  {
    JournallingQueue = GetJournallingQueue((__int64)a1);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 392);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue, 0LL, 0);
    }
  }
  PopAndFreeW32ThreadLock(v23);
  return 0LL;
}
